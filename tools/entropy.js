// Entropia de Shannon por bloco: acha regioes encriptadas/comprimidas.
// Uso: node entropy.js <arquivo> [blocoKB=256] [top=12]
const fs = require("fs");
const [,, file, bkb = "256", topN = "12"] = process.argv;
const b = fs.readFileSync(file);
const BS = Number(bkb) * 1024;
const out = [];
for (let off = 0; off < b.length; off += BS) {
  const end = Math.min(off + BS, b.length);
  const freq = new Array(256).fill(0);
  for (let i = off; i < end; i++) freq[b[i]]++;
  let h = 0;
  const n = end - off;
  for (const f of freq) {
    if (!f) continue;
    const p = f / n;
    h -= p * Math.log2(p);
  }
  out.push({ off, h });
}
out.sort((a, c) => c.h - a.h);
console.log("blocos=" + out.length + " media=" + (out.reduce((s, x) => s + x.h, 0) / out.length).toFixed(3) + " bits/byte");
for (const x of out.slice(0, Number(topN))) {
  console.log("  0x" + x.off.toString(16).padStart(8, "0") + "  H=" + x.h.toFixed(3));
}
