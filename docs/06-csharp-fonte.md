# 06 — Código-fonte C# recuperado (casca) + memória

Recuperação total da casca .NET com `ilspycmd` 11.1 (`dotnet` 10 runtime,
`F:\tools\dotnet`), projeto compilável (`-p`): **`decompiled/csharp/` —
187 ficheiros, 254.279 linhas, 8,3 MB**.

> Daqui em diante, "fonte" = C# descompilado da casca ofuscada. Do motor
> NativeAOT não há C# — só pseudocode Ghidra (`03`, `04`, `05`).

---

## 1. Como foi obtido

```
F:\tools\dotnet\dotnet.exe iremoval-tools\ilspycmd\tools\net10.0\any\ilspycmd.dll \
  -o decompiled\csharp -p "artifacts\original\iRemoval PRO.exe"
```

Ferramentas instaladas para o efeito em `iremoval-tools/`: `ilspycmd`
(NuGet), runtime .NET 10, `dnSpy-netframework.zip` (extraído em
`iremoval-tools/dnspy/`), `procdump.exe`, `ILSpy-selfcontained` (sem
`ilspycmd` no pacote — foi preciso o runtime + NuGet).

## 2. Estado da ofuscação (em fonte)

- 308/313 tipos com nome hexadecimal (`C834A786.cs` tem **8,2 MB** sozinho).
- Dispatcher `C834A786._3CB74B1B(object, int)` (`csharp/C834A786.cs:207695`):
  state machine com predicados opacos (`(uint)(b >>> 20) < (7 | …)`),
  `switch ((uint)num3 % 3u)` falso, despacho por exceção
  (`TargetInvocationException` → inner). Tabela de operandos
  `C8BFB49E._81BBAF2C` (tok `0x04000240`).
- Infra de invocação dinâmica no mesmo ficheiro: `ConcurrentDictionary<Type,
  delegate>`, `TypedReference`, ponteiros `unsafe`, `Marshal` — os corpos
  reais são montados via `DynamicMethod`/`ILGenerator` em runtime
  (confirmado estaticamente em `01` §2.2 e em memória, ver §4).
- Conclusão profissional: estrutura 100% recuperada, lógica ofuscada por
  controle de fluxo. Leitura direta exige desvirtualização dinâmica
  (fora do escopo estático).

## 3. AMOSTRA — scanner anti-VM em fonte (`C8BFB49E._42954884`)

Varredura de assinaturas byte-a-byte (QEMU, Microsoft, innotek/VirtualBox,
VMware, Parallels):

```csharp
internal static bool _42954884(byte[] _841BB6B0)
{
    for (int i = 0; i < _841BB6B0.Length; i++)
    {
        if (i + 3 < _841BB6B0.Length && _841BB6B0[i] == 81 && ... ) // "QEMU"
            return true;
        if (... ) // "Microsoft"
            return true;
        if (... ) // "innotek"
            return true;
        if (... ) // "VirtualBox"
            return true;
        if (... ) // "VMware"
            return true;
        if (... ) // "Parallels"
            return true;
    }
    return false;
}
```

Casa com: P/Invoke `NtQueryVirtualMemory` (ntdll) e a superfície WMI
(`Win32_*`, `ManagementObjectSearcher`) — detecção de sandbox por memória,
drivers e firmware. Ver também `01` §2.3 (`dlsym` fake) e `05` §4 (`swi(3)`).

## 4. Memory dump (`dumps/mem/ipro-01.dmp`, 365 MB, procdump `-ma`)

Execução contida do instalado real (25 s, sem interação, processo morto
após o dump). Extração total: 28.616 strings interessantes únicas contra
2.773 estáticas → **26.275 novas em runtime** (`dumps/mem-only.txt`).

Novidades reais (o resto é ruído CLR/WPF/DirectX):

- **URLs montadas por concatenação**: `https://iremovalpro.com/Payax0.ph`,
  `…/auth3.ph`, `…/iact9.ph`, `…/mf6.ph`, `…/pub.ph` — fragmentos `.ph`
  (sem o `p` final) = prova de montagem em runtime (ofuscação de strings).
- Texto de UI só visível em runtime: `"Please click Jailbreak button on
  the left or try to reconnect the jailbroken device"`.
- Stubs P/Invoke (`Action`/`SetCallbacks`/`SetWinInfo`, `C834A786`)
  **ausentes** em runtime: vivem só na metadata (ImplMap) — JIT não
  materializa os nomes. Confirma `01` §2.3 por outra via.

## 5. Limites honestos

- Corpos `DynamicMethod` + payloads de `AssemblyResolve` (assembly a partir
  de bytes) só existem em runtime — o C# estático mostra o esqueleto.
- Do motor NativeAOT não há fonte C#: o melhor são os pseudocodes
  (`decompiled/dispatcher-all/`, `entry/`, `exports/`) + `03`/`04`/`05`.
- Por fazer (não crítico): texto das 6 strings de exceção da `configure`,
  nome do MethodTable `0x180839620` (ver `05` §6).
