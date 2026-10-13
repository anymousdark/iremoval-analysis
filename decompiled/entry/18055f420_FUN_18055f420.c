/* 18055f420  FUN_18055f420  body=95 */

undefined8 FUN_18055f420(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = 1;
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
    if (*(int *)(lVar1 + 8) != 0) {
      local_10 = *(undefined8 *)(lVar1 + 0x10);
      uStack_8 = *(undefined4 *)(lVar1 + 0x18);
      uStack_4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),&local_10);
      return uVar2;
    }
    uVar2 = func_0x00018039d020();
    return uVar2;
  }
  uVar2 = func_0x0001803029f0();
  return uVar2;
}

