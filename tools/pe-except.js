// Verifica a tabela de exceções (RUNTIME_FUNCTION) real via data directory #3 e
// compara com a secção NOMEADA `.pdata` (diagnostico de nomes enganosos).
// Uso: node pe-except.js <ficheiro>
const fs = require("fs");
const f = fs.readFileSync(process.argv[2]);
const u16 = o => f.readUInt16LE(o);
const u32 = o => f.readUInt32LE(o);

const pe = u32(0x3c), coff = pe + 4;
const nSec = u16(coff + 2), szOpt = u16(coff + 16), opt = coff + 20;
const isP = u16(opt) === 0x20b;
const dirOff = isP ? opt + 112 : opt + 96;

const secs = [];
const sTab = opt + szOpt;
for (let i = 0; i < nSec; i++) {
  const o = sTab + i * 40;
  secs.push({ n: f.toString("ascii", o, o + 8).replace(/\0/g, ""), va: u32(o + 12), vsz: u32(o + 8), rawsz: u32(o + 16), raw: u32(o + 20) });
}
const off = r => { for (const s of secs) if (r >= s.va && r < s.va + Math.max(s.rawsz, 1)) return s.raw + (r - s.va); return -1; };
const secOf = r => { for (const s of secs) if (r >= s.va && r < s.va + Math.max(s.vsz, s.rawsz, 1)) return s.n; return "??"; };

const exRva = u32(dirOff + 3 * 8), exSz = u32(dirOff + 3 * 8 + 4);
console.log(`Exception dir: RVA=0x${exRva.toString(16)} size=0x${exSz.toString(16)} entradas(12B)=${exSz / 12}`);
const b = off(exRva);
console.log(`  fica na secção: ${secOf(exRva)}  file=0x${b.toString(16)}`);

const N = Math.min(12, (exSz / 12) | 0);
for (let i = 0; i < N; i++) {
  const o = b + i * 12;
  const beg = u32(o), end = u32(o + 4), ui = u32(o + 8);
  console.log(`  [${i}] begin=0x${beg.toString(16)} end=0x${end.toString(16)} unwind=0x${ui.toString(16)} size=${end - beg}`);
}
let ok = 0, tot = 0, prev = 0, badEx = 0;
const lim = Math.min(3000, (exSz / 12) | 0);
for (let i = 0; i < lim; i++) {
  const o = b + i * 12;
  const beg = u32(o), end = u32(o + 4);
  tot++;
  if (beg >= prev && end > beg && end < 0x2400000) ok++; else badEx++;
  prev = beg;
}
console.log(`validação ${lim} entradas: monotónicas+em-intervalo=${ok}/${tot} (fora=${badEx})`);

const pd = secs.find(s => s.n === ".pdata");
if (pd) {
  const q = pd.raw;
  console.log(`secção .pdata (nomeada) 1ªs entradas interpretadas como RUNTIME_FUNCTION:`);
  for (let i = 0; i < 4; i++) {
    const o = q + i * 12;
    console.log(`  [${i}] begin=0x${u32(o).toString(16)} end=0x${u32(o + 4).toString(16)} unwind=0x${u32(o + 8).toString(16)}`);
  }
}
