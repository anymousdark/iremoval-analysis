# Trace ProcMon da app (precisa de driver = ELEVADO via -Verb RunAs, 1 clique).
# Captura TUDO durante ~25s para dumps\procmon\trace.pml (no F:) e tenta
# converter para CSV. Uso:
# powershell -NoProfile -ExecutionPolicy Bypass -File tools\procmon-trace.ps1
$ErrorActionPreference = "Stop"
$base = Split-Path -Parent $PSScriptRoot
$log = Join-Path $base "dumps\procmon-trace.log"
$outDir = Join-Path $base "dumps\procmon"
$procdir = Join-Path $base "iremoval-tools\procmon"
$exe = "C:\Users\p\Documents\iRemoval PRO Premium Edition 5.2.1\iRemoval PRO.exe"

New-Item -ItemType Directory -Force -Path $outDir | Out-Null
"start $(Get-Date -Format o)" | Out-File $log -Encoding ascii
$isAdmin = ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
"admin=$isAdmin" | Out-File $log -Append -Encoding ascii
if (-not $isAdmin) { "NAO-ELEVADO: relancar com -Verb RunAs" | Out-File $log -Append -Encoding ascii; exit 2 }

$pml = Join-Path $outDir "trace.pml"
Remove-Item $pml -Force -ErrorAction SilentlyContinue
Start-Process (Join-Path $procdir "Procmon.exe") -ArgumentList "/AcceptEula","/Quiet","/Minimized","/BackingFile",$pml -WindowStyle Hidden
Start-Sleep 4
"procmon on" | Out-File $log -Append -Encoding ascii
$p = Start-Process $exe -PassThru
"app pid=$($p.Id)" | Out-File $log -Append -Encoding ascii
Start-Sleep 22
& (Join-Path $procdir "Procmon.exe") /Terminate 2>&1 | Out-File $log -Append -Encoding ascii
Start-Sleep 2
try { if (-not $p.HasExited) { Stop-Process -Id $p.Id -Force; "app morta por nos" | Out-File $log -Append -Encoding ascii } else { "app saiu sozinha" | Out-File $log -Append -Encoding ascii } } catch {}
$csv = Join-Path $outDir "trace.csv"
& (Join-Path $procdir "Procmon.exe") /OpenLog $pml /SaveAs $csv /SaveApplyFilter 2>&1 | Out-File $log -Append -Encoding ascii
"pml MB=" + [math]::Round((Get-Item $pml -ErrorAction SilentlyContinue).Length / 1MB, 1) | Out-File $log -Append -Encoding ascii
"csv existe=" + (Test-Path $csv) | Out-File $log -Append -Encoding ascii
"end $(Get-Date -Format o)" | Out-File $log -Append -Encoding ascii
