// Procura constantes criptograficas (AES S-box, SHA-256 K, ChaCha sigma).
// Uso: node find-const.js <arquivo>
const fs = require("fs");
const [,, file] = process.argv;
const b = fs.readFileSync(file);
const sigs = [
  ["AES S-box", Buffer.from([0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76])],
  ["AES inv-S-box", Buffer.from([0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb])],
  ["SHA256 K", Buffer.from([0x28, 0xa2, 0xf8, 0x28, 0xa2, 0xf8])],
  ["ChaCha sigma", Buffer.from("expand 32-byte k", "ascii")],
  ["TEA delta", Buffer.from([0x79, 0xb9, 0x9e, 0x37])],
];
for (const [name, sig] of sigs) {
  const hits = [];
  let idx = b.indexOf(sig, 0);
  while (idx !== -1 && hits.length < 10) { hits.push(idx); idx = b.indexOf(sig, idx + 1); }
  console.log(name + ": " + hits.length + (hits.length ? " @ " + hits.map((h) => "0x" + h.toString(16)).join(" ") : ""));
}
