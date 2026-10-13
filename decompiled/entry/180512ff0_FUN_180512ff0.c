/* 180512ff0  FUN_180512ff0  body=62 */

void FUN_180512ff0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x54);
  uVar4 = iVar1 - 1;
  uVar2 = *(uint *)(lVar3 + 8);
  if (uVar4 < uVar2) {
    *(undefined4 *)(lVar3 + 0x10 + (ulonglong)uVar4 * 4) = param_2;
    uVar4 = iVar1 - 2;
    if (uVar4 < uVar2) {
      *(undefined4 *)(lVar3 + 0x10 + (ulonglong)uVar4 * 4) = param_3;
      *(uint *)(param_1 + 0x54) = uVar4;
      return;
    }
  }
  func_0x00018039d020();
  return;
}

