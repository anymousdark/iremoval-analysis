/* 180512d90  FUN_180512d90  body=84 */

void FUN_180512d90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x50);
  uVar2 = *(uint *)(lVar3 + 8);
  if (iVar1 - 1U < uVar2) {
    *(undefined4 *)(lVar3 + 0x10 + (ulonglong)(iVar1 - 1U) * 4) = param_2;
    if (iVar1 - 2U < uVar2) {
      *(undefined4 *)(lVar3 + 0x10 + (ulonglong)(iVar1 - 2U) * 4) = param_3;
      uVar4 = iVar1 - 3;
      if (uVar4 < uVar2) {
        *(undefined4 *)(lVar3 + 0x10 + (ulonglong)uVar4 * 4) = *(undefined4 *)(param_1 + 0x88);
        *(uint *)(param_1 + 0x50) = uVar4;
        return;
      }
    }
  }
  func_0x00018039d020();
  return;
}

