/* query=18053bbb0 containing=18053bbb0 name=FUN_18053bbb0 body=292 */

void FUN_18053bbb0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  uVar1 = FUN_1805395f0();
  uStack_18 = uStack_18 & 0xffffff00;
  uStack_20 = uStack_20 & 0xffffff00;
  lVar2 = FUN_1805277a0(uVar1,0x180759410,0x1807cbad8,1,uStack_18,uStack_20,0x180759410,0,
                        0x180759410,0xf27e,0x180759410,0);
  lVar3 = func_0x00018000c510(0x18089a9e0);
  func_0x00018000c720(lVar3 + 8,lVar2);
  uVar1 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x40))
                    (*(longlong **)(lVar3 + 8),0x1807c53f0,0,1);
  func_0x00018000c720(lVar3 + 0x10,uVar1);
  FUN_180534400(*(undefined8 *)(lVar3 + 0x10),300000);
  FUN_180543760();
  (*pcRam000000018080fcb0)(lVar3);
  if (lVar2 != 0) {
    (*pcRam000000018080fcb0)(lVar2);
  }
  return;
}

