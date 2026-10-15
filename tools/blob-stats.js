// Estatistica de um blob: entropia, blocos 16B repetidos (detetor ECB),
// magias em alinhamentos, top de bytes.
// Uso: node blob-stats.js <ficheiro> [blockBytes=16]
const fs = require("fs");
const [,, file, bsArg] = process.argv;
const bs = Number(bsArg || 16);
const b = fs.readFileSync(file);

function entropy(buf) {
  const f = new Array(256).fill(0);
  for (const v of buf) f[v]++;
  let h = 0;
  for (const c of f) { if (!c) continue; const p = c / buf.length; h -= p * Math.log2(p); }
  return h;
}

console.log(`ficheiro=${file} bytes=${b.length} entropia=${entropy(b).toFixed(4)}`);

// blocos repetidos (ECB detector)
const seen = new Map();
for (let i = 0; i + bs <= b.length; i += bs) {
  const k = b.toString("hex", i, i + bs);
  seen.set(k, (seen.get(k) || 0) + 1);
}
const reps = [...seen.entries()].filter(([, n]) => n > 1).sort((a, c) => c[1] - a[1]);
const totalBlocks = Math.floor(b.length / bs);
console.log(`blocos ${bs}B=${totalBlocks} duplicados=${reps.length} (top):`);
for (const [k, n] of reps.slice(0, 8)) console.log(`  x${n}  ${k}`);

// magias conhecidas em qualquer byte (nao so alinhado)
const magics = [
  ["MZ", "4d5a"], ["ELF", "7f454c46"], ["bplist", "62706c697374"],
  ["PK\\x03\\x04", "504b0304"], ["zstd", "28b52ffd"], ["xz", "fd377a585a00"],
  ["gzip", "1f8b"], ["7z", "377abcaf271c"], ["SQLite", "53514c697465"],
];
for (const [name, hex] of magics) {
  const p = Buffer.from(hex, "hex");
  let i = b.indexOf(p), n = 0, arr = [];
  while (i !== -1 && n < 5) { arr.push("0x" + i.toString(16)); i = b.indexOf(p, i + 1); n++; }
  if (arr.length) console.log(`magia ${name}: ${arr.length} @ ${arr.join(" ")}`);
}

// histograma top
const f = new Array(256).fill(0);
for (const v of b) f[v]++;
const top = f.map((n, v) => [n, v]).sort((a, c) => c[0] - a[0]).slice(0, 5);
console.log("bytes top: " + top.map(([n, v]) => `${n} x ${v.toString(16)}`).join("  "));
