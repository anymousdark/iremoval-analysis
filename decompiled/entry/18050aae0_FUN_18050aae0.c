/* 18050aae0  FUN_18050aae0  body=80 */

void FUN_18050aae0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  func_0x00018000c720();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar3 = 0;
  iVar1 = *(int *)(lVar2 + 8);
  if (0 < iVar1) {
    do {
      *(undefined4 *)(lVar2 + 0x10 + (ulonglong)uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18) = 0;
  return;
}

