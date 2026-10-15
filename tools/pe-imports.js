// Tabela de imports PE32+ (usa o data directory #1, corre em NativeAOT onde o
// parser simplificado falhava). Lê DLLs e resolução via ILT/IAT.
// Uso: node pe-imports.js <ficheiro> [filterSubstring]
const fs = require("fs");
const f = fs.readFileSync(process.argv[2]);
const filt = (process.argv[3] || "").toLowerCase();
const u16 = o => f.readUInt16LE(o);
const u32 = o => f.readUInt32LE(o);

const pe = u32(0x3c), coff = pe + 4;
const nSec = u16(coff + 2), szOpt = u16(coff + 16), opt = coff + 20;
const isP = u16(opt) === 0x20b;
const nDir = isP ? u32(opt + 108) : u32(opt + 92);
const dirOff = isP ? opt + 112 : opt + 96;

const secs = [];
const sTab = opt + szOpt;
for (let i = 0; i < nSec; i++) {
  const o = sTab + i * 40;
  secs.push({
    name: f.toString("ascii", o, o + 8).replace(/\0/g, ""),
    va: u32(o + 12), vsz: u32(o + 8), raw: u32(o + 20), rawsz: u32(o + 16),
  });
}
const off = rva => {
  for (const s of secs) if (rva >= s.va && rva < s.va + Math.max(s.rawsz, s.vsz)) return s.raw + (rva - s.va);
  return -1;
};
const str = o => {
  if (o < 0) return "<bad-rva>";
  let s = "";
  for (let i = o; i < f.length && f[i]; i++) s += String.fromCharCode(f[i]);
  return s;
};

const impRva = u32(dirOff + 1 * 8), impSz = u32(dirOff + 1 * 8 + 4);
console.log(`Import dir RVA=0x${impRva.toString(16)} size=0x${impSz.toString(16)}`);
const base = off(impRva);
if (base < 0) { console.error("RVA de import fora de qualquer secção"); process.exit(1); }

const thunkSize = isP ? 8 : 4;
let n = 0;
for (let d = base; d + 20 <= f.length; d += 20) {
  const oft = u32(d), ts = u32(d + 4), fwd = u32(d + 8), nameR = u32(d + 12), ft = u32(d + 16);
  if (!oft && !nameR && !ft) break;
  const name = str(off(nameR));
  n++;
  const funcs = [];
  const lo = off(oft || ft);
  if (lo >= 0) {
    for (let t = lo; t + thunkSize <= f.length; t += thunkSize) {
      if (isP) {
        const val = f.readBigUInt64LE(t);
        if (val === 0n) break;
        if (val & 0x8000000000000000n) funcs.push("ord:" + Number(val & 0xffffn));
        else funcs.push(str(off(Number(val)) + 2));
      } else {
        const val = u32(t);
        if (!val) break;
        if (val & 0x80000000) funcs.push("ord:" + (val & 0xffff));
        else funcs.push(str(off(val) + 2));
      }
      if (funcs.length > 5000) break;
    }
  }
  if (ts) funcs.push(`[TimeDateStamp=0x${ts.toString(16)}${fwd ? " bound/forward" : ""}]`);
  const show = !filt || name.toLowerCase().includes(filt) || funcs.some(x => (x || "").toLowerCase().includes(filt));
  if (show) {
    console.log(`\n[${n}] ${name}  OLT=0x${oft.toString(16)} IAT=0x${ft.toString(16)}  funcs=${funcs.length}`);
    for (const x of funcs) console.log(`      ${x}`);
  }
  if (n > 400) { console.log("... limite"); break; }
}
console.log(`\ntotal DLLs importadas: ${n}`);
