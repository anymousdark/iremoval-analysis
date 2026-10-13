/* 18051d5e0  FUN_18051d5e0  body=144 */

longlong FUN_18051d5e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = func_0x00018000c510(0x18085a0f8);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 8) = uVar1;
  lVar3 = func_0x00018000c510(0x180897ac0);
  uVar4 = FUN_180509c60(0x1807869f8,uVar4,lVar2,param_3);
  *(undefined4 *)(lVar3 + 0x48) = 0x80131500;
  func_0x00018000c720(lVar3 + 8,uVar4);
  *(undefined4 *)(lVar3 + 0x48) = 0x80131501;
  *(undefined4 *)(lVar3 + 0x48) = 0x80070057;
  *(undefined4 *)(lVar3 + 0x58) = param_2;
  *(undefined4 *)(lVar3 + 0x5c) = uVar1;
  return lVar3;
}

