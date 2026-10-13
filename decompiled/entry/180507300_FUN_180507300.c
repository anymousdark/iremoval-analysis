/* 180507300  FUN_180507300  body=130 */

undefined8 FUN_180507300(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_70 [40];
  undefined8 local_48;
  
  local_48 = 0;
  *param_2 = 0;
  func_0x00018000c9a0(local_70);
  uVar3 = func_0x0001800bf6ae();
  func_0x00018000c9f0(local_70);
  iVar1 = FUN_180502f00(uVar3,param_1,&local_48);
  if (iVar1 == 0) {
    lVar4 = func_0x000180004bd4();
    uVar2 = FUN_180507160(*(undefined4 *)(lVar4 + 0xf8));
    *param_2 = uVar2;
  }
  return local_48;
}

