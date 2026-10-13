/* 18055efc0  FUN_18055efc0  body=65 */

void FUN_18055efc0(longlong param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *param_2 = 1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar3 = *(int *)(lVar2 + 8) - 1;
  if (uVar3 < *(uint *)(lVar2 + 8)) {
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (ulonglong)uVar3 * 0x10);
    local_10 = *puVar1;
    uStack_c = puVar1[1];
    uStack_8 = puVar1[2];
    uStack_4 = puVar1[3];
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),&local_10);
    return;
  }
  func_0x00018039d020();
  return;
}

