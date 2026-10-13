/* 1801b2530  FUN_1801b2530  body=182 */

void FUN_1801b2530(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_80 [44];
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar2 = 0;
  uVar3 = 0;
  local_4c = 0;
  local_54 = param_2;
  local_48 = param_3;
  local_44 = param_1;
  func_0x00018000c9a0(local_80);
  iVar1 = func_0x0001800bf648(local_44,local_4c,local_54,local_48,param_4,param_5,uVar2,uVar3);
  func_0x00018000c9f0(local_80);
  if (0 < iVar1) {
    return;
  }
  uVar2 = func_0x00018000c510(0x180858908);
  func_0x0001802e1350(uVar2,0x1807a09f0);
  func_0x00018000cfe0(uVar2);
  return;
}

