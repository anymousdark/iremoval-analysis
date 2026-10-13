/* 18051c040  FUN_18051c040  body=106 */

ulonglong FUN_18051c040(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 8) - *(int *)(param_1 + 0x58);
  iVar5 = 3;
  if (iVar2 < 3) {
    iVar5 = iVar2;
  }
  uVar3 = 0;
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if (*(uint *)(*(longlong *)(param_1 + 0x28) + 8) <= uVar1) {
      uVar4 = func_0x00018039d020();
      return uVar4;
    }
    uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x28) + 0xc + (ulonglong)uVar1 * 2) - 0x30;
    if (7 < uVar6) break;
    *(uint *)(param_1 + 0x58) = uVar1 + 1;
    uVar3 = uVar6 + uVar3 * 8;
    if (((*(uint *)(param_1 + 0x70) & 0x100) != 0) && (0x1f < (int)uVar3)) break;
  }
  return (ulonglong)(uVar3 & 0xff);
}

