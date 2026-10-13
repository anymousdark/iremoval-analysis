/* 180503030  FUN_180503030  body=179 */

bool FUN_180503030(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = param_5;
  func_0x0001800bf5f4(0);
  local_60 = param_3;
  local_58 = param_1;
  local_50 = param_4;
  local_4c = param_2;
  func_0x00018000c9a0(local_88);
  iVar1 = func_0x0001800bf468(local_58,local_4c,local_60,local_50,param_5);
  func_0x00018000c9f0(local_88);
  uVar2 = func_0x0001800bf600();
  local_48 = 0;
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  return iVar1 != 0;
}

