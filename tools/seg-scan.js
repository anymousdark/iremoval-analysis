// Varre uma região em blocos finos: entropia + heuristica de "codigo x86".
// Mostra se um segmento e plaintext (codigo) ou uniforme (cifra/aleatorio),
// e localiza as ilhas de cada tipo.
// Uso: node seg-scan.js <ficheiro> <offsetHex> <lenHex> [blocoKB=4] [listaMinimo=20]
const fs = require("fs");
const [,, file, offHex, lenHex, kbArg, capArg] = process.argv;
const start = parseInt(offHex, 16);
const len = parseInt(lenHex, 16);
const blk = Number(kbArg || 4) * 1024;
const cap = Number(capArg || 20);
const b = fs.readFileSync(file);

function entropy(s, e) {
  const f = new Array(256).fill(0);
  for (let i = s; i < e; i++) f[b[i]]++;
  let h = 0, n = e - s;
  for (const c of f) { if (!c) continue; const p = c / n; h -= p * Math.log2(p); }
  return h;
}
// contagem de bytes "de codigo" (prefixos comuns + zeros/imediatos + int3)
function codeScore(s, e) {
  let code = 0;
  for (let i = s; i < e; i++) {
    const v = b[i];
    if (v === 0x00 || v === 0xcc || v === 0x90) code += 1;
  }
  let calls = 0, rets = 0, rex = 0;
  for (let i = s; i + 1 < e; i++) {
    const v = b[i];
    if (v === 0xe8 || v === 0xe9) calls++;
    else if (v === 0xc3 || v === 0xc2) rets++;
    else if (v === 0x48 || v === 0x4c || v === 0x40 || v === 0x44) rex++;
  }
  const n = e - s;
  return { z: code / n, f: calls / n, r: rets / n, x: rex / n };
}

const lo = []; // blocos de baixa entropia (plaintext)
const hi = []; // blocos de entropia alta (uniforme)
let sum = 0, nb = 0;
for (let o = start; o + blk <= start + len; o += blk) {
  const h = entropy(o, o + blk);
  const c = codeScore(o, o + blk);
  sum += h; nb++;
  const rec = `0x${o.toString(16)} H=${h.toFixed(2)} zero/0cc/0x90=${c.z.toFixed(3)} call/jmp=${c.f.toFixed(5)} ret=${c.r.toFixed(5)} rex=${c.x.toFixed(3)}`;
  if (h < 7.6) lo.push(rec); else if (h >= 7.9) hi.push(rec);
}
console.log(`${file} [0x${start.toString(16)}..0x${(start + len).toString(16)}] bloco=${blk}B n=${nb} media=${(sum / nb).toFixed(3)}`);
console.log(`blocos H<7.6 (plaintext provavel)=${lo.length}  blocos H>=7.9 (uniforme)=${hi.length}`);
console.log("--- baixa entropia (primeiros " + cap + ") ---");
for (const r of lo.slice(0, cap)) console.log("  " + r);
console.log("--- alta entropia (primeiros " + cap + ") ---");
for (const r of hi.slice(0, cap)) console.log("  " + r);
