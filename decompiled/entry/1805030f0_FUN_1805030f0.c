/* 1805030f0  FUN_1805030f0  body=304 */

bool FUN_1805030f0(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 local_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  
  local_68 = 0;
  local_48 = 0;
  lStack_60 = 0;
  local_58 = 0;
  lStack_50 = param_3;
  func_0x0001803774e0(param_3,&local_48);
  lStack_60 = param_1;
  func_0x0001803774e0(param_1,&local_58);
  local_68 = param_5;
  uVar1 = *(undefined8 *)(lStack_50 + 8);
  uVar2 = *(undefined8 *)(lStack_60 + 8);
  func_0x0001800bf5f4(0);
  local_80 = uVar1;
  local_78 = uVar2;
  local_70 = param_4;
  local_6c = param_2;
  func_0x00018000c9a0(local_a8);
  iVar3 = func_0x0001800bf468(local_78,local_6c,local_80,local_70,param_5);
  func_0x00018000c9f0();
  uVar4 = func_0x0001800bf600();
  local_68 = 0;
  if ((char)local_48 != '\0') {
    func_0x000180377520(lStack_50,0);
  }
  if ((char)local_58 != '\0') {
    func_0x000180377520(lStack_60,0);
  }
  lVar5 = func_0x000180004bd4();
  *(undefined4 *)(lVar5 + 0xf8) = uVar4;
  return iVar3 != 0;
}

