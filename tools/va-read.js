const fs = require("fs");
const [,, file, ...vas] = process.argv;
const buf = fs.readFileSync(file);
const e_lfanew = buf.readUInt32LE(0x3c);
const numSections = buf.readUInt16LE(e_lfanew + 6);
const optSize = buf.readUInt16LE(e_lfanew + 20);
let off = e_lfanew + 24 + optSize;
const sections = [];
for (let i = 0; i < numSections; i++) {
  const name = buf.toString("ascii", off, off + 8).replace(/\0/g, "");
  const vsize = buf.readUInt32LE(off + 8);
  const vaddr = buf.readUInt32LE(off + 12);
  const rawSize = buf.readUInt32LE(off + 16);
  const rawPtr = buf.readUInt32LE(off + 20);
  sections.push({ name, vaddr, vsize, rawPtr, rawSize });
  off += 40;
}
const base = 0x180000000;
for (const vastr of vas) {
  const va = Number(vastr);
  const rva = va - base;
  const s = sections.find((x) => rva >= x.vaddr && rva < x.vaddr + Math.max(x.vsize, x.rawSize));
  if (!s) { console.log(vastr, "NO_SECTION"); continue; }
  const fo = s.rawPtr + (rva - s.vaddr);
  console.log(vastr, "section=" + s.name, "fileoff=0x" + fo.toString(16));
  console.log("  hex+0: " + buf.subarray(fo, fo + 64).toString("hex"));
  for (const skip of [8, 12, 16]) {
    let end = fo + skip;
    while (end + 1 < buf.length && buf.readUInt16LE(end) !== 0 && end - fo < 256) end += 2;
    const t = buf.toString("utf16le", fo + skip, end).replace(/[^\x20-\x7e]/g, "");
    if (t.length >= 4) console.log("  utf16+" + skip + ": " + JSON.stringify(t.slice(0, 160)));
  }
}
