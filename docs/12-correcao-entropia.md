# 12 — Correção: a "região encriptada de 13 MB" não existe

Sessão de 2026-10-15. Medições diretas que corrigem `08` §6, `10` §4 e `10` §7–§8.

## 1. Perfil de entropia real (blocos de 256 KB, `tools/entropy.js`)

- Média do ficheiro: **6,814** bits/byte (132 blocos).
- Blocos H≈7,99 **isolados**, não uma faixa contínua:
  `0x00D40000`, `0x00D80000` (`.pdata`); `0x00F80000…0x010C0000` (`` `RZ ``);
  `0x01700000…0x017C0000` e `0x01980000…0x019C0000` (`.CJz`).

O `crypto-region.bin` (carve `0xD40000–0x1A00000`, 13 369 344 B) tem
**H = 7,4916** — não 8,0 — com **1 235 blocos 16 B de zeros** e padrões de
**código x86-64** evidentes:

```
fe ff 48 83 c4 20 5d c3 cc cc cc cc cc cc cc   ->  add rsp,0x20; pop rbp; ret; int3…
```

Logo, a faixa não é um bloco cifrado uniforme. **`08` §6 e `10` §4
generalizaram demais.**

## 2. Blocos H≈8 são de naturezas diferentes (não "1 blob")

- `0x00F80000` (`` `RZ ``): **instruções x86-64 reais** —
  `48 8b 5c 24 30` (`mov rbx,[rsp+0x30]`), `e8 46 4d 0e 00` (`call rel32`),
  `40 38 6c 24 50` (`cmp [rsp+0x50],bpl`), `0f 86 …` (`jbe`). Código denso
  tem entropia alta por natureza.
- `0x00D40000`/`0x00D80000` (`.pdata`): entropia alta **sem strings**
  (424 runs ASCII, todas lixo) → dados aleatórios/comprimidos/cifrados
  **pequenos** (~0,5 MB no total), não 13 MB.

`tools/blob-stats.js` (blocos 16 B repetidos = detetor ECB): 981 duplicados
em 835 584 blocos (0,1 %) — compatível com código/aleatório, **não** com ECB
de plaintext estruturado.

## 3. A S-box AES é do runtime .NET (não um "decryptor" do produto)

- `0xa80814` (S-box) e `0xa8091d` (inv-S-box) são **byte-a-byte** as tabelas
  `s_sbox`/`s_iSbox` do `RijndaelManagedTransform` do .NET.
- **Zero xref estático**: `tools/xref-sbox.js` (varre todas as secções; `lea`/`mov`
  rip-relative + imediato) → 0. `tools/scan-ptr.js` → sem ponteiro 8 B, sem RVA
  e sem entrada `.reloc`. O scanner está validado (`tools/verify.js`: 15 058
  refs `lea`/`mov` em `.text`, 2 364 para `.rdata`).
- Compatível com tabelas do **framework compilado no AOT** e não chamadas pelo
  produto (código morto retido pelo Nuke/trimming do NativeAOT).

## 4. `Salted__`/`EVP_*`/OpenSSL: falso positivo

As strings "…with OpenSSL error…", "CipherSuitesPolicy…" são mensagens de
**`System.Net.Security` (SslStream) do próprio .NET**, não OpenSSL linkado.
Sem `Salted__`, `AES-256-CBC`, `EVP_EncryptInit` no binário.

## 5. Os dois `bplist00`

- `0x9c17d8`: plist **válido** → `{"iRemovalPRO": "shit happening"}` (marcador
  do autor, com `System.Net.Quic` no heap). Valor documental.
- `0xa79c61`: `bplist00` + corpo **não parseável** (marcador plist inválido logo
  no 2.º objeto). Não infla em nenhum modo. Provável blob ofuscado/decoy —
  alvo pequeno, não os "13 MB".

## 6. Veredito (honesto)

Não há evidência de um **único blob cifrado de 13 MB** nem de um **decryptor
AES bespoke** no motor. O que existe:

1. **Código AOT** (`` `RZ ``/`.CJz`) com entropia alta — normal.
2. **Metadados .NET** e tabelas do runtime (a S-box).
3. **Pequenos** trechos aleatórios em `.pdata` (~0,5 MB) e 1 `bplist00` opaco.

Construir um "decryptor" sobre isto sem alvo definido seria engenharia a
fingir. Caminho correto: (a) confirmar em runtime o que é realmente
desencriptado (a app morre aos ~12 s antes de qualquer device — ver `09`);
(b) se houver blob a decifrar, vem do **servidor** em runtime (`07`), não do
binário.

Ferramentas desta análise: `tools/entropy.js`, `tools/blob-stats.js`,
`tools/xref-sbox.js`, `tools/scan-ptr.js`, `tools/verify.js`.
