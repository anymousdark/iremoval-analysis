/* 180534f80  FUN_180534f80  body=107 */

void FUN_180534f80(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffff00;
  func_0x000180373230(&local_38,0,1);
  func_0x0001806fe540(&local_38,param_2);
  uVar1 = func_0x0001803733f0(&local_38);
  *(undefined4 *)(param_1 + 0x48) = 0x80131500;
  func_0x00018000c720(param_1 + 8,uVar1);
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}

