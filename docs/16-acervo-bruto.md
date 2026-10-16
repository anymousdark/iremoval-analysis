# 16 - Acervo bruto completo (Release acervo-brutos-2026-10-16)

Data: 2026-10-16.

Objetivo: preservar o acervo COMPLETO usado na analise do iRemoval PRO 5.2.1
(toolkits, instaladores e dumps), inclusive os arquivos que nao caberiam na
arvore do git.

## Por que parte ficou fora da arvore do git

O GitHub rejeita no push qualquer arquivo acima de 100 MiB (avisa a partir de
50 MiB). Quatro brutos passam disso:

| arquivo | bytes | sha256 | o que e |
|---|---:|---|---|
| ghidra1214.zip | 569649598 | `ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db` | instalador do Ghidra 12.1.4 (descompilacao headless) |
| ipro-01.dmp | 383234505 | `532feaedd6d49a9a8c6b65786d4ef9136fd9f9be7bfe1b274efc5ac9329e4fa3` | minidump do processo iRemoval (strings/bindings) |
| temurin21.zip | 205073461 | `f9d6e191ab098c0d416e7d588a24420a8621cd2f4720dab2459b8b7b2d2d8b4e` | Eclipse Temurin JDK 21 (runtime do Ghidra headless) |
| trace.pml | 161709879 | `e5f859a9c087d6ab6ed10fd41f12e6db3c937e96ae513f76f83d9266fad206f8` | captura ProcMon da sessao (versao legivel: dumps/procmon/trace.csv) |

Git LFS foi descartado: a quota gratuita (1 GiB) nao cobre os 1,26 GB somados e
consumiria banda de quem clonar. Solucao adotada: os quatro sao publicados
INTEGRAIS como assets da Release `acervo-brutos-2026-10-16` (limite 2 GB por
asset), com os sha256 acima para auditoria.

## Como baixar

    gh release download acervo-brutos-2026-10-16 -R anymousdark/iremoval-analysis

ou pela aba Releases:
https://github.com/anymousdark/iremoval-analysis/releases/tag/acervo-brutos-2026-10-16

## O que entrou na arvore do git

- iremoval-tools/dnspy/ (62 MB), ilspy/ (132 MB), ilspycmd/ (11 MB), procmon/ (8 MB)
- iremoval-tools/downloads/ (exceto os 2 zips que foram para a Release, ~88 MB)
- dumps/ (strings, mem-*.txt, bplist-enc.bin, procmon/trace.csv; ~23 MB)
- ghidra-project/ (DB local do Ghidra, 3 MB)

## Licencas e origem (terceiros)

dnSpy (GPL-3.0), ILSpy e ilspycmd (MIT), Process Monitor/ProcDump (EULA
Microsoft, Sysinternals), Ghidra (Apache-2.0), Eclipse Temurin (GPLv2+CPE).
Os binarios foram vendorizados apenas para preservar a ferramenta exata usada
na analise; os direitos sao dos autores originais.

## Nota

O acervo nao contem payloads ou licencas de terceiros reais; e o material de
analise proprio (dumps da execucao local, capturas e instaladores publicos).
