/* query=18053c020 containing=18053bf20 name=FUN_18053bf20 body=681 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18053bf20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  lVar5 = func_0x00018000c550(0x180839620);
  FUN_1801b4370(lVar5);
  lVar6 = func_0x00018000c510(0x180839830);
  uVar7 = FUN_1802d1920();
  uVar7 = FUN_1802d5660(uVar7,0x180761988);
  func_0x00018000c720(lVar6 + 0x18,uVar7);
  *(undefined8 *)(lVar6 + 8) = 0x1807c4e08;
  *(undefined8 *)(lVar6 + 0x10) = 0x1807610f8;
  *(undefined1 *)(lVar6 + 0x7e) = 1;
  *(undefined1 *)(lVar6 + 0x83) = 0;
  *(undefined1 *)(lVar6 + 0x7c) = 1;
  FUN_1801b44d0(lVar5,lVar6);
  uStack_50 = 0x1807b8d38;
  FUN_1801b4fc0(lVar5);
  FUN_180331720(2000);
  FUN_1801b4d10();
  lVar6 = FUN_1801b7990();
  if (lVar6 != 0) {
    FUN_180542ec0(lVar6);
  }
  FUN_180542d60(0,0x1807a3190,0x1807be748,0x50030);
  uVar7 = FUN_1801b4540(lVar5);
  uStack_38 = FUN_1802e6120();
  dVar3 = _DAT_180cb2ca8;
  dVar10 = (double)FUN_1802d2360();
  uVar8 = FUN_1802e57e0(&uStack_38,
                        (longlong)((dVar3 - dVar10) * _DAT_180cb2cb0) + (longlong)dVar10 * 10000000)
  ;
  do {
    lVar6 = FUN_180362420();
    if (lVar6 == 0) goto LAB_18053c16d;
    lVar1 = lVar6 + 0xc;
    uVar2 = *(undefined4 *)(lVar6 + 8);
    iVar4 = FUN_1803015a0(lVar1,uVar2,0x18079a28c,5);
    if (-1 < iVar4) {
      uStack_50 = 0x18079a280;
      goto LAB_18053c16d;
    }
    iVar4 = FUN_1803015a0(lVar1,uVar2,0x180785414,8);
    if (-1 < iVar4) {
      uStack_50 = 0x180785408;
      goto LAB_18053c16d;
    }
    iVar4 = FUN_1803015a0(lVar1,uVar2,0x180769674,9);
    if (-1 < iVar4) {
      uStack_50 = 0x180769668;
      goto LAB_18053c16d;
    }
    iVar4 = FUN_1803015a0(lVar1,uVar2,0x18077d62c,6);
    if (-1 < iVar4) {
      uStack_50 = 0x1807bc5d0;
      goto LAB_18053c16d;
    }
    uVar9 = FUN_1802e6120();
  } while ((uVar9 & 0x3fffffffffffffff) <= (uVar8 & 0x3fffffffffffffff));
  uStack_50 = 0x1807b8d38;
LAB_18053c16d:
  (*pcRam000000018080fcc0)(uVar7);
  FUN_1801b57d0(lVar5);
  iVar4 = FUN_1801b43b0(lVar5);
  if (iVar4 == 0) {
    FUN_1801b57d0(lVar5);
  }
  if (*(char *)(lVar5 + 0xf1) == '\0') {
    FUN_1801b4670(lVar5);
    *(undefined1 *)(lVar5 + 0xf1) = 1;
  }
  FUN_1802d2050(lVar5);
  return uStack_50;
}

