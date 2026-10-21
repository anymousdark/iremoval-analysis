# 10 — Payloads embutidos: levantamento completo

Pergunta: há executáveis, tweaks ou blobs de bypass dentro dos binários?
Resposta curta (revista em 2026-10-16): **sim** — há binários Apple
embutidos: 1 dylib FAT de 2 fatias (`blackhound.dylib`) + 3 executáveis iOS
em `.rdata` (§11); há ainda 1 bplist legível, 1 região encriptada, e o
material *por-aparelho* continua vindo do servidor/`ref/`.

---

## 1. Executáveis embutidos: NENHUM (⚠️ ver correção no §11)

Varrimento `MZ+PE` no motor e na casca (`find-pe.js`): só os headers
externos (`x64`/`x86` em `0x0`). Sem EXE/DLL escondidos.

> **Correção (2026-10-16)**: esta varredura cobriu apenas `MZ`/PE.
> O motor **embute binários Apple (Mach-O/FAT)** em `.rdata` — ver §11.

## 2. Magias encontradas (`find-magic.js`)

Motor (`iremovalpro.dll`): `bplist×2`, `gzip×15`, `PNG×1`. Zero SQLite,
PEM, BSJB, journal. Casca: `BSJB` (header CLR normal), PNGs de UI, gzips
de resources WPF (normal).

## 3. bplist#1 — tag do autor + ref de rede (`dumps/bplist1.bin`, 8 KB)

Offset ficheiro `0x9c17d8`, bplist válido (`0x5b` = ASCII len 27):

```
bplist00 … "[iRemovalPRO^shit happening" … "System.Net.Quic" … (binário)
```

Contentor com a assinatura do autor + referência `System.Net.Quic` e corpo
binário (objeto serializado / chunk do heap frozen). Sem URLs nem payload
acionável — valor documental.

## 4. Região encriptada (`dumps/bplist-enc.bin`, 1 MB a partir de `0xa79c61`)

`bplist00` seguido de bytes de alta entropia. Tentativas `gunzip`,
`inflate`, `inflateRaw`, `brotli` (offsets 0 e 8): **todas falham** → não é
compressão standard; é **encriptação ou packing custom**. A faixa de alta
entropia total ronda `0xD40000–0x1A00000` (~13 MB, ver `08` §6).

Leitura: store de payload/config só legível em runtime (chave derivada em
memória). Alvo futuro para sessão dinâmica com dispositivo.

## 5. De onde vêm os payloads de facto

- **Servidor**: app Ra1n (`iRemovalRa1n`), ficheiros de ativação, updates
  (`notes/02` §1, `07` protocolo). Material dinâmico — não está no binário.
- **`ref/toolkits/`**: `ideviceproxy` (23 MB), libimobiledevice, OpenSSL —
  ferramentas de terceiros no disco, não no binário.
- **Lado iOS** (tweak CydiaSubstrate/Logos, bundle `com.iremovalpro.bypass`):
  **⚠️ correção 2026-10-16**: os binários device-side *estão* embutidos no
  motor (`blackhound.dylib` + 3 executáveis iOS em `.rdata`; a versão anterior
  deste bullet dizia "não embutido") — ver §11.

## 6. Ferramentas

`find-pe.js`, `find-magic.js`, `carve.js`, `try-inflate.js` (Temp),
`entropy.js` (Temp). Extrações: `dumps/bplist1.bin`, `dumps/bplist-enc.bin`.
## 7. Decriptografador: algoritmo identificado, chave em aberto

- AES em software PROVADO no motor: S-box (`63 7c 77…`) em ficheiro `0xa80814`
  + inv-S-box em `0xa8091d` (`.rdata`). Sem ChaCha/TEA/SHA256-K.
  Strings de modo (`AES-128-CBC` etc.) pertencem ao SSH.NET do túnel, não ao payload.
- Região `0xD40000–0x1A00000` (~13 MB, H≈8.0) sem headers gzip/zlib (scan total:
  15 hits, todos abaixo de `0xD40000`) → encriptada ou packing custom, não compressão standard.
- Falta para o decriptografador: modo, chave e IV. Vias: xref à S-box
  (precisa Ghidra analisado) ou extração em runtime (precisa app viva).

## 8. Laboratório corrido: 0 hits (honesto)

`tools/decrypt-lab.js` (AES-128/192/256 × CBC/ECB/CTR × IV zeros/primeiro-bloco,
300 chaves candidatas top-entropia do próprio DLL, score em 4 KB):
`crypto-region.bin` (13 MB) → 0 hits; `bplist-enc.bin` (1 MB) → 0 hits.
Sem vestígios de KDF (`PBKDF`/`Rfc2898`/`CreateDecryptor`: só ruído SSH/HTTP).
Veredito: a chave não está crua no binário (derivada em runtime, partida/
ofuscada, ou cifra custom) — nihil per staticam aqui. Destrava com: (a) app
viva + extração da chave em memória, (b) xrefs à S-box em Ghidra com RAM.

## 9. Correção (2026-10-15) — ver `docs/12`

Medições novas desmentem a "região encriptada de 13 MB": a faixa tem
**H=7,49** (com zeros e **código x86-64**), os blocos H≈8 são de naturezas
**mistas** (código em `` `RZ ``/`.CJz`; dados aleatórios pequenos em `.pdata`),
e a S-box AES é do **runtime .NET** (0 xref estático) — não um decryptor do
produto. Conclusões de §4 e §7–§8 ficam **substituídas** por `12`.

## 10. Maquinário no motor nativo (dump, 2026-10-16)

Varredura da tabela *frozen* do motor em runtime (`dumps/mem/ipro-01.dmp`,
`tools/mdmp-read.js --walk 0x180740000 0x1809f5000` → 5.711 strings) + xrefs
no exe patchado (`tools/scan-code-refs.js`). Confirma e detalha o §5.

### 10.1 O runner de comandos

`FUN_18053a0a0` (decompilada, `decompiled/entry/`) monta e executa via `cmd.exe`:

```c
psi.FileName = "cmd.exe";                    // 0x1807c4e08
psi.Arguments = concat("/C pnputil ", ...);  // 0x180760bb8 + template 0x18075a0d0
psi.UseShellExecute = 0; psi.CreateNoWindow = 1;   // flags +0x83/+0x7c/+0x7e
bind/execute → lê o output linha a linha
```

Família de comandos `cmd` no binário:

| Comando | VA | Uso provável |
|---|---|---|
| `/C pnputil ` | `0x180760bb8` | pnputil genérico |
| `/c pnputil -a ` | `0x180761188` | add driver package |
| `/c pnputil -f -d ` | `0x1807611c0` | **força remoção** de driver |
| `/c pnputil -i -a ` | `0x1807611f8` | instala INF |
| `/c ideviceproxy lao abc ofq com.iremovalpro.bypass --stream…` | `0x1807610f8` | túnel p/ o serviço do device |

`usbaapl64.inf` (`0x1807d3ca0`) + `\ref\ira1n\bin\driver\usb\` (`0x1807c1a80`)
= driver USB Apple empacotado em `ref/` e instalado via pnputil.

### 10.2 O que é plantado/removido no aparelho

| String | VA | Papel |
|---|---|---|
| `/private/var/root/identityd` | `0x180761778` | binário plantado no root |
| `…/identityd -1` / `-2 ` / `-3` | `0x1807617c8/820/878` | estágios de execução |
| `/private/var/root/payload` | `0x1807618d0` | diretório de payload no device |
| `chmod +x /private/var/root/identityd` | `0x1807c4bc8` | marca executável |
| `rm -rf /private/var/root/identityd` | `0x1807d0980` | desfaz (unbypass) |
| `rm -rf /private/var/root/payload` | `0x1807d09e0` | limpa payload |
| `com.apple.mobileactivationd` | `0x1807c53f0` | daemon-alvo (8 xrefs) |
| `com.iremovalpro.bypass` | `0x1807c5518` | bundle injetado |
| `checkrainButt` | `0x1807c4b78` | ramo checkra1n |
| `alpine` | `0x1807c2988` | password default SSH pós-checkra1n |
| `/ref/ira1n/`, `…/iRa1n.exe`, `/ref/toolkits/iproxy.exe` | `0x180761918/948/9b8` | externos em `ref/` |

Sites (xrefs): `cmd.exe` ×7 (`0x18053a0xx…0x18053d1xx`), `mobileactivationd`
×8 (`0x180538axx-09xx`, `0x18053bcxx-c7xx`, `0x1805432f0`), `identityd`
(chmod/rm) ×6 (`0x18053faxx/ffxx`, `0x1805404xx`, `0x180557dxx`),
`checkrainButt` ×5 (`0x18053acxx`, `0x18054f3xx-5xx`), bundle
`com.iremovalpro.bypass` ×2 (`0x180556dxx/731xx`).

### 10.3 Leitura do fluxo (pelo binário)

1. driver USB (pnputil) → iRa1n/checkra1n (`ref/ira1n`);
2. jailbreak → SSH (`alpine`) / `iproxy` → túnel `ideviceproxy … com.iremovalpro.bypass`;
3. plantio do `identityd` (+`/payload`) → ativação forjada (banner
   "iOS Device Activator (MobileActivation-…)", `notes/02` §3.6);
4. unbypass = `rm -rf` de `identityd`/`payload`.

**As *operações* acima são o motor; os binários iOS que elas plantam também
estão embutidos** (`.rdata` — §11). O material *por-aparelho* segue vindo do
servidor (`checkm8.php`/`mf*`/`iact9`… — §1–§5, `notes/02`).

Repro:

```
node tools\mdmp-read.js dumps\mem\ipro-01.dmp --walk 0x180740000 0x1809f5000 > walk.txt
node tools\scan-code-refs.js artifacts\patched\iremovalpro_engine.exe 0x180001000 0x1809f5000 0x1807c4e08 0x1807c4e09
```

## 11. Binários Apple embutidos (correção, 2026-10-16 noite)

A varredura do §1 buscou apenas `MZ`/PE. Procurando magias Mach-O/FAT
(`tools/find-macho.js`) aparecem **6 cabeçalhos Apple embutidos em `.rdata`**
(bytes crus — 1 FAT + 2 fatias + 3 executáveis = 4 imagens; correção de
2026-10-21, ver `17` §3.3):

| # | fo | tipo | arch | iOS mín | tam. | identidade |
|---|---|---|---|---|---|---|
| 1 | `0x8514bc` | FAT → DYLIB ×2 | arm64 + arm64e | 14.4 | ~90 KB/fatia | **`blackhound.dylib`** (ID em `/Library/MobileSubstrate/DynamicLibraries/`): tweak MobileSubstrate/**Logos** que hooka o `MobileActivationDaemon` — `LOAD CydiaSubstrate`, `__logos`×12, `MobileActivation`×9 |
| 2 | `0x8832e1` | EXECUTE | arm64 | 12.0 | 142 KB | helper device-side; `LOAD DeviceManagement`, `SpringBoardServices`, `Catalyst`, `MobileGestalt`; plist de entitlements embutido (`com.apple.mobileactivationd.spi=true`) — candidato a `identityd` |
| 3 | `0x8a5db6` | EXECUTE | arm64 | 13.1 | 158 KB | `LOAD EmbeddedDataReset` + `MobileGestalt` (fluxo de erase) |
| 4 | `0x8ec191` | EXECUTE | arm64 | 14.1 | 72 KB | `LOAD MobileActivation.framework` (7× `mobileactivationd` nas strings), `RPATH @executable_path/Frameworks`, entitlement `…spi=true` + id `584196299` — candidato forte a `identityd` |

No mesmo `.rdata` (fo `0xa18xxx-0xa19xxx`) convivem as strings operacionais
do kit: paths iOS (`/Info.plist`, `/Manifest.db`, `/iTunes_Control/…`,
`/Downloads/*.sqlitedb-wal`), `/private/var/root/identityd -1/-2/-3`,
`/private/var/root/payload`, `/netimobiledevice.ipa`, fragmentos **NETCONF**
(`/nc:hello`, `nc:capability[text()='urn:ietf:params:netconf:base:1.1']`),
templates `/c pnputil …`, boundary multipart de upload
(`2894775802929`) e constantes ECC do BCL (P-521).

**Fronteira**: identificação feita *in place* (parse de headers/extents);
nenhum binário foi extraído para ficheiro.

Repro:

```
node tools\find-macho.js artifacts\patched\iremovalpro_engine.exe
```

## 12. Gates de versão iOS no motor (2026-10-16 noite)

Strings de faixa de versão presentes no motor (VAs de imagem; dump `ipro-01`):

| VA | String | xref (`lea-rip`) |
|---|---|---|
| `0x180792ac8` | `Only iOS 15.0 to 16.6.1 supported for now..` | `0x18053e60e` |
| `0x1807b74e8` | `This iOS Version is not supported yet` | `0x18053e600` |
| `0x1807c07b8` | `Your Device iOS version is NOT supported! this tool only support iOS 17.0.1 till 18.5 and 18.6 (beta, beta2, beta3) and 26.0 (beta, beta2, beta3).restore your Device to one of those iOS versions and try again!!` | `0x18053eb22` |
| `0x1807cad18` | `iOS Not` (fragmento) | `0x18053e585` |

Os 4 sites caem na mesma função (`0x18053d720`), que é um **router de
estado/mensagens** — as versões são ramos dessa função, não uma função
isolada de roteamento de versão (ver `17` §4.3):

- **15.0–16.6.1** — faixa do fluxo checkm8-era (compatível com o kit
  embutido do §11);
- **17.0.1–18.5 / 18.6 betas / 26.0 betas** — faixa que exige *restore*
  para uma das versões listadas (fluxo distinto, material server-side).

Notas: este build (5.2.1) lista **26.0 betas**; o suporte divulgado
"até 26.1" (2026-10) indica build mais nova do produto ou string não
revista. A função ainda não está na coleta descompilada (`decompiled/`) —
dump dirigido em curso (`tools/ghidra/DumpAt.java`).

Repro (uma janela exata por string; cada execução retorna 1 site):

```
node tools\scan-code-refs.js artifacts\patched\iremovalpro_engine.exe 0x180001000 0x1809f5000 0x180792ac8 0x180792ad8
```
