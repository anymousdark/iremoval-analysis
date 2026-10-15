# 10 — Payloads embutidos: levantamento completo

Pergunta: há executáveis, tweaks ou blobs de bypass dentro dos binários?
Resposta curta: **nada executável embutido**; há 1 bplist legível, 1 região
encriptada e o resto vem do servidor/`ref/`.

---

## 1. Executáveis embutidos: NENHUM

Varrimento `MZ+PE` no motor e na casca (`find-pe.js`): só os headers
externos (`x64`/`x86` em `0x0`). Sem EXE/DLL escondidos.

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
  (`notes/02` §1, `07` protocolo). Nada disto está embutido.
- **`ref/toolkits/`**: `ideviceproxy` (23 MB), libimobiledevice, OpenSSL —
  ferramentas de terceiros no disco, não no binário.
- **Lado iOS** (tweak CydiaSubstrate/Logos, bundle `com.iremovalpro.bypass`):
  entregue via servidor/dispositivo, não embutido (`notes/02` §3).

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
