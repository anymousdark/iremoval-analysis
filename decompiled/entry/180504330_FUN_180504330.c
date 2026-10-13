/* 180504330  FUN_180504330  body=137 */

undefined4
FUN_180504330(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 local_88 [44];
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  pcVar2 = (code *)func_0x00018039c150(0x180fdf7f8);
  local_5c = param_4;
  local_54 = param_2;
  local_4c = param_1;
  local_44 = param_3;
  func_0x00018000c9a0(local_88);
  uVar1 = (*pcVar2)(local_4c,local_54,local_44,local_5c);
  func_0x00018000c9f0(local_88);
  return uVar1;
}

