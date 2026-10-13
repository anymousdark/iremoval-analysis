/* 180502f00  FUN_180502f00  body=219 */

bool FUN_180502f00(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_a0 [44];
  undefined8 local_74;
  undefined8 *local_6c;
  undefined4 local_64;
  longlong local_60;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_44 = 0;
  local_50 = 0;
  local_54 = 0;
  local_60 = func_0x000180723dc0(0x1807fda40);
  func_0x0001800bf5f4(0);
  local_6c = &local_50;
  local_74 = param_1;
  local_64 = param_2;
  func_0x00018000c9a0(local_a0);
  iVar1 = func_0x0001800bf44a(local_74,local_64,local_6c);
  func_0x00018000c9f0(local_a0);
  uVar2 = func_0x0001800bf600();
  local_44 = 1;
  local_54 = 1;
  *(undefined8 *)(local_60 + 8) = local_50;
  func_0x00018000c790(param_3,local_60);
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  return iVar1 != 0;
}

