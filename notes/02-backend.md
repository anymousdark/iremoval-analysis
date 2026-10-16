# 02 — Indicadores de rede e comportamento observado

Extraído por varredura de strings ASCII e UTF-16LE em
`artifacts/original/iremovalpro.dll`. Offsets referentes ao binário original.

---

## 1. Endpoints do backend

Todos em UTF-16LE.

| URL | Observação |
|---|---|
| `https://iremovalpro.co` | domínio principal |
| `https://www.trustpilot.com/review/iremovalpro.co` | pedido de avaliação |
| `https://iremovalpro.com/Payax0.php` | pagamento |
| `https://s13.iremovalpro.com/pub.php` | publicação |
| `https://s13.iremovalpro.com/version33.txt` | verificação de versão |
| `https://s13.iremovalpro.com/iremovalActivation/ars2.php` | ativação |
| `https://s13.iremovalpro.com/iremovalActivation/auth3.php` | autenticação |
| `https://s13.iremovalpro.com/iremovalActivation/checkm8.php` | variante checkm8 |
| `https://s13.iremovalpro.com/iremovalActivation/iact9.php` | ativação |
| `https://s13.iremovalpro.com/iremovalActivation/mf5.php` | variante mf5 |
| `https://s13.iremovalpro.com/iremovalActivation/mf6.php` | variante mf6 |
| `https://s13.iremovalpro.com/iremovalActivation/mf7.php` | variante mf7 |

O caminho `/iremovalActivation/` com sufixos `ars2`, `auth3`, `checkm8`,
`iact9`, `mf5`, `mf6`, `mf7` indica um **roteador por variante de
exploit/plataforma**, não um endpoint único.

### Cabeçalho customizado
```
X-iRemovalPRO-Version
```

### Contato
```
support@iremovalpro.com
t.me/iremoval…            (Telegram)
```

### Mensagens de estado do servidor
```
iRemoval PRO Servers are currently under MAINTENANCE
This app is deprecated ! Please download the new premium update from: iRemovalPRO.co
This app is deprecated ! Please download the new update from: iRemovalPRO.co
This device looks like not activation locked
Couldn't find iRemovalRa1n app! please re-download iRemoval PRO from official website
Please don't forget to review our service on Trustpilot
Please contact the administrator at support@iremovalpro.com for further assistance
```

`iRemovalRa1n` → dependência de um aplicativo separado (checkra1n/iRa1n) em
algumas rotas. `version33.txt` é o canal de versão remota.

---

## 2. Proxy / túnel SOCKS

O produto implementa túnel SOCKS próprio e invoca `ideviceproxy`
(de `ref/toolkits`, 23 MB) para expor o serviço do dispositivo na rede local:

```
/c ideviceproxy lao abc ofq com.iremovalpro.bypass --strea…
```

Identificador do bundle injetado: **`com.iremovalpro.bypass`**

Funções observadas (UTF-16 e ASCII):
```
EstablishSocksTunnelAsync
EstablishSocks4TunnelAsync
EstablishSocks5TunnelAsync
CreateSocks4ConnectionRequest
GetSocks4DestinationAddress
HandleSocks4
Socks4Connector
ReadToFillAsync
```

Mensagens herdadas do SSH.NET (biblioteca embutida):
```
Only the 'http', 'https', 'socks4', 'socks4a' and 'socks5' schemes are allowed for proxies
https://socks4://
socks4a:
SOCKS4 only supports IPv4. No such address found for '{0}'
SOCKS4 does not support IPv6 addresses
SOCKS4: Connection rejected
SOCKS4: Not valid response
SOCKS4: Null is expected
SOCKS4: Client is not running identd or not reachable from the server
SOCKS4: Client's identd could not confirm the user ID string in the request
```

---

## 3. Superfície no dispositivo (iOS)

### 3.1 Frameworks referenciados
```
/System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
/Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate
CoreFoundation, Foundation, Security, BTServer.app,
SpringBoardServices, DeviceManagement, ExternalAccessory,
EmbeddedDataReset, MobileActivation, mobileactivationd
```

`CydiaSubstrate` presente → o pacote inclui um **tweak de jailbreak**.

### 3.2 Hooks Logos/Theos (injecção no daemon de ativação)

Símbolos `__logos_method__` / `__logos_orig__` indicam tweak compilado com
Logos (Theos):

```
__logos_method$_ungrouped$MobileActivationDaemon$validateActivationDataSignature$activationSignature$withError$
__logos_orig$_ungrouped$MobileActivationDaemon$validateActivationDataSignature$activationSignature$withError$
__logos_method$_ungrouped$MobileActivationDaemon$handleActivationInfo$withCompletionBlock$
__logos_orig$_ungrouped$MobileActivationDaemon$handleActivationInfoWithSession$activationSignature$completionBlock$
```

Métodos-alvo do `MobileActivationDaemon`:
```
validateActivationDataSignature:activationSignature:withError:
handleActivationInfo:withCompletionBlock:
handleActivationInfoWithSession:activationSignature:completionBlock:
```

### 3.3 Chaves de entitlement / entitlements plist
```
com.apple.mobileactivationd.spi
com.apple.mobileactivationd.device-identifiers
com.apple.private.MobileActivation
com.apple.dmd.operation.clear-activation-lock-bypass-code
com.apple.dmd.operation.fetch-activation-lock-bypass-code
systemgroup.com.apple.mobileactivationd
```

### 3.4 Registros de ativação
```
/activation_records/activation_record.plist
/activation_records/
activation-record
ActivationLock
ActivationRecord
ActivationPrivateKey
ActivationInfo
ActivationRegulatoryVariant
ActivationState
GetActivationRecord
RequestActivationState
iRemovalRecord
iRemovalSignature
```

### 3.5 Logs (possíveis alvos de limpeza)
```
/private/var/logs/mobileactivationd_restore/
/Library/Logs/mobileactivationd/
```

### 3.6 Métodos do serviço (Netimobiledevice)
```
MobileActivationDaemon
MobileActivationService
Mobilebackup2Service
CreateActivationInfoRequest
CreateTunnel1ActivationInfoRequest
CreateActivationSessionInfo
CreateActivationInfoWithSession
ActivateWithSession
GetActivationStateRequest
GetActivationState
HandleActivationInfoWithSessionRequest
ServerVersionRequest
```

Banner forjado encontrado:
```
iOS Device Activator (MobileActivation-20 built on Jan 15 2012 at 19:07:28
iOS Device Activator (MobileActivation-592.103.2
```

---

## 4. Marcadores de build / autoria

```
T<-[Blackhound iRemovalPro Public build 0.7.1 @2022|]->
[iRemovalPRO^shit happening
coolfeet.php
```

`Blackhound` é o nome interno do build. `coolfeet.php` aparece imerso num
bloco de strings — provável resto de um endpoint antigo ou artefato do
processo de build.

---

## 5. Bloco de ruído

Uma região extensa do binário contém listas de palavras em inglês
(`birthpopuptypesapplyImagebeingupper…`, `Continentaleliminatingwill…`,
`complaintscontinuousquantitiesastronomer…`) misturadas a fragmentos HTML
(`<a href="/`, `<link rel="`, `xmlns:og="`, `class="`, `index.php?`).

**Interpretação**: dicionário de preenchimento usado pelo ofuscador/empacotador
para diluir strings reais e prejudicar extração por frequência. Não é
conteúdo funcional.

---

## 6. Proxy SOCKS + ativação: leitura geral

O desenho observado é:

1. o cliente detecta o dispositivo e escolhe a variante (`checkm8`, `mf5/6/7`, `ars2`, `auth3`, `iact9`);
2. envia identidade do dispositivo para o endpoint correspondente em `s13.iremovalpro.com`;
3. o servidor devolve material usado na sessão de ativação;
4. no dispositivo, um tweak (CydiaSubstrate/Logos) hooka o
   `MobileActivationDaemon` para interceptar
   `handleActivationInfo*` e `validateActivationDataSignature*`;
5. `/activation_records/activation_record.plist` é lido/escrito;
6. um túnel SOCKS (`com.iremovalpro.bypass` via `ideviceproxy`) expõe o
   serviço do dispositivo.

---

## 7. Evidência em runtime (dump, 2026-10-16)

Strings *frozen* do motor no dump `dumps/mem/ipro-01.dmp` (módulo carregado em
`0x7ffd70de0000` ↔ imagem `0x180000000`; leitura com `tools/mdmp-read.js`).
Confirma §1/§3 com endereços — os URLs vivem em `0x1807ca4xx-aa68`:

| URL | VA (imagem) |
|---|---|
| `https://iremovalpro.com` | `0x1807ca4f8` |
| `…/Payax0.php` | `0x1807ca540` |
| `…/iremovalActivation/ars2.php` | `0x1807ca5a0` |
| `…/auth3.php` | `0x1807ca628` |
| `…/checkm8.php` | `0x1807ca6b0` |
| `…/iact9.php` | `0x1807ca740` |
| `…/mf5.php` | `0x1807ca7c8` |
| `…/mf6.php` | `0x1807ca850` |
| `…/mf7.php` | `0x1807ca8d8` |
| `…/pub.php` | `0x1807ca960` |
| `…/version33.txt` | `0x1807ca9c0` |
| Trustpilot (review) | `0x1807caa68` |
| Telegram (`t.me/iremoval`) | `0x1807caa28` |

Outras: `X-iRemovalPRO-Version` `0x1807bf880`; `…; PayloadLength=`
`0x180766968`; `iremovalpro.Properties.Resources` `0x1807cbb08`; UI
("Please click 'iRa1n'…") `0x180794628`. Inventário completo (5.711 strings)
e operações de dispositivo: `10` §10 (e §3.6 acima).

---

## 8. Observação

Este documento descreve **o que o binário faz**, obtido por análise estática.
NÃO é um guia de operação, e a lógica de bypass em si não foi
desmontada nem será documentada aqui.
