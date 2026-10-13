const fs = require("fs");
const file = process.argv[2];
const minLen = Number(process.argv[3] || 6);
const b = fs.readFileSync(file);

const ascii = [], utf16 = [];
// ASCII
let run = "", start = 0;
for (let i = 0; i < b.length; i++) {
  const c = b[i];
  if (c >= 0x20 && c < 0x7f) { if (run.length === 0) start = i; run += String.fromCharCode(c); }
  else { if (run.length >= minLen) ascii.push([start, run]); run = ""; }
}
if (run.length >= minLen) ascii.push([start, run]);
// UTF-16LE
run = ""; start = 0;
for (let i = 0; i + 1 < b.length; i += 2) {
  const c = b[i], hi = b[i + 1];
  if (hi === 0 && c >= 0x20 && c < 0x7f) { if (run.length === 0) start = i; run += String.fromCharCode(c); }
  else { if (run.length >= minLen) utf16.push([start, run]); run = ""; }
}
if (run.length >= minLen) utf16.push([start, run]);

const all = [...ascii.map(x => ["A", ...x]), ...utf16.map(x => ["U", ...x])].sort((a, b2) => a[1] - b2[1]);

const INTERESTING = /(https?:|www\.|\.com\b|\.net\b|\.org\b|api\.|\/v\d|json|php|\.exe\b|\.dll\b|\.so\b|\.dylib|HKLM|HKCU|HKEY|Software\\|registry|localhost|127\.0\.0\.1|192\.168|token|license|serial|udid|activation|bypass|icloud|iphone|ipad|ios\b|checkm|pwn|ssh|ftp|password|passwd|api[_-]?key|secret|auth|login|register|server|host|port|socket|webclient|download|upload|cmd\.exe|powershell|curl|wget|admin|device|model|serialno|product|battery|baseband|imei|wmi|win32_|SELECT|Hypervisor|VMware|VirtualBox|sandbox|debug|reverse|encrypt|decrypt|\bxor\b|\baes\b|sha\d|md5|base64|assemble|DynamicMethod|resolve)/i;

const out = { ascii: 0, utf16: 0 };
for (const [kind, off, s] of all) {
  if (kind === "A") out.ascii++; else out.utf16++;
}
console.log(`# ${file}`);
console.log(`# ascii runs>=${minLen}: ${out.ascii}  utf16 runs>=${minLen}: ${out.utf16}`);

console.log("\n=== INTERESTING ===");
let n = 0;
for (const [kind, off, s] of all) {
  if (INTERESTING.test(s)) { console.log(`${kind} 0x${off.toString(16).padStart(8, "0")}  ${s}`); n++; }
  if (n > 400) { console.log("... (truncated)"); break; }
}
