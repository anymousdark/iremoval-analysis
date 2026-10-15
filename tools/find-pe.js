const fs = require("fs");
const file = process.argv[2];
const b = fs.readFileSync(file);
const hits = [];
for (let i = 0; i + 6 < b.length; i++) {
  if (b[i] === 0x4d && b[i + 1] === 0x5a) {
    const lf = b.readUInt32LE(i + 0x3c);
    if (lf < 1024 && i + lf + 6 < b.length &&
        b[i + lf] === 0x50 && b[i + lf + 1] === 0x45 && b[i + lf + 2] === 0 && b[i + lf + 3] === 0) {
      const mach = b.readUInt16LE(i + lf + 4);
      hits.push({ off: i, hex: "0x" + i.toString(16), machine: mach === 0x14c ? "x86" : mach === 0x8664 ? "x64" : "0x" + mach.toString(16) });
      i += 64;
    }
  }
}
console.log("PEs: " + hits.length);
for (const h of hits.slice(0, 40)) console.log(h.hex, h.machine);
