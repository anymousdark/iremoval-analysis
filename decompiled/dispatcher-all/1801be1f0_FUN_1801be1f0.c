/* 1801be1f0  FUN_1801be1f0  body=45 */

undefined8 * FUN_1801be1f0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < (int)param_3) {
    param_3 = uVar1;
  }
  if (param_3 <= uVar1) {
    *param_1 = *param_2;
    *(uint *)(param_1 + 1) = param_3;
    return param_1;
  }
  puVar2 = (undefined8 *)func_0x000180302930();
  return puVar2;
}

