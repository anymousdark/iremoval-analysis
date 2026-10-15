const fs = require("fs");
const [,, file, pat] = process.argv;
const b = fs.readFileSync(file);
const re = new RegExp(pat);
const minLen = 4;
const found = [];
let run = "", start = 0;
const flush = (s, st) => { if (s.length >= minLen && re.test(s)) found.push([st, s]); };
for (let i = 0; i < b.length; i++) {
  const c = b[i];
  if (c >= 0x20 && c < 0x7f) { if (!run) start = i; run += String.fromCharCode(c); }
  else { flush(run, start); run = ""; }
}
flush(run, start);
run = "";
for (let i = 0; i + 1 < b.length; i += 2) {
  const c = b[i], hi = b[i + 1];
  if (hi === 0 && c >= 0x20 && c < 0x7f) { if (!run) start = i; run += String.fromCharCode(c); }
  else { flush(run, start); run = ""; }
}
flush(run, start);
for (const [st, s] of found.slice(0, 40)) {
  const after = b.subarray(st + s.length, st + s.length + 16).toString("hex");
  console.log("0x" + st.toString(16), JSON.stringify(s.slice(0, 90)), "NEXT=" + after);
}
console.log("total matches: " + found.length);
