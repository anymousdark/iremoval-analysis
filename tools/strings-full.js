const fs = require("fs");
const file = process.argv[2];
const minLen = Number(process.argv[3] || 6);
const b = fs.readFileSync(file);
const ascii = [], utf16 = [];
let run = "";
for (let i = 0; i < b.length; i++) {
  const c = b[i];
  if (c >= 0x20 && c < 0x7f) { run += String.fromCharCode(c); }
  else { if (run.length >= minLen) ascii.push(run); run = ""; }
}
if (run.length >= minLen) ascii.push(run);
run = "";
for (let i = 0; i + 1 < b.length; i += 2) {
  const c = b[i], hi = b[i + 1];
  if (hi === 0 && c >= 0x20 && c < 0x7f) { run += String.fromCharCode(c); }
  else { if (run.length >= minLen) utf16.push(run); run = ""; }
}
if (run.length >= minLen) utf16.push(run);
const INTERESTING = /(https?:|www\.|\.com\b|\.net\b|\.org\b|api\.|\/v\d|json|php|\.exe\b|\.dll\b|\.so\b|\.dylib|HKLM|HKCU|HKEY|Software\\|registry|localhost|127\.0\.0\.1|192\.168|token|license|serial|udid|activation|bypass|icloud|iphone|ipad|ios\b|checkm|pwn|ssh|ftp|password|passwd|api[_-]?key|secret|auth|login|register|server|host|port|socket|webclient|download|upload|cmd\.exe|powershell|curl|wget|admin|device|model|serialno|product|battery|baseband|imei|wmi|win32_|SELECT|Hypervisor|VMware|VirtualBox|sandbox|debug|reverse|encrypt|decrypt|\bxor\b|\baes\b|sha\d|md5|base64|assemble|DynamicMethod|resolve)/i;
const seen = new Set();
for (const s of [...ascii, ...utf16]) {
  if (INTERESTING.test(s) && !seen.has(s)) { seen.add(s); console.log(s); }
}
