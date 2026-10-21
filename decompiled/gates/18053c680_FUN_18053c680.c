/* xref-of=180cb2cc0 from=18053c7d8 containing=18053c680 name=FUN_18053c680 body=414 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18053c680(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auVar6 [16];
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
  lVar4 = FUN_1805436a0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_180530050();
    lVar4 = *(longlong *)(lVar4 + 0x10);
  }
  (*pcRam000000018080fce0)(lVar3);
  if (lVar2 != 0) {
    (*pcRam000000018080fce0)(lVar2);
  }
  if ((lVar4 == 0) || (*(int *)(lVar4 + 8) == 0)) {
    bVar5 = false;
  }
  else if (*(int *)(lVar4 + 8) == 9) {
    auVar6._0_4_ = -(uint)(*(int *)(lVar4 + 0xc) == _DAT_180cb2cc0 &&
                          *(int *)(lVar4 + 0xe) == _DAT_180cb2cd0);
    auVar6._4_4_ = -(uint)(*(int *)(lVar4 + 0x10) == _UNK_180cb2cc4 &&
                          *(int *)(lVar4 + 0x12) == _UNK_180cb2cd4);
    auVar6._8_4_ = -(uint)(*(int *)(lVar4 + 0x14) == _UNK_180cb2cc8 &&
                          *(int *)(lVar4 + 0x16) == _UNK_180cb2cd8);
    auVar6._12_4_ =
         -(uint)(*(int *)(lVar4 + 0x18) == _UNK_180cb2ccc &&
                *(int *)(lVar4 + 0x1a) == _UNK_180cb2cdc);
    bVar5 = (ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar6._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar6._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar6._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar6._12_4_ >> 0x1f) << 0xf) == 0xffff;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

