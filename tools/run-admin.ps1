# Corre a app ELEVADA com working directory correto + dump em quente.
# CORRER ELEVADO (-Verb RunAs, 1 clique UAC). Deixa a app A CORRER no fim.
# Uso: powershell -NoProfile -ExecutionPolicy Bypass -File tools\run-admin.ps1
$ErrorActionPreference = "Stop"
$base = Split-Path -Parent $PSScriptRoot
$log = Join-Path $base "dumps\mem\run-admin.log"
$exe = "C:\Users\p\Documents\iRemoval PRO Premium Edition 5.2.1\iRemoval PRO.exe"
$dir = Split-Path -Parent $exe
$procdump = Join-Path $base "iremoval-tools\downloads\procdump.exe"
$dump = Join-Path $base "dumps\mem\ipro-admin-01.dmp"

"start $(Get-Date -Format o)" | Out-File $log -Encoding ascii
$isAdmin = ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
"admin=$isAdmin" | Out-File $log -Append -Encoding ascii
if (-not $isAdmin) { "NAO-ELEVADO: relancar com -Verb RunAs" | Out-File $log -Append -Encoding ascii; exit 2 }

$p = Start-Process $exe -WorkingDirectory $dir -PassThru
"lancado pid=$($p.Id) cwd=$dir" | Out-File $log -Append -Encoding ascii
Start-Sleep 15
$p.Refresh()
if ($p.HasExited) {
  "saiu exitcode=$($p.ExitCode)" | Out-File $log -Append -Encoding ascii
} else {
  "vivo titulo=[$($p.MainWindowTitle)]" | Out-File $log -Append -Encoding ascii
  & $procdump -ma $p.Id $dump 2>&1 | Out-File $log -Append -Encoding ascii
  "dump ok, app DEIXADA A CORRER pid=$($p.Id)" | Out-File $log -Append -Encoding ascii
}
"end $(Get-Date -Format o)" | Out-File $log -Append -Encoding ascii
