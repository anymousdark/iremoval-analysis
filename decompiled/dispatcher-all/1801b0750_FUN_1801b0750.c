/* 1801b0750  FUN_1801b0750  body=106 */

undefined8 FUN_1801b0750(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 local_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  
  pcVar1 = (code *)func_0x00018039c150(0x180fdf618);
  local_4c = param_1;
  local_44 = param_2;
  func_0x00018000c9a0(local_78);
  uVar2 = (*pcVar1)(local_4c,local_44);
  func_0x00018000c9f0(local_78);
  return uVar2;
}

