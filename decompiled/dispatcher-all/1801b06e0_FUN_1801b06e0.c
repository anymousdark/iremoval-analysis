/* 1801b06e0  FUN_1801b06e0  body=108 */

undefined4 FUN_1801b06e0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 local_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  
  pcVar2 = (code *)func_0x00018039c150(0x180fdf4b8);
  local_50 = param_2;
  local_48 = param_1;
  func_0x00018000c9a0(local_78);
  uVar1 = (*pcVar2)(local_48,local_50);
  func_0x00018000c9f0(local_78);
  return uVar1;
}

