/* 18055d340  FUN_18055d340  body=106 */

undefined8 FUN_18055d340(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = 0;
  uVar1 = *(int *)((longlong)param_1 + 0xc) - 1;
  if (uVar1 < *(uint *)(param_1[3] + 8)) {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    puVar2 = (undefined8 *)(param_1[3] + 0x10 + (ulonglong)uVar1 * 0x10);
    local_10 = *puVar2;
    uStack_8 = *(undefined4 *)(puVar2 + 1);
    uStack_4 = *(undefined4 *)((longlong)puVar2 + 0xc);
    uVar3 = (**(code **)(param_1[4] + 0x20))(*(undefined8 *)(param_1[4] + 8),&local_10);
    *(undefined4 *)(param_1 + 2) = uVar3;
    return 1;
  }
  (**(code **)(*param_1 + 0x38))();
  return 0;
}

