const fs = require("fs");
const file = process.argv[2];
const b = fs.readFileSync(file);
const e_lfanew = b.readUInt32LE(0x3c);
const numSections = b.readUInt16LE(e_lfanew + 6);
const optSize = b.readUInt16LE(e_lfanew + 20);
const is64 = b.readUInt16LE(e_lfanew + 24) === 0x20b;
let off = e_lfanew + 24 + optSize;
const sections = [];
for (let i = 0; i < numSections; i++) {
  const name = b.toString("ascii", off, off + 8).replace(/\0/g, "");
  sections.push({ name, vaddr: b.readUInt32LE(off + 12), vsize: b.readUInt32LE(off + 8), rawSize: b.readUInt32LE(off + 16), rawPtr: b.readUInt32LE(off + 20) });
  off += 40;
}
const ddOff = e_lfanew + 24 + (is64 ? 112 : 96);
const expRVA = b.readUInt32LE(ddOff), expSize = b.readUInt32LE(ddOff + 4);
const impRVA = b.readUInt32LE(ddOff + 8), impSize = b.readUInt32LE(ddOff + 12);
function rva2fo(rva) {
  const s = sections.find((x) => rva >= x.vaddr && rva < x.vaddr + Math.max(x.vsize, x.rawSize, 1));
  if (!s) return -1;
  return s.rawPtr + (rva - s.vaddr);
}
function cstr(fo, max = 128) {
  let e = fo;
  while (e < b.length && b[e] !== 0 && e - fo < max) e++;
  return b.toString("ascii", fo, e);
}
console.log("=== EXPORTS (RVA 0x" + expRVA.toString(16) + ") ===");
if (expRVA) {
  const fo = rva2fo(expRVA);
  if (fo < 0) { console.log("export dir unmapped"); return; }
  const numNames = b.readUInt32LE(fo + 22);
  const addrNames = b.readUInt32LE(fo + 30);
  console.log("names=" + numNames);
  for (let i = 0; i < numNames; i++) {
    const nameRVA = b.readUInt32LE(rva2fo(addrNames) + i * 4);
    console.log("  " + cstr(rva2fo(nameRVA)));
  }
}
console.log("=== IMPORTS (RVA 0x" + impRVA.toString(16) + ") ===");
if (impRVA) {
  let d = rva2fo(impRVA);
  for (let n = 0; n < 200; n++) {
    const ilt = b.readUInt32LE(d), nameRVA = b.readUInt32LE(d + 12), iat = b.readUInt32LE(d + 16);
    if (!ilt && !nameRVA && !iat) break;
    const dll = cstr(rva2fo(nameRVA));
    const fns = [];
    let t = rva2fo(ilt || iat);
    for (let k = 0; k < 500; k++) {
      let v;
      if (is64) { v = Number(b.readBigUInt64LE(t)); t += 8; } else { v = b.readUInt32LE(t); t += 4; }
      if (!v) break;
      const isOrd = is64 ? (v & 0x8000000000000000n) !== 0n : (v & 0x80000000) !== 0;
      if (isOrd) fns.push("ord#" + (is64 ? Number(v & 0xffffn) : v & 0xffff));
      else {
        const hfo = rva2fo(Number(is64 ? v & 0xffffffffn : v));
        if (hfo < 0) { fns.push("?"); continue; }
        fns.push(cstr(hfo + 2));
      }
    }
    console.log("  " + dll + " (" + fns.length + "): " + fns.slice(0, 25).join(", ") + (fns.length > 25 ? " ..." : ""));
    d += 20;
  }
}
