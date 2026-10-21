/* query=1805360c0 containing=1805360c0 name=FUN_1805360c0 body=1497 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1805360c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  char cStackX_10;
  int iStackX_14;
  char cStackX_18;
  int iStackX_1c;
  char cStackX_20;
  int iStackX_24;
  undefined4 auStack_68 [3];
  int iStack_5c;
  longlong lStack_58;
  int iStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  cStackX_10 = (char)param_2;
  cStackX_18 = (char)param_3;
  cStackX_20 = (char)param_4;
  lVar6 = func_0x00018000c510(0x180898be0);
  uVar7 = func_0x00018000c510(0x1808ec788);
  FUN_18067a9c0(uVar7,0,0);
  func_0x00018000c720(lVar6 + 8,uVar7);
  lVar8 = func_0x00018000c510(0x1808990c0);
  *(undefined8 *)(lVar8 + 0x10) = 0x180759410;
  FUN_1805305a0(lVar8,0x180776f70);
  (*pcRam00000001808234d0)(*(undefined8 *)(lVar6 + 8),0x180799410,lVar8);
  if (cStackX_10 != '\0') {
    lVar8 = func_0x00018000c510(0x180898cf8);
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    *(longlong *)(lVar8 + 0x10) = (longlong)iStackX_14;
    *(undefined1 *)(lVar8 + 0x18) = 0;
    (*pcRam00000001808234d0)(*(undefined8 *)(lVar6 + 8),0x18079e368,lVar8);
  }
  if (cStackX_18 != '\0') {
    lVar8 = func_0x00018000c510(0x180898cf8);
    iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
    *(longlong *)(lVar8 + 0x10) = (longlong)iStackX_1c;
    *(undefined1 *)(lVar8 + 0x18) = 0;
    (*pcRam00000001808234d0)(*(undefined8 *)(lVar6 + 8),0x180769aa0,lVar8);
  }
  if (cStackX_20 != '\0') {
    lVar8 = func_0x00018000c510(0x180898cf8);
    iStackX_24 = (int)((ulonglong)param_4 >> 0x20);
    *(longlong *)(lVar8 + 0x10) = (longlong)iStackX_24;
    *(undefined1 *)(lVar8 + 0x18) = 0;
    (*pcRam00000001808234d0)(*(undefined8 *)(lVar6 + 8),0x18079fda8,lVar8);
  }
  FUN_1805342c0(*(undefined8 *)(param_1 + 0x10),lVar6,1);
  lVar6 = FUN_180533fa0(*(undefined8 *)(param_1 + 0x10),1);
  if (*(int *)(lVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18039d020();
  }
  if (*(char *)(lVar6 + 0x10) != '\x01') {
    uVar7 = func_0x00018000c510(0x180858230);
    FUN_1802dcfc0(uVar7,0x18077c930);
                    /* WARNING: Subroutine does not return */
    FUN_18000cfe0(uVar7);
  }
  lVar6 = FUN_1805340c0();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_18052fbd0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00018000c510(0x180898be0);
    uVar7 = func_0x00018000c510(0x1808ec788);
    FUN_18067a9c0(uVar7,0,0);
    func_0x00018000c720(lVar6 + 8,uVar7);
  }
  iVar4 = (*pcRam0000000180823f90)(*(undefined8 *)(lVar6 + 8),0x1807a0060,&uStack_48);
  if (iVar4 != 0) {
    lVar8 = FUN_180530050();
    iVar4 = FUN_1802d3ee0(*(undefined8 *)(lVar8 + 0x10),0x1807997e0);
    if (iVar4 != 0) {
      uVar7 = func_0x00018000c510(0x180862388);
      FUN_18035ca40(uVar7,0);
      lVar8 = func_0x00018000c510(0x1808f86d8);
      func_0x00018000c720(lVar8 + 8,*(undefined8 *)(_DAT_180fe2440 + 8));
      bVar2 = false;
      bVar3 = false;
      lVar13 = 0;
      lVar6 = 0;
      do {
        lVar9 = FUN_180533fa0(*(undefined8 *)(param_1 + 0x10),1);
        if ((*(int *)(lVar9 + 8) == 0) || (*(char *)(lVar9 + 0x10) != '\x03')) break;
        uVar10 = FUN_180533fa0(*(undefined8 *)(param_1 + 0x10),4);
        uVar5 = FUN_1802e1c90(uVar10,0);
        uVar10 = FUN_180533fa0(*(undefined8 *)(param_1 + 0x10),uVar5);
        FUN_180591b40(lVar8,uVar10);
        lVar9 = lVar13;
        while ((lVar13 = lVar9, iVar4 = *(int *)(lVar8 + 0x10), 0 < iVar4 && (!bVar3))) {
          lVar9 = lVar13;
          if (bVar2) {
            if (lVar6 < 1) break;
            lVar13 = (longlong)iVar4;
            if (lVar6 < lVar13) {
              lVar13 = lVar6;
            }
            iStack_5c = (int)lVar13;
            uVar10 = FUN_180592200(lVar8);
            FUN_18035dac0(uVar7,uVar10,0,iStack_5c);
            lVar6 = lVar6 - iStack_5c;
            FUN_180592180(lVar8,0);
            if (lVar6 == 0) {
              bVar3 = true;
            }
          }
          else if (lVar13 < 1) {
            if (iVar4 < 0x200) break;
            FUN_180591db0(lVar8,0,0x200);
            uVar10 = FUN_180592200();
            FUN_180592180(lVar8,0,0x200);
            if (lRam00000001808065a8 != 0) {
              func_0x00018000303c();
            }
            lVar9 = _DAT_180fe0628;
            uVar11 = FUN_180344140(*(undefined8 *)(_DAT_180fe0628 + 8),uVar10,0,100);
            auStack_68[0] = 0;
            uVar11 = FUN_1802d90c0(uVar11,auStack_68,1,2);
            uVar10 = FUN_180344140(*(undefined8 *)(lVar9 + 8),uVar10,0x7c,0xc);
            lVar12 = FUN_18000c630(0x1809b9178,2);
            *(undefined2 *)(lVar12 + 0x12) = 0x20;
            uVar10 = FUN_1802d90c0(uVar10,lVar12 + 0x10,2,3,lVar9,uVar10);
            lVar9 = FUN_1802e3b90(uVar10,8);
            lStack_58 = ((longlong)(lVar9 + 0x1ff + (lVar9 + 0x1ff >> 0x3f & 0x1ffU)) >> 9) << 9;
            iVar4 = FUN_1802d3ee0(uVar11);
            lVar9 = lStack_58;
            if (iVar4 != 0) {
              bVar2 = true;
              lVar6 = lStack_58;
              lVar9 = lVar13;
            }
          }
          else {
            lVar9 = (longlong)iVar4;
            if (lVar13 < lVar9) {
              lVar9 = lVar13;
            }
            iStack_4c = (int)lVar9;
            FUN_180592180(lVar8);
            lVar9 = lVar13 - iStack_4c;
          }
        }
      } while (!bVar3);
      lVar6 = FUN_18035da00(uVar7);
      uVar14 = *(uint *)(lVar6 + 8);
      do {
        uVar1 = uVar14;
        uVar14 = uVar1 - 1;
        if ((int)uVar14 < 0) break;
        if (*(uint *)(lVar6 + 8) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_18039d020();
        }
      } while (*(char *)(lVar6 + 0x10 + (ulonglong)uVar14) == '\0');
      if ((int)uVar14 < 0) {
        uVar10 = *(undefined8 *)(_DAT_180fe2458 + 8);
      }
      else {
        uVar10 = FUN_18000c630(0x1809b90e0,(longlong)(int)uVar1);
        FUN_1802db4e0(lVar6,uVar10,uVar1);
      }
      (*pcRam000000018080fc30)(uVar7);
      return uVar10;
    }
  }
  uVar7 = func_0x00018000c510(0x180858230);
  uVar10 = FUN_18052f650(lVar6,1);
  uVar10 = FUN_1802d5660(0x18076e958,uVar10);
  FUN_1802dcfc0(uVar7,uVar10);
                    /* WARNING: Subroutine does not return */
  FUN_18000cfe0(uVar7);
}

