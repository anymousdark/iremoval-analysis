/* 180522aa0  FUN_180522aa0  body=83 */

void FUN_180522aa0(longlong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  iVar4 = iVar2 - ((iVar2 >> 0x1f & 0x3fU) + iVar2 & 0xffffffc0);
  if (iVar4 != 0) {
    uVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x3fU)) >> 6;
    if (*(uint *)(*param_1 + 8) <= uVar3) {
      func_0x00018039d020();
      return;
    }
    puVar1 = (ulonglong *)(*param_1 + 0x10 + (ulonglong)uVar3 * 8);
    *puVar1 = *puVar1 & (1L << ((byte)iVar4 & 0x3f)) - 1U;
  }
  return;
}

