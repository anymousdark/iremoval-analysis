# 14 — Relatório defensivo: como estas ferramentas se protegem e como detetá-las

Sessão de 2026-10-15. Documento **defensivo (blue-team)**: descreve a
superfície de risco, as proteções/anti-análise do binário e indicadores de
deteção. Baseia-se em factos já provados em `07`, `09`, `10`, `12` e `13`.

> **Escopo**: descreve **o que** o binário ofusca e **como detetar** a família.
> Não contém nem reproduz lógica de bypass, nem um servidor de ativação.

---

## 1. Categoria da ameaça

Software **PUA / de circunvenção de medida de proteção técnica**: ativação
de dispositivo e remoção de bloqueio. No host Windows é uma cadeia híbrida
(.NET WPF + motor NativeAOT nativo) que fala USB/lockdown com o dispositivo
e **contacta um servidor remoto** para material de sessão. Relevante para
defesa porque:

- manipula o dispositivo via `libimobiledevice` (incluindo em modos de
  recuperação), não só dados locais;
- pode criar regras de firewall / túneis locais durante a operação;
- o binário é empacotado para **resistir à análise**.

## 2. Como o binário se protege (anti-análise)

Provas em `docs/13` (empacotador) e `docs/12` (correção de entropia):

| Técnica | Evidência |
|---|---|
| **Nomes de secção falsos/renomeados** | `\`RZ`, `.CFY`, `.CJz`, `.managed`, `hydrated` em vez de nomes standard |
| **`.pdata` de decoy** | a secção chamada `.pdata` (RVA `0x1012000`) é uniforme (H≈7,94), sem xref; a exceção **real** (data dir #3) foi para `.CJz` (`0x231f880`) |
| **Import table reduzida** | `IAT` (`.CFY`) com **1 função por DLL** (15 funções, 30 slots) — não é AOT normal |
| **Ilhas de ruído** | blocos com estatística exata de bytes aleatórios intercalados no código |
| **Matador de processos** | laço de ~2 s enumera e mata ferramentas de análise (`WireShark`, `Fiddler`, `python`, `ghidra`, `3uTools`, …); para sniffers de rede também auto-termina o iRemoval — `decompiled/gates/180541900_*` |
| **Verificação de filtros USB** | lê `UPPERFILTERS` da classe USB e compara com filtros de captura — `decompiled/gates/18053a260_*` |
| **Heap materializado** | secção `hydrated` sem bytes no ficheiro (conteúdo só em runtime) |
| **Gate temporal** | diálogo ~10 s e `exit(1)` aos ~12 s sem licença (`docs/09`) |
| **Anti-debug** | import de `KERNEL32!IsDebuggerPresent` |

Marcador de build observado: *"Blackhound iRemovalPro Public build 0.7.1
@2022"* (`notes/02`).

## 3. Superfície de rede (IOCs de `docs/07`)

Roteador por **variante** — o sufixo do caminho seleciona exploit/plataforma:

| Indicador | Valor |
|---|---|
| Caminhos | `/iremovalActivation/{ars2,auth3,checkm8,iact9,mf5,mf6,mf7}.php`, `/pub.php`, `/version33.txt`, `/Payax0.php` |
| Hosts | `s13.iremovalpro.com`, `iremovalpro.com`, `iremovalpro.co` |
| Header custom | `X-iRemovalPRO-Version` |

Estes literais estão **completos em UTF-16** em `.rdata` (não são artefacto
de extração).

## 4. Entrega de payloads — onde estão (e onde não estão)

Correção (revista em 2026-10-16; ver `docs/10` §11): **há binários Apple
embutidos** — 1 dylib FAT (`blackhound.dylib`, arm64/arm64e — tweak
CydiaSubstrate/Logos que hooka o `MobileActivationDaemon`) + 3 executáveis
iOS, byte-exact em `.rdata` do motor (o varrimento `MZ+PE` anterior só via
PE). A alegada "região encriptada de 13 MB" **não existe** (`docs/12`).
Do lado do material de bypass:

- o **binário base do tweak viaja dentro do produto** (carveável de `.rdata`);
- já os **dados por-aparelho** (tickets/ativação) continuam a vir do
  **servidor** em runtime.

Consequência defensiva: não há blob cifrado para um "decryptor" atacar, mas
os binários iOS embutidos são carveáveis (magias Mach-O/FAT em `.rdata`) e
devem entrar na deteção estática; a deteção de *uso* mantém-se
**comportamental/rede**.

## 5. Indicadores de deteção

### 5.1 Ficheiro / estático (YARA)

```yara
rule iremovalpro_packer_markers
{
    meta:
        description = "Marcadores do empacotador custom iRemoval PRO / Blackhound"
        date        = "2026-10-15"
    strings:
        $http1 = "X-iRemovalPRO-Version" ascii wide
        $http2 = "/iremovalActivation/"   ascii wide
        $sec1  = "`RZ"  ascii
        $sec2  = ".CFY" ascii
        $sec3  = ".CJz" ascii
    condition:
        uint16(0) == 0x5A4D and 2 of them
}
```

Notas: a assinatura marca o **empacotador**, não só um produto; os nomes de
secção sozinhos podem gerar falsos positivos — combine com `$http*`.

### 5.2 Rede (bloqueio / proxy logs)

- Domínios: `*.iremovalpro.com`, `*.iremovalpro.co`.
- Pós-dados: `POST /iremovalActivation/*.php` com header `X-iRemovalPRO-Version`.
- `version33.txt` = sondagem de versão (bom sinal precoce de presença).

### 5.3 Host comportamental

- Cópia de `ref\toolkits\` (`ideviceproxy`, `libimobiledevice`, OpenSSL) para
  o diretório de trabalho.
- Acesso USB a dispositivos Apple (VID `0x05AC`) e a modos de recuperação.
- Criação/alteração de regras de firewall e servidores locais durante o
  arranque da app.
- Processo que termina com `exit(1)` ~12 s após o arranque (gate de licença).

### 5.4 Hashes (reprodutibilidade)

| Ficheiro | SHA-256 |
|---|---|
| `iRemoval PRO.exe` | `07452a1e…e424db7` (2 792 448 B) |
| `iremovalpro.dll` | ver `artifacts\original\` (34 363 904 B) |
| `iremovalpro_engine.exe` (cópia de análise) | `0bfc506483549ccac8b19e6dba99e68d5d57098f119ca56f8153d086e37d094f` |

## 6. Recomendações defensivas

1. **Bloquear** os domínios e os caminhos `/iremovalActivation/*` na egress
   (proxy/DNS) — interrompe a entrega de material de sessão.
2. **Deteção** por YARA §5.1 em endpoints/quarentena, não só por hash (o
   empacotador muda o hash a cada build).
3. **Política**: tratar como PUA de circunvenção; alertar sobre risco legal
   e sobre uso em dispositivos de terceiros.
4. **EDR**: monitorizar alterações de firewall e spawning de ferramentas
   `idevice*` a partir de diretórios temporários.

## 7. Limitações

- Corpos exatos de pedido/resposta só se observam em runtime (`docs/07` §2).
- A camada anti-análise impede leitura direta dos nomes reais de secção; a
  interpretação vem dos *data directories*, não das etiquetas.
- Este documento **não** avalia a legalidade em jurisdições específicas nem
  fornece meios de operar a ferramenta.
