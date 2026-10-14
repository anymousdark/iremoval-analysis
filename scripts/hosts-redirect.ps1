# Redireciona os hosts do produto para 127.0.0.1 (TEMPORARIO, investigacao).
# CORRER ELEVADO (UAC = 1 clique). Reverter com hosts-revert.ps1 no fim.
# Uso: powershell -NoProfile -ExecutionPolicy Bypass -File scripts\hosts-redirect.ps1
$ErrorActionPreference = "Stop"
$isAdmin = ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
if (-not $isAdmin) { Write-Output "NAO-ELEVADO"; exit 2 }
$hosts = "$env:SystemRoot\System32\drivers\etc\hosts"
Copy-Item $hosts "$env:TEMP\hosts.bak-iremoval" -Force
$lines = @("127.0.0.1 s13.iremovalpro.com", "127.0.0.1 iremovalpro.com", "127.0.0.1 iremovalpro.co")
$cur = Get-Content $hosts
$add = @($lines | Where-Object { $cur -notcontains $_ })
if ($add.Count -gt 0) { Add-Content $hosts $add }
Clear-DnsClientCache
Write-Output "OK:"
Get-Content $hosts | Select-String "iremovalpro"
