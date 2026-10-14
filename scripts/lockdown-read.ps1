# Leitor lockdown SÓ-LEITURA via P/Invoke (libimobiledevice open-source, sem executar nada do alvo).
# Lê ActivationState/ProductVersion/ProductType/SerialNumber do dispositivo emparelhado.
# Uso: powershell -NoProfile -ExecutionPolicy Bypass -File scripts\lockdown-read.ps1 [-Udid ...]
param([string]$Udid = "00008101-000D45023405001E", [string]$Domain = "__NULL__", [string]$Keys = "ActivationState,ProductVersion,ProductType,SerialNumber,UniqueDeviceID,DeviceName")
$ErrorActionPreference = "Stop"
$tk = "C:\Users\p\Documents\iRemoval PRO Premium Edition 5.2.1\ref\toolkits"
$env:PATH = "$tk;" + $env:PATH
$lib = Join-Path $tk "libimobiledevice-1.0.dll"
$plistLib = Join-Path $tk "libplist-2.0.dll"
$libEsc = $lib -replace "\\", "\\"
$plistEsc = $plistLib -replace "\\", "\\"

Add-Type -MemberDefinition @"
[DllImport("$libEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern void idevice_set_debug_level(int level);
[DllImport("$libEsc", CallingConvention=CallingConvention.Cdecl, CharSet=CharSet.Ansi)]
public static extern int idevice_new(out System.IntPtr device, string udid);
[DllImport("$libEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern int idevice_free(System.IntPtr device);
[DllImport("$libEsc", CallingConvention=CallingConvention.Cdecl, CharSet=CharSet.Ansi)]
public static extern int lockdownd_client_new_with_handshake(System.IntPtr device, out System.IntPtr client, string label);
[DllImport("$libEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern int lockdownd_client_free(System.IntPtr client);
[DllImport("$libEsc", CallingConvention=CallingConvention.Cdecl, CharSet=CharSet.Ansi)]
public static extern int lockdownd_get_value(System.IntPtr client, string domain, string key, out System.IntPtr value);
[DllImport("$plistEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern int plist_get_node_type(System.IntPtr node);
[DllImport("$plistEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern void plist_free(System.IntPtr node);
"@ -Name "Imobile" -Namespace "DevDiag" | Out-Null
Add-Type -MemberDefinition @"
[DllImport("$plistEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern void plist_get_string_val(System.IntPtr node, out System.IntPtr value);
[DllImport("$plistEsc", CallingConvention=CallingConvention.Cdecl)]
public static extern void plist_get_uint_val(System.IntPtr node, out System.UInt64 value);
"@ -Name "PlistStr" -Namespace "DevDiag" | Out-Null

$dev = [IntPtr]::Zero
[DevDiag.Imobile]::idevice_set_debug_level(1)
if ([DevDiag.Imobile]::idevice_new([ref]$dev, $Udid) -ne 0 -or $dev -eq [IntPtr]::Zero) { Write-Output "FALHA idevice_new"; exit 3 }
$cli = [IntPtr]::Zero
if ([DevDiag.Imobile]::lockdownd_client_new_with_handshake($dev, [ref]$cli, "OfflineDeviceDiagnostics") -ne 0) { Write-Output "FALHA handshake"; [DevDiag.Imobile]::idevice_free($dev) | Out-Null; exit 4 }
foreach ($k in ($Keys -split ",")) {
  $v = [IntPtr]::Zero
  $d = if ($Domain -eq "__NULL__") { $null } else { $Domain }
  $rc = [DevDiag.Imobile]::lockdownd_get_value($cli, $d, $k, [ref]$v)
  if ($rc -ne 0 -or $v -eq [IntPtr]::Zero) { Write-Output "$k = (rc=$rc)"; continue }
  $t = [DevDiag.Imobile]::plist_get_node_type($v)
  if ($t -eq 3) {
    $sp = [IntPtr]::Zero
    [DevDiag.PlistStr]::plist_get_string_val($v, [ref]$sp) | Out-Null
    Write-Output ("$k = " + [Runtime.InteropServices.Marshal]::PtrToStringAnsi($sp))
  } elseif ($t -eq 1) {
    $u = [UInt64]0
    [DevDiag.PlistStr]::plist_get_uint_val($v, [ref]$u) | Out-Null
    Write-Output ("$k = " + $u)
  } else { Write-Output "$k = (tipo plist $t, nao-string)" }
  [DevDiag.Imobile]::plist_free($v) | Out-Null
}
[DevDiag.Imobile]::lockdownd_client_free($cli) | Out-Null
[DevDiag.Imobile]::idevice_free($dev) | Out-Null
Write-Output "OK"
