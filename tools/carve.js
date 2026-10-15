const fs = require("fs");
const zlib = require("zlib");
const [,, file, offStr, lenStr = "512"] = process.argv;
const b = fs.readFileSync(file);
const off = Number(offStr), len = Number(lenStr);
const s = b.subarray(off, off + len);
let hex = "", asc = "";
for (let i = 0; i < s.length; i += 16) {
  let h = "", a = "";
  for (let k = 0; k < 16 && i + k < s.length; k++) {
    const v = s[i + k];
    h += v.toString(16).padStart(2, "0") + " ";
    a += v >= 32 && v < 127 ? String.fromCharCode(v) : ".";
  }
  hex += "0x" + (off + i).toString(16) + "  " + h.padEnd(48) + " " + a + "\n";
}
console.log(hex);
try {
  const out = zlib.gunzipSync(s);
  console.log("GUNZIP OK len=" + out.length + " head=" + JSON.stringify(out.subarray(0, 160).toString("utf8")));
} catch { console.log("(nao e gzip valido a partir daqui)"); }
