# Dump de memoria elevado (a app por vezes corre como admin e shells
# normais recebem Access Denied). Correr ELEVADO: o lancador usa -Verb RunAs
# (UAC = 1 clique, sem senha). Totalmente automatico, sem prompts.
# Uso: powershell -NoProfile -ExecutionPolicy Bypass -File tools\dump-admin.ps1
$ErrorActionPreference = "Stop"
$base = Split-Path -Parent $PSScriptRoot
$log = Join-Path $base "dumps\mem\admin-dump.log"
$exe = "C:\Users\p\Documents\iRemoval PRO Premium Edition 5.2.1\iRemoval PRO.exe"
$procdump = Join-Path $base "iremoval-tools\downloads\procdump.exe"
$dump = Join-Path $base "dumps\mem\ipro-admin-01.dmp"

"start $(Get-Date -Format o)" | Out-File $log -Encoding ascii
$isAdmin = ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
"admin=$isAdmin" | Out-File $log -Append -Encoding ascii
if (-not $isAdmin) { "NAO-ELEVADO: relancar com -Verb RunAs" | Out-File $log -Append -Encoding ascii; exit 2 }

$p = Start-Process $exe -PassThru
"lancado pid=$($p.Id)" | Out-File $log -Append -Encoding ascii
Start-Sleep 10
if ($p.HasExited) {
  "saiu-cedo exitcode=$($p.ExitCode)" | Out-File $log -Append -Encoding ascii
} else {
  & $procdump -ma $p.Id $dump 2>&1 | Out-File $log -Append -Encoding ascii
  "dump feito, a matar pid=$($p.Id)" | Out-File $log -Append -Encoding ascii
  Stop-Process -Id $p.Id -Force
}
"end $(Get-Date -Format o)" | Out-File $log -Append -Encoding ascii
