/* 18055f070  FUN_18055f070  body=133 */

undefined8 FUN_18055f070(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  longlong *local_8;
  
  local_18 = 0;
  uStack_10 = 0;
  local_8 = (longlong *)0x0;
  uVar1 = *(int *)((longlong)param_1 + 0x14) - 1;
  if (uVar1 < *(uint *)(param_1[3] + 8)) {
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    local_8 = param_1 + 1;
    puVar2 = (undefined8 *)(param_1[3] + 0x10 + (ulonglong)uVar1 * 0x10);
    local_18 = *puVar2;
    uStack_10 = puVar2[1];
    uVar3 = (**(code **)(param_1[4] + 0x20))(*(undefined8 *)(param_1[4] + 8),&local_18);
    func_0x00018000c720(local_8,uVar3);
    return 1;
  }
  (**(code **)(*param_1 + 0x40))();
  return 0;
}

