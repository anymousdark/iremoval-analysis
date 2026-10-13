/* 18055ef80  FUN_18055ef80  body=53 */

void FUN_18055ef80(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *param_2 = 1;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 8) != 0) {
    local_10 = *(undefined4 *)(lVar1 + 0x10);
    uStack_c = *(undefined4 *)(lVar1 + 0x14);
    uStack_8 = *(undefined4 *)(lVar1 + 0x18);
    uStack_4 = *(undefined4 *)(lVar1 + 0x1c);
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),&local_10);
    return;
  }
  func_0x00018039d020();
  return;
}

