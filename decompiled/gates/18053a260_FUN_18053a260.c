/* query=18053a323 containing=18053a260 name=FUN_18053a260 body=282 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18053a260(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  
  if (lRam0000000180805910 != 0) {
    func_0x000180001c3c();
  }
  uVar3 = FUN_1800d0110(*(undefined8 *)(_DAT_180fdfad8 + 0x10),0x18079ccd8,1);
  plVar4 = (longlong *)FUN_1800d0280(uVar3,0x1807ba648,0,0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0x1809b8ce8) {
      plVar4 = (longlong *)FUN_1803704c0(0x1809b8ce8,plVar4);
    }
    uVar2 = 0;
    if (0 < (int)plVar4[1]) {
      do {
        lVar1 = plVar4[(ulonglong)uVar2 + 2];
        if (lVar1 != 0) {
          if ((*(int *)(lVar1 + 8) == 7) &&
             (*(longlong *)(lVar1 + 0xc) == 0x50004200530055 &&
              *(longlong *)(lVar1 + 0x12) == 0x70006100630050)) {
            return 1;
          }
          if (*(int *)(lVar1 + 8) == 0xd) {
            auVar5._0_4_ = -(uint)(*(int *)(lVar1 + 0xc) == _DAT_180cb2c50 &&
                                  *(int *)(lVar1 + 0x16) == _DAT_180cb2c60);
            auVar5._4_4_ = -(uint)(*(int *)(lVar1 + 0x10) == _UNK_180cb2c54 &&
                                  *(int *)(lVar1 + 0x1a) == _UNK_180cb2c64);
            auVar5._8_4_ = -(uint)(*(int *)(lVar1 + 0x14) == _UNK_180cb2c58 &&
                                  *(int *)(lVar1 + 0x1e) == _UNK_180cb2c68);
            auVar5._12_4_ =
                 -(uint)(*(int *)(lVar1 + 0x18) == _UNK_180cb2c5c &&
                        *(int *)(lVar1 + 0x22) == _UNK_180cb2c6c);
            if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                         (ushort)((byte)(auVar5._12_4_ >> 7) & 1) << 0xc |
                         (ushort)((byte)(auVar5._12_4_ >> 0xf) & 1) << 0xd |
                         (ushort)((byte)(auVar5._12_4_ >> 0x17) & 1) << 0xe |
                        (ushort)(byte)(auVar5._12_4_ >> 0x1f) << 0xf) == 0xffff) {
              return 1;
            }
          }
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)plVar4[1]);
    }
  }
  return 0;
}

