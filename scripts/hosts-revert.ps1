# Reverte hosts-redirect.ps1 (TEMPORARIO -> original). CORRER ELEVADO.
# Uso: powershell -NoProfile -ExecutionPolicy Bypass -File scripts\hosts-revert.ps1
$ErrorActionPreference = "Stop"
$isAdmin = ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
if (-not $isAdmin) { Write-Output "NAO-ELEVADO"; exit 2 }
$hosts = "$env:SystemRoot\System32\drivers\etc\hosts"
$cur = Get-Content $hosts
$drop = @("127.0.0.1 s13.iremovalpro.com", "127.0.0.1 iremovalpro.com", "127.0.0.1 iremovalpro.co")
$kept = @($cur | Where-Object { $drop -notcontains $_ })
Set-Content $hosts $kept -Encoding Ascii
Clear-DnsClientCache
Write-Output "revertido:"
Get-Content $hosts | Select-String "iremovalpro"
if ($LASTEXITCODE -ne 0) { Write-Output "(sem linhas iremovalpro — limpo)" }
