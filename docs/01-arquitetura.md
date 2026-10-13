# 01 — Arquitetura do pacote

Visão geral de como as peças se encaixam. Todo fato abaixo veio de análise
estática: metadata de tabela CLI, exports PE, strings, mapa de resources BAML
e mapa de nomes NativeAOT.

---

## 1. Composição do pacote

```
iRemoval PRO Premium Edition 5.2.1/
├── iRemoval PRO.exe          shell WPF .NET Framework 4.7.2 (ofuscado)
├── iremovalpro.dll           motor .NET 8 NativeAOT x64  ← 34 MB
└── ref/toolkits/             ferramentas de terceiros, carregadas em runtime
    ├── idevicepair.exe
    ├── ideviceproxy.exe            23 MB
    ├── libimobiledevice-1.0.dll
    ├── libimobiledevice-glue-1.0.dll
    ├── libusbmuxd-2.0.dll
    ├── libplist-2.0.dll / libplist++-2.0.dll
    ├── libcrypto-3-x64.dll         OpenSSL 3.0.8
    └── libssl-3-x64.dll
```

**Conclusão estrutural**: todo o acesso a dispositivo iOS vem do
`libimobiledevice` (LGPL/MIT, open source) via usbmuxd. O produto não
implementa o stack de transporte — ele orquestra.

---

## 2. `iRemoval PRO.exe` — casca ofuscada

| Atributo | Valor |
|---|---|
| Assembly | `iRemovalProWPF` 1.0.0.0 |
| MVID | `41639d1a-eea6-4722-bb9a-ef15581e98b7` |
| Runtime | CLI 2.5, flags `il-only`, AnyCPU |
| Strong name | não |
| Seções | `.sat`, `.%{&` (nomes ofuscados) |
| Tabelas | 313 TypeDef, 1821 MethodDef, 198 TypeRef, 463 MemberRef, 7 AssemblyRef, 6 ImplMap |

### 2.1 Padrão de ofuscação

308 dos 313 tipos têm nome em hex. Todos os handlers de UI são stubs que
delegam a um único dispatcher:

```
C834A786.3CB74B1B(object[], int) -> object
```

O stub só carrega um código inteiro e chama o dispatcher. A tabela
`static object[] C8BFB49E.81BBAF2C` (tok `0x04000240`) guarda os operandos.
Instanciador: `newobj 0x0600033d` (`C834A786..ctor`).

Códigos observados:

| Handler | Código |
|---|---|
| `InitializeComponent` | 10049 |
| `..ctor` | 147754 |
| `SearchManagement` | 132476 |
| `Callback` | 9436 |
| `Button_Click` | 21446 |
| `Button_Click_1` | 272778 |
| `Button_Click_5` | 12448 |
| `Activate_Click` | 297829 |
| `Erase_Click` | 279625 |
| `TopImage_MouseDown` | 306378 |
| `Sn_MouseDown` | 303767 |
| `Imei_MouseDown` | 294559 |
| `QrImage_MouseDown` | 281357 |

O corpo usa controle de fluxo com predicados opacos (`ldc.i4.s 31`).

### 2.2 Mecanismos de fuga em runtime

O TypeRef mostra a toolchain do ofuscador, não lógica de negócio:

- `DynamicMethod` / `DynamicILInfo` / `ILGenerator` — JIT de IL em runtime
- `AppDomain.AssemblyResolve` — carga de assemblies a partir de bytes
- `WebClient` + `ServerCertificateValidationCallback` — rede com validação contornável
- `Clipboard`, `NetworkInterface`/`PhysicalAddress`, WMI

Atributos do assembly: `SuppressIldasm`, `UnverifiableCode`.

### 2.3 P/Invokes

| Import | DLL | Observação |
|---|---|---|
| `SetCallbacks` | `iremovalpro.dll` | registro de callbacks de UI |
| `SetWinInfo` | `iremovalpro.dll` | handle de janela |
| `Action` | `iremovalpro.dll` | dispatcher de comandos |
| `GetModuleHandle` | kernel32 | |
| `NtQueryVirtualMemory` | ntdll | anti-análise |
| `dlsym` | **`libdl.so.2`** | nome Linux — caminho morto em Windows |

### 2.4 UI (BAML)

Janela `iRemoval PRO`, 1255 px, grid 220* / 1029*.

Campos e defaults de design:

| Campo | Default |
|---|---|
| Model | `iPhone6,2` |
| iOS | `14.8.1` |
| Serial Number | `FCCVW0PNHFLX` |
| IMEI | `358597070247260` |
| Service | `MEID Signal` |

Botões: `Activate`, `Erase`, `checkrainButt`.
`qrImage` + `scanText` = `SCAN TO PAY!`.
Links: `Website`, `Telegram`.
Rodapé: `    Powered by: iRemoval PRO Ltd.` / `Premium Edition 5.2`.

Resources: `mainwindow.baml`, `resources/phonelogo.image.png`,
`/Resources/PlugDevice.Image.png`, `/Resources/iRemovalPhone.Image.png`,
`/Resources/PhoneLOGO.Image.png`.

---

## 3. `iremovalpro.dll` — o motor

### 3.1 Identidade

| Atributo | Valor |
|---|---|
| Formato | PE32+ x64, ImageBase `0x180000000` |
| Compilador | .NET 8 **NativeAOT** |
| Assembly | `iremovalpro` 1.0.0.0 |
| Resource | `iremovalpro.Properties.Resources.resources` |
| Banner de build | `<-[Blackhound iRemovalPro Public build 0.7.1 @2022|]->` @ `0x85d4bb` |

### 3.2 Seções e entropia

| Seção | RVA | Tamanho | Entropia | Nota |
|---|---|---|---|---|
| `.text` | `0x00001000` | 0.80 MB | 6.63 | runtime + glue |
| `.managed` | `0x000CA000` | 6.47 MB | 6.43 | IL/reflection preservado |
| `hydrated` | `0x00742000` | 2.70 MB | — | BSS, sem dados em disco |
| `.rdata` | `0x009F5000` | 5.90 MB | 6.62 | metadata, vtables, reflection |
| `.data` | `0x0FDC000` | 0.21 MB | — | |
| `.pdata` | `0x1012000` | 0.51 MB | **8.00** | runtimes functions |
| `.`RZ`` | `0x1096000` | 9.46 MB | **7.35** | EXECUTABLE |
| `.CFY` | `0x1A0B000` | 0.0003 MB | — | |
| `.CJz` | `0x1A0C000` | 9.61 MB | **7.46** | EXECUTABLE + data |
| `.rsrc` | `0x23A6000` | 0.0008 MB | — | |
| `.reloc` | `0x23A7000` | 0.008 MB | — | |

~19 MB de código executável. Entropia > 7.3 em `.`RZ`` e `.CJz` é
esperada em NativeAOT (código gerado), mas a combinação com `.pdata` em
8.00 indica dados comprimidos/empacotados.

### 3.3 Exports (exatamente 4)

| Export | RVA | VA |
|---|---|---|
| `Action` | `0x542810` | `0x180542810` |
| `SetCallbacks` | `0x542B30` | `0x180542B30` |
| `SetWinInfo` | `0x542B60` | `0x180542B60` |
| `DotNetRuntimeDebugHeader` | `0xFE60A0` | `0x180FE60A0` |

`DotNetRuntimeDebugHeader` é a marca do NativeAOT — não é uma API.

### 3.4 Tabela de imports

Cada DLL importada traz **exatamente 1 símbolo**. É o padrão do NativeAOT:
o binding é dinâmico via `GetProcAddress` no startup.

Exemplos: `KERNEL32!IsDebuggerPresent`,
`IPHLPAPI!GetNetworkParams`, `WS2_32!WSARecv`, `ADVAPI32!RegOpenKeyExW`.

---

## 4. Camadas funcionais (mapa de nomes NativeAOT)

Extraído da tabela de nomes em `~0x82B000`–`~0x82D900`. Agrupado por
responsabilidade — útil como índice para navegação no Ghidra.

### 4.1 Orquestração de dispositivo — `Driver.*`
`CheckIOS`, `BypassMeidSignal`, `CommonConnectDevice`, `AppCheck`,
`FinishedCheck`, `Killer`, `ListenError`, `BaseService`

### 4.2 Operações de alto nível
`Generate_V2`, `GenerateLegacy_V2`, `Activate_V2`, `Erase_V2`

### 4.3 Ciclo de vida iDevice
`iDevice_Pair`, `iDevice_LnchV2`, `iDevice_Activate`, `iDevice_GetState`,
`iDevice_EnableDevMode`, `iDevice_Deactivate`, `iDevice_Restart`,
`iDevice_RemoveProfiles`, `Firewall_iDeviceProxy`, `iDevice_Tnl`

### 4.4 Criptografia / licença local
`EncryptV2`, `DecryptV2`, `Base64ToBytes`, `CompressWithBrotli`, `lckdwnck`

### 4.5 Controle de ambiente
`CheckForInjectedModules`, `GetLoadedModulePaths`,
`GetExtendedTcpTable` + `MibTcpRowOwnerPid`,
`KillProc`, `killall`, `ExecuteAsAdmin`, `ExecutePnpUtil`,
`EnumDrivers`, `usbaaplInstall`, `driverDelete`, `checkfolders`,
`IsAdministrator`

> `CheckForInjectedModules` + `GetExtendedTcpTable` + `IsAdministrator`
> + `KillProc` formam o núcleo de **ambiente hostil**: detecção de
> depuração/injeção, verificação de privilégio e remoção de processos.

### 4.6 Firewall (Windows Filtering Platform)
`FWOpenPolicyStore`, `FWClosePolicyStore`, `FWAddFirewallRule`,
`FWDeleteFirewallRule`

### 4.7 Par de chaves / TLS
`CreateRootCertificate`, `CreateHostCertificate`,
`CreateDeviceCertificate`, `GeneratePairingCertificates`,
`GetItunesPairingRecord`, `GenerateHostId`, `ValidatePairing`, `StartSSL`

> Reproduz manualmente o que o iTunes faz: gera par de certificados host/device
> e negocia o canal TLS de lockdown. Permite forjar um par iTunes válido.

### 4.8 Serviços de dispositivo
- **AFC**: `FileRead`, `FileWrite`, `SetFileContents`, `GetFileContents`
- **mobilebackup2**: `VersionExchange`, `SendProcessMessage`, `WatchForCompletion`
- **mobileactivation**: `CreateActivationSessionInfo`, `ActivateWithSession`,
  `GetActivationState`, `Deactivate`, `Install`, `InstallFromLocal`

### 4.9 Identidade / hashing
`GetFolderHash`, `GetFileHash`, `GetHashString`

### 4.10 Ponte UI (chamada pelo EXE)
`Button_Click`, `Button_Click_1`, `Button_Click_5`, `Sn_MouseDown`,
`Imei_MouseDown`, `QrImage_MouseDown`

`SetProgress`, `SetVisibility`, `SetImageSource`, `SetImageStretch`,
`SetContent`, `SetIsEnabled`, `MessageBoxA`, `SetForegroundWindow`

### 4.11 Bibliotecas embutidas
`SSH.NET` (`SshClient`, `SftpClient`, `ForwardedPort*`), `RestSharp`,
`QRCoder`, `Netimobiledevice`, `Newtonsoft`-compat (`JsonObject`,
`PocoJsonSerializerStrategy`), OpenSSL 3.0.8, runtime .NET 8.

---

## 5. Fluxo de controle inferido

```
iRemoval PRO.exe (WPF, ofuscado)
        │  SetWinInfo(hwnd)
        │  SetCallbacks(cb[])
        │  Action(opcode, args)
        ▼
iremovalpro.dll  ── Driver.CommonConnectDevice ──► usbmuxd (tcp:47)
        │                                          │
        │                                          ▼
        │                              libimobiledevice
        │                              ├─ lockdown   (par/certificados)
        │                                  ├─ mobileactivation
        │                                  ├─ AFC
        │                                  └─ mobilebackup2
        ▼
   UI atualizada via callbacks (SetContent / SetProgress / SetImageSource)
```

Canais paralelos: SSH (SSH.NET) sobre túnel lockdown, HTTP (RestSharp) para
o backend de licença/ativação, e regras de firewall WFP para redirecionar
tráfego do dispositivo.

---

## 6. Observações para a próxima fase

1. **`.managed` preserva o IL** — 6.47 MB. Em NativeAOT isso existe para
   suportar reflexão. É o caminho de menor esforço para recuperar nomes de
   métodos, assinaturas e literais sem desmontar 19 MB de x86-64.
2. **Exports são a porta de entrada** — `Action` em `0x180542810` é o
   dispatcher de comandos chamado pelo EXE. Começar daí.
3. **`.pdata` em entropia 8.00** merece inspeção: pode conter a tabela de
   runtimes functions ou dados empacotados.
4. **Strings de rede/URL** em `dumps/dll-strings.txt` — verificar endpoints
   de licenciamento em `notes/02-backend.md`.
