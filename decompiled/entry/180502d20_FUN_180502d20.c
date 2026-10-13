/* 180502d20  FUN_180502d20  body=267 */

bool FUN_180502d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,char param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_44 = 0;
  local_50 = 0;
  local_54 = 0;
  local_60 = func_0x000180723dc0(0x1807fda40);
  func_0x0001800bf5f4(0);
  uVar4 = (uint)(param_6 != '\0');
  local_68 = &local_50;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_1;
  func_0x00018000c9a0(local_a8);
  iVar1 = func_0x0001800bf69c(local_70,local_78,local_80,local_68,param_5,uVar4,param_7);
  func_0x00018000c9f0(local_a8);
  uVar2 = func_0x0001800bf600();
  local_44 = 1;
  local_54 = 1;
  *(undefined8 *)(local_60 + 8) = local_50;
  func_0x00018000c790(param_4,local_60);
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  return iVar1 != 0;
}

