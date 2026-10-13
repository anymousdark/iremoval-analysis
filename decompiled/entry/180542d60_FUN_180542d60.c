/* 180542d60  FUN_180542d60  body=254 */

undefined4 FUN_180542d60(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 local_98 [44];
  ulonglong local_6c;
  ulonglong local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = 0;
  local_50 = 0;
  pcVar2 = (code *)func_0x00018039c150(0x180fdf818);
  local_48 = func_0x000180374810(param_2,1,0);
  local_6c = func_0x000180374810(param_3,1,0);
  local_64 = local_48;
  local_5c = param_1;
  local_54 = param_4;
  local_50 = local_6c;
  func_0x00018000c9a0(local_98);
  uVar1 = (*pcVar2)(local_5c,local_64,local_6c,local_54);
  func_0x00018000c9f0(local_98);
  if ((param_2 != 0) && ((local_48 & 0xffffffffffff0000) != 0)) {
    func_0x0001803a05f0(local_48);
  }
  if ((param_3 != 0) && ((local_50 & 0xffffffffffff0000) != 0)) {
    func_0x0001803a05f0(local_50);
  }
  return uVar1;
}

