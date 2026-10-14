# 11 — Fronteira do lockdown (iPhone 12 próprio, emparelhado)

Sessão válida (pairing + `StartSession` + SSL, provado por debug).
Mesmo assim, a maioria das chaves responde `MissingValue` (rc=-12).

## 1. O que passa

| Query | Resultado |
|---|---|
| `ProductType` (sem domínio) | `iPhone13,2` ✓ |
| `DeviceName` (sem domínio) | `GG` ✓ |
| `com.apple.disk_usage` / `TotalDiskCapacity`, `TotalDataCapacity` | uint ✓ |

## 2. O que falha (`MissingValue`)

Sem domínio: `ActivationState`, `ProductVersion`, `SerialNumber`,
`UniqueDeviceID`, `BuildVersion`, `HardwareModel`.
Com domínio: `com.apple.mobilegestalt`/`SerialNumber`,
`com.apple.mobileactivationd`/`ActivationState`.

## 3. Leitura

O padrão separa identificadores únicos + versão (bloqueados) de nomes
genéricos + estatísticas de disco (abertos). Hipótese principal: hardening
de privacidade do iOS (precisa confirmar versão do iOS + Developer Mode).
Hipótese alternativa: base lockdown anormal neste aparelho (ainda por
excluir — cruzar com `ActivationState` se um dia responder).

## 4. Para confirmar

1. Versão do iOS (Definições > Geral > Sobre) + Developer Mode on/off.
2. Repetir `ActivationState` noutro estado (após reboot / re-pair).
3. Alargar domínios conhecidos (só leitura).

Ferramenta: `scripts/lockdown-read.ps1` (`-Domain`, `-Keys`, lê string+uint).
