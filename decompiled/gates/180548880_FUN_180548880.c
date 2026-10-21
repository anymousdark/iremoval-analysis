/* query=1805488d1 containing=180548880 name=FUN_180548880 body=2073 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180548880(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  ulonglong uStack_38;
  
  uVar10 = 0xffffffffffffff70;
  do {
    *(undefined8 *)((longlong)&uStack_38 + uVar10) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd0 + uVar10) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd8 + uVar10) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe0 + uVar10) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe8 + uVar10) = 0;
    *(undefined8 *)(&stack0xfffffffffffffff0 + uVar10) = 0;
    uVar10 = uVar10 + 0x30;
  } while (uVar10 != 0);
  lVar2 = param_1[1];
  uStack_38 = uVar10;
  switch((int)param_1[6]) {
  case 0:
    lStack_40 = param_1[10];
    uStack_38 = param_1[0xb];
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    while( true ) {
      if ((*(uint *)(lStack_40 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_40,uStack_38 & 0xffffffff);
      }
      FUN_180591b40(param_1[2],*(undefined8 *)(param_1[3] + 0x10));
      lStack_50 = FUN_180536f80(lVar2,param_1[9]);
      uStack_48 = 0;
      if ((*(uint *)(lStack_50 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 6) = 1;
        func_0x00018000c790(param_1 + 0xc,lStack_50);
        *(undefined4 *)(param_1 + 0xd) = uStack_48;
        uVar13 = FUN_180702c00(param_1,param_1 + 8);
        FUN_18071be60(0x180804338,&lStack_50,uVar13);
        return;
      }
LAB_180548df7:
      if ((*(uint *)(lStack_50 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40();
      }
      lVar11 = *(longlong *)(lStack_50 + 0x40);
      if (lVar11 != 0) break;
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        lVar11 = FUN_18000c630(0x1809b8c30,1);
        lVar12 = func_0x00018000c510(0x18085a0f8);
        *(undefined4 *)(lVar12 + 8) = *(undefined4 *)((longlong)param_1 + 0x3c);
        func_0x00018000c720(lVar11 + 0x10);
      }
      param_1[3] = 0;
      *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
      if ((int)param_1[7] <= *(int *)((longlong)param_1 + 0x3c)) goto LAB_180548e72;
LAB_1805489a5:
      if ((param_1[9] != 0) && (*(int *)(param_1[9] + 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_180331c90();
      }
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        lVar11 = FUN_18000c630(0x1809b8c30,1);
        lVar12 = func_0x00018000c510(0x18085a0f8);
        *(undefined4 *)(lVar12 + 8) = *(undefined4 *)((longlong)param_1 + 0x3c);
        func_0x00018000c720(lVar11 + 0x10,lVar12);
      }
      lVar11 = func_0x00018000c510(0x18089a520);
      func_0x00018000c720(lVar11 + 0x10,*(undefined8 *)(_DAT_180fe2458 + 8));
      lVar12 = func_0x00018000c510(0x18089a1e0);
      if (lRam00000001808065e8 != 0) {
        func_0x00018000313c();
      }
      uVar13 = FUN_1803ac5f0(*(undefined8 *)(_DAT_180fe0688 + 8),0x18076f7b8);
      func_0x00018000c720(lVar12 + 8,uVar13);
      func_0x00018000c720(lVar11 + 8,lVar12);
      *(longlong *)(lVar11 + 0x18) = param_1[4];
      lVar12 = FUN_1806a6b30(*param_1,*(int *)((longlong)param_1 + 0x3c) *
                                      *(int *)((longlong)param_1 + 0x34));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1801d4ee0(0x10);
      }
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar13 = *(undefined8 *)(_DAT_180fe2410 + 8);
      }
      else {
        uVar13 = FUN_1806a6630(lVar12);
      }
      uVar13 = FUN_1806a6c30(uVar13);
      func_0x00018000c720(lVar11 + 0x10,uVar13);
      func_0x00018000c790(param_1 + 3,lVar11);
      auStack_d8[0] = 1;
      uStack_d0 = 0x30;
      lStack_40 = FUN_180536c60(lVar2,0x10,param_1[3],param_1[9],auStack_d8);
      uStack_38 = uStack_38 & 0xffffffff00000000;
      if ((*(uint *)(lStack_40 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 6) = 0;
        func_0x00018000c790(param_1 + 10,lStack_40);
        *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_38;
        uVar13 = FUN_180702c00(param_1,param_1 + 8);
        FUN_1806df200(&lStack_40,uVar13);
        return;
      }
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_180373230(&uStack_a0,0x17,1);
    uVar14 = uRam000000018077e9f2;
    uVar13 = uRam000000018077e9dc;
    uVar7 = uRam000000018077e9d8;
    uVar6 = uRam000000018077e9d4;
    uVar5 = uRam000000018077e9d0;
    uStack_78 = uStack_a0;
    uStack_70 = uStack_98;
    uStack_68 = (uint)uStack_90;
    uStack_64 = uStack_90._4_4_;
    uStack_60 = (undefined4)uStack_88;
    uStack_5c = uStack_88._4_4_;
    uStack_58 = uStack_80;
    uVar3 = uStack_58;
    uStack_58._0_4_ = (uint)uStack_80;
    if ((uint)uStack_90 <= (uint)uStack_58) {
      puVar1 = (undefined4 *)(uStack_88 + (uStack_90 & 0xffffffff) * 2);
      uStack_58 = uVar3;
      if ((uint)uStack_58 - (uint)uStack_90 < 0x17) {
        FUN_1803735a0(&uStack_78,0x18077e9c0);
      }
      else {
        uVar3 = CONCAT26(uRam000000018077e9ea,uRam000000018077e9e4);
        uVar4 = CONCAT62(uRam000000018077e9ec,uRam000000018077e9ea);
        *puVar1 = uRam000000018077e9cc;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(undefined8 *)(puVar1 + 4) = uVar13;
        *(undefined8 *)(puVar1 + 6) = uVar3;
        *(undefined8 *)((longlong)puVar1 + 0x1e) = uVar4;
        *(undefined8 *)((longlong)puVar1 + 0x26) = uVar14;
        uStack_68 = (uint)uStack_90 + 0x17;
      }
      FUN_1806fe720(&uStack_78,lVar11);
      uVar13 = func_0x00018000c510(0x18089a0c0);
      uVar14 = FUN_1803733f0(&uStack_78);
      FUN_180536760(uVar13,lVar11,uVar14);
                    /* WARNING: Subroutine does not return */
      FUN_18000cfe0(uVar13);
    }
    goto LAB_180548ba5;
  case 1:
    lStack_50 = param_1[0xc];
    uStack_48 = (undefined4)param_1[0xd];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x6c);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    goto LAB_180548df7;
  case 2:
    lStack_40 = param_1[10];
    uStack_38 = param_1[0xb];
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    break;
  case 3:
    lStack_50 = param_1[0xc];
    uStack_48 = (undefined4)param_1[0xd];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x6c);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    goto LAB_18054906c;
  default:
    param_1[5] = (ulonglong)*(uint *)(*param_1 + 8);
    *(int *)(param_1 + 7) = *(int *)(*param_1 + 8) / *(int *)((longlong)param_1 + 0x34);
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      lVar11 = FUN_18000c630(0x1809b8c30,2);
      lVar12 = func_0x00018000c510(0x18085bed0);
      *(longlong *)(lVar12 + 8) = param_1[5];
      func_0x00018000c720(lVar11 + 0x10,lVar12);
      lVar12 = func_0x00018000c510(0x18085a0f8);
      *(int *)(lVar12 + 8) = (int)param_1[7];
      func_0x00018000c720(lVar11 + 0x18,lVar12);
    }
    lVar11 = func_0x00018000c510(0x1808f86d8);
    func_0x00018000c720(lVar11 + 8,*(undefined8 *)(_DAT_180fe2440 + 8));
    func_0x00018000c790();
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) < (int)param_1[7]) goto LAB_1805489a5;
LAB_180548e72:
    if ((ulonglong)param_1[5] % (ulonglong)(longlong)*(int *)((longlong)param_1 + 0x34) == 0)
    goto LAB_1805490b0;
    lVar11 = func_0x00018000c510(0x18089a520);
    func_0x00018000c720(lVar11 + 0x10,*(undefined8 *)(_DAT_180fe2458 + 8));
    uVar13 = func_0x00018000c510(0x18089a1e0);
    FUN_180536a80(uVar13);
    func_0x00018000c720(lVar11 + 8,uVar13);
    *(longlong *)(lVar11 + 0x18) = param_1[4];
    uVar13 = FUN_1806a6b30(*param_1,(int)param_1[7] * *(int *)((longlong)param_1 + 0x34));
    uVar13 = FUN_1806a6c30(uVar13);
    func_0x00018000c720(lVar11 + 0x10,uVar13);
    func_0x00018000c790(param_1 + 3,lVar11);
    auStack_d8[0] = 1;
    uStack_d0 = 0x30;
    lStack_40 = FUN_180536c60(lVar2,0x10,param_1[3],param_1[9],auStack_d8);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    if ((*(uint *)(lStack_40 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 6) = 2;
      func_0x00018000c790(param_1 + 10,lStack_40);
      *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_38;
      uVar13 = FUN_180702c00(param_1,param_1 + 8);
      FUN_1806df200(&lStack_40,uVar13);
      return;
    }
  }
  if ((*(uint *)(lStack_40 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_40,uStack_38 & 0xffffffff);
  }
  FUN_180591b40(param_1[2],*(undefined8 *)(param_1[3] + 0x10));
  lStack_50 = FUN_180536f80(lVar2,param_1[9]);
  uStack_48 = 0;
  if ((*(uint *)(lStack_50 + 0x34) & 0x1600000) == 0) {
    *(undefined4 *)(param_1 + 6) = 3;
    func_0x00018000c790(param_1 + 0xc,lStack_50);
    *(undefined4 *)(param_1 + 0xd) = uStack_48;
    uVar13 = FUN_180702c00(param_1,param_1 + 8);
    FUN_18071be60(0x180804338,&lStack_50,uVar13);
    return;
  }
LAB_18054906c:
  if ((*(uint *)(lStack_50 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_50,0);
  }
  lVar2 = *(longlong *)(lStack_50 + 0x40);
  if (lVar2 == 0) {
    param_1[3] = 0;
LAB_1805490b0:
    *(undefined4 *)(param_1 + 6) = 0xfffffffe;
    param_1[2] = 0;
    param_1 = param_1 + 8;
    if (*param_1 == 0) {
      if (lRam0000000180806578 != 0) {
        func_0x000180002fbc();
      }
      func_0x00018000c790(param_1,*(undefined8 *)(_DAT_180fe05e0 + 0x20));
    }
    else {
      FUN_1805c5600(*param_1,0);
    }
    return;
  }
  FUN_180373230(&uStack_c8,0x1c,1);
  uVar9 = uRam000000018077ea44;
  uVar8 = uRam000000018077ea3c;
  uVar4 = uRam000000018077ea34;
  uVar14 = uRam000000018077ea2c;
  uVar13 = uRam000000018077ea24;
  uVar7 = uRam000000018077ea20;
  uVar6 = uRam000000018077ea1c;
  uVar5 = uRam000000018077ea18;
  uStack_78 = uStack_c8;
  uStack_70 = uStack_c0;
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uVar3 = uStack_58;
  uStack_58._0_4_ = (uint)uStack_a8;
  if (uStack_b8 <= (uint)uStack_58) {
    puVar1 = (undefined4 *)(CONCAT44(uStack_ac,uStack_b0) + (ulonglong)uStack_b8 * 2);
    uStack_58 = uVar3;
    if ((uint)uStack_58 - uStack_b8 < 0x1c) {
      FUN_1803735a0(&uStack_78,0x18077ea08);
    }
    else {
      *puVar1 = uRam000000018077ea14;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined8 *)(puVar1 + 4) = uVar13;
      *(undefined8 *)(puVar1 + 6) = uVar14;
      *(undefined8 *)(puVar1 + 8) = uVar4;
      *(undefined8 *)(puVar1 + 10) = uVar8;
      *(undefined8 *)(puVar1 + 10) = uVar8;
      *(undefined8 *)(puVar1 + 0xc) = uVar9;
      uStack_68 = uStack_b8 + 0x1c;
    }
    FUN_1806fe720(&uStack_78,lVar2);
    uVar13 = func_0x00018000c510(0x18089a0c0);
    uVar14 = FUN_1803733f0(&uStack_78);
    FUN_180536760(uVar13,lVar2,uVar14);
                    /* WARNING: Subroutine does not return */
    FUN_18000cfe0(uVar13);
  }
LAB_180548ba5:
  uStack_58 = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_180302930();
}

