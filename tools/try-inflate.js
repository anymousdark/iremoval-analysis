const fs = require("fs");
const zlib = require("zlib");
const [,, file] = process.argv;
const b = fs.readFileSync(file);
const tries = [
  ["gunzip", (x) => zlib.gunzipSync(x)],
  ["inflate", (x) => zlib.inflateSync(x)],
  ["inflateRaw", (x) => zlib.inflateRawSync(x)],
  ["brotli", (x) => zlib.brotliDecompressSync(x)],
];
for (const [name, fn] of tries) {
  for (const off of [0, 8]) {
    try {
      const out = fn(b.subarray(off, off + Math.min(b.length - off, 4 * 1024 * 1024)));
      console.log(name + " off=" + off + " OK outlen=" + out.length);
      console.log("  head=" + JSON.stringify(out.subarray(0, 160).toString("utf8")));
      break;
    } catch {}
  }
}
console.log("done");
