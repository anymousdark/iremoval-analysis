/* 1801b05c0  FUN_1801b05c0  body=133 */

undefined4
FUN_1801b05c0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  pcVar2 = (code *)func_0x00018039c150(0x180fdf8d8);
  local_58 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  local_44 = param_1;
  func_0x00018000c9a0(local_80);
  uVar1 = (*pcVar2)(local_44,local_50,local_48,local_58);
  func_0x00018000c9f0(local_80);
  return uVar1;
}

