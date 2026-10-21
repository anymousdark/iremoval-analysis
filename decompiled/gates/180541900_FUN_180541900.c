/* query=1805419d7 containing=180541900 name=FUN_180541900 body=1422 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180541900(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  do {
    uVar4 = func_0x00018000c510(0x18089a870);
    FUN_180539950(uVar4);
    lVar5 = FUN_1805399a0(uVar4);
    if (0 < *(int *)(lVar5 + 0x10)) {
      FUN_1801b4d10();
      FUN_1801b57d0();
    }
    iVar2 = FUN_18053a260();
    if (iVar2 != 0) {
      FUN_1801b4d10();
      lVar5 = FUN_1801b7990();
      if (lVar5 != 0) {
        FUN_180542ec0(lVar5);
      }
      FUN_180542d60(0,0x180794f00,0x18077a988,0x50010);
      FUN_1801b4d10();
      FUN_1801b57d0();
    }
    FUN_180541640();
    lVar5 = FUN_1801b4b80(0x180760738);
    uVar8 = 0;
    iVar2 = *(int *)(lVar5 + 8);
    if (0 < iVar2) {
      do {
        lVar1 = *(longlong *)(lVar5 + 0x10 + uVar8 * 8);
        lVar6 = FUN_1801b7290();
        if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 9)) {
LAB_180541a0e:
          lVar6 = *(longlong *)(lVar1 + 0xa8);
          if (lVar6 == 0) {
            lVar6 = FUN_1801b7860(lVar1);
            func_0x00018000c720(lVar1 + 0xa8,lVar6);
          }
          iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807bee5c,9);
          if (-1 < iVar3) goto LAB_180541a58;
        }
        else {
          auVar9._0_4_ = -(uint)(*(int *)(lVar6 + 0xc) == _DAT_180cb2d80 &&
                                *(int *)(lVar6 + 0xe) == _DAT_180cb2d90);
          auVar9._4_4_ = -(uint)(*(int *)(lVar6 + 0x10) == _UNK_180cb2d84 &&
                                *(int *)(lVar6 + 0x12) == _UNK_180cb2d94);
          auVar9._8_4_ = -(uint)(*(int *)(lVar6 + 0x14) == _UNK_180cb2d88 &&
                                *(int *)(lVar6 + 0x16) == _UNK_180cb2d98);
          auVar9._12_4_ =
               -(uint)(*(int *)(lVar6 + 0x18) == _UNK_180cb2d8c &&
                      *(int *)(lVar6 + 0x1a) == _UNK_180cb2d9c);
          if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                       (ushort)((byte)(auVar9._12_4_ >> 7) & 1) << 0xc |
                       (ushort)((byte)(auVar9._12_4_ >> 0xf) & 1) << 0xd |
                       (ushort)((byte)(auVar9._12_4_ >> 0x17) & 1) << 0xe |
                      (ushort)(byte)(auVar9._12_4_ >> 0x1f) << 0xf) != 0xffff) goto LAB_180541a0e;
LAB_180541a58:
          FUN_1801b57d0(lVar1);
          FUN_1801b4d10();
          FUN_1801b57d0();
        }
        lVar6 = FUN_1801b7290(lVar1);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 0xc)) {
LAB_180541abf:
          lVar6 = *(longlong *)(lVar1 + 0xa8);
          if (lVar6 == 0) {
            lVar6 = FUN_1801b7860(lVar1);
            func_0x00018000c720(lVar1 + 0xa8,lVar6);
          }
          iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807735a4,0xc);
          if (-1 < iVar3) goto LAB_180541b09;
        }
        else {
          auVar10._0_4_ =
               -(uint)(*(int *)(lVar6 + 0xc) == _DAT_180cb2da0 &&
                      *(int *)(lVar6 + 0x14) == _DAT_180cb2db0);
          auVar10._4_4_ =
               -(uint)(*(int *)(lVar6 + 0x10) == _UNK_180cb2da4 &&
                      *(int *)(lVar6 + 0x18) == _UNK_180cb2db4);
          auVar10._8_4_ =
               -(uint)(*(int *)(lVar6 + 0x14) == _UNK_180cb2da8 &&
                      *(int *)(lVar6 + 0x1c) == _UNK_180cb2db8);
          auVar10._12_4_ =
               -(uint)(*(int *)(lVar6 + 0x18) == _UNK_180cb2dac &&
                      *(int *)(lVar6 + 0x20) == _UNK_180cb2dbc);
          if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                       (ushort)((byte)(auVar10._12_4_ >> 7) & 1) << 0xc |
                       (ushort)((byte)(auVar10._12_4_ >> 0xf) & 1) << 0xd |
                       (ushort)((byte)(auVar10._12_4_ >> 0x17) & 1) << 0xe |
                      (ushort)(byte)(auVar10._12_4_ >> 0x1f) << 0xf) != 0xffff) goto LAB_180541abf;
LAB_180541b09:
          FUN_1801b57d0(lVar1);
          FUN_1801b4d10();
          FUN_1801b57d0();
        }
        lVar6 = *(longlong *)(lVar1 + 0xa8);
        if (lVar6 == 0) {
          lVar6 = FUN_1801b7860(lVar1);
          func_0x00018000c720(lVar1 + 0xa8,lVar6);
        }
        iVar3 = FUN_1802d3ee0(lVar6,0x180796380);
        if (iVar3 != 0) {
          FUN_1801b57d0(lVar1);
          FUN_1801b4d10();
          FUN_1801b57d0();
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807d0274,6);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        uVar4 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1802d3ee0(uVar4,0x18077ec08);
        if (iVar3 != 0) {
          FUN_1801b57d0(lVar1);
          FUN_1801b4d10();
          FUN_1801b57d0();
        }
        lVar6 = FUN_1801b7290(lVar1);
        if (((lVar6 != 0) && (*(int *)(lVar6 + 8) == 7)) &&
           (*(longlong *)(lVar6 + 0xc) == 0x64006400690046 &&
            *(longlong *)(lVar6 + 0x12) == 0x720065006c0064)) {
          FUN_1801b57d0(lVar1);
          FUN_1801b4d10();
          FUN_1801b57d0();
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807cf874,10);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807c57f4,6);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807cd284,9);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807caaec,5);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807d44d4,3);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807c3b74,4);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807c5f0c,7);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807c8b04,8);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x180765ce4,7);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807caefc,3);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x1807c8adc,6);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        lVar6 = FUN_1801b7290(lVar1);
        iVar3 = FUN_1803015a0(lVar6 + 0xc,*(undefined4 *)(lVar6 + 8),0x18078288c,3);
        if (-1 < iVar3) {
          FUN_1801b57d0(lVar1);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < iVar2);
    }
    FUN_180331720(1000);
    FUN_180331720(1000);
  } while( true );
}

