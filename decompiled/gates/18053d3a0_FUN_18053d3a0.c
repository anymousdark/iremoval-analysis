/* query=18053d3a0 containing=18053d3a0 name=FUN_18053d3a0 body=258 */

void FUN_18053d3a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  uVar1 = FUN_1805395f0();
  uStack_20 = uStack_20 & 0xffffff00;
  uStack_28 = uStack_28 & 0xffffff00;
  lVar2 = FUN_1805277a0(uVar1,0x180759410,0x1807cbad8,1,uStack_20,uStack_28,0x180759410,0,
                        0x180759410,0xf27e,0x180759410,0);
  uVar1 = func_0x00018000c510(0x180899e00);
  FUN_180535810(uVar1,lVar2);
  FUN_180535f00();
  FUN_180535f50(uVar1);
  (*pcRam000000018080fd00)();
  if (lVar2 != 0) {
    (*pcRam000000018080fd00)();
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}

