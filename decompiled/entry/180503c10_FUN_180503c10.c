/* 180503c10  FUN_180503c10  body=244 */

bool FUN_180503c10(undefined8 param_1,undefined4 param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_a0 [40];
  undefined8 local_78;
  undefined8 *local_70;
  uint local_68;
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
  local_70 = &local_50;
  local_68 = (uint)(param_3 != '\0');
  local_78 = param_1;
  local_64 = param_2;
  func_0x00018000c9a0(local_a0);
  iVar1 = func_0x0001800bf474(local_78,local_64,local_68,local_70);
  func_0x00018000c9f0(local_a0);
  uVar2 = func_0x0001800bf600();
  local_44 = 1;
  local_54 = 1;
  *(undefined8 *)(local_60 + 8) = local_50;
  func_0x00018000c790(param_4,local_60);
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  return iVar1 != 0;
}

