/* 18055f490  FUN_18055f490  body=104 */

undefined8 FUN_18055f490(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = 1;
  uVar4 = iVar2 - 1;
  if (uVar4 < *(uint *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
    if (uVar4 < *(uint *)(lVar3 + 8)) {
      puVar1 = (undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar4 * 0x10);
      local_10 = *puVar1;
      uStack_8 = *(undefined4 *)(puVar1 + 1);
      uStack_4 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar5 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),&local_10);
      return uVar5;
    }
    uVar5 = func_0x00018039d020();
    return uVar5;
  }
  uVar5 = func_0x0001803029f0();
  return uVar5;
}

