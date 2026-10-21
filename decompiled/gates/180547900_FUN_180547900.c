/* query=180547ba7 containing=180547900 name=FUN_180547900 body=805 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180547900(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar2 = *param_1;
  if ((int)param_1[3] == 0) {
    lStack_58 = param_1[6];
    uStack_50 = param_1[7];
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    goto LAB_180547a63;
  }
  while( true ) {
    lStack_58 = FUN_1805340f0(*(undefined8 *)(lVar2 + 0x10),param_1[5]);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if ((*(uint *)(lStack_58 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      func_0x00018000c790(param_1 + 6,lStack_58);
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_50;
      uVar3 = FUN_180701da0(param_1,param_1 + 4);
      FUN_18071d040(0x180803be0,&lStack_58,uVar3);
      return;
    }
LAB_180547a63:
    if ((*(uint *)(lStack_58 + 0x34) & 0x11000000) != 0x1000000) {
      FUN_180373b40(lStack_58,0);
    }
    if (*(longlong *)(lStack_58 + 0x38) == 0) break;
    lVar4 = FUN_18052fbd0();
    iVar1 = (*pcRam0000000180824080)(*(undefined8 *)(lVar4 + 8),0x18077be40,&uStack_38);
    if (iVar1 != 0) {
      lVar2 = FUN_180530050();
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      FUN_18052d5f0(lVar4,0x18077c2a8);
      lVar2 = FUN_180530050();
      lVar4 = func_0x00018000c510(0x180899640);
      uVar3 = FUN_1802d5700(uVar3,0x180766198,*(undefined8 *)(lVar2 + 0x10));
      *(undefined4 *)(lVar4 + 0x48) = 0x80131500;
      func_0x00018000c720(lVar4 + 8,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_18000cfe0(lVar4);
    }
    iVar1 = (*pcRam0000000180824080)(*(undefined8 *)(lVar4 + 8),0x1807943d8,&uStack_40);
    if (iVar1 != 0) {
      lVar6 = param_1[1];
      if (lVar6 != 0) {
        lVar5 = FUN_18052fd50();
        (*pcRam0000000180819b30)(lVar6,*(undefined4 *)(lVar5 + 0x10));
      }
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x30))();
      lVar6 = FUN_18000c630(0x1809b8c30,2);
      func_0x00018000c720(lVar6 + 0x10,param_1[2]);
      lVar5 = FUN_18052fd50();
      lVar7 = func_0x00018000c510(0x18085bed0);
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar5 + 0x10);
      func_0x00018000c720(lVar6 + 0x18,lVar7);
    }
    iVar1 = (*pcRam0000000180824080)(*(undefined8 *)(lVar4 + 8),0x1807a0060,&uStack_48);
    if (iVar1 != 0) {
      lVar4 = FUN_180530050();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 8)) {
        auVar8._0_4_ = -(uint)(*(int *)(lVar4 + 0xc) == _DAT_180cb2e40);
        auVar8._4_4_ = -(uint)(*(int *)(lVar4 + 0x10) == _UNK_180cb2e44);
        auVar8._8_4_ = -(uint)(*(int *)(lVar4 + 0x14) == _UNK_180cb2e48);
        auVar8._12_4_ = -(uint)(*(int *)(lVar4 + 0x18) == _UNK_180cb2e4c);
        if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar8._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar8._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar8._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar8._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          *(undefined4 *)(param_1 + 3) = 0xfffffffe;
          lVar2 = param_1[4];
          if (lVar2 == 0) {
            if (lRam0000000180806578 != 0) {
              func_0x000180002fbc();
            }
            func_0x00018000c790(param_1 + 4,*(undefined8 *)(_DAT_180fe05e0 + 0x20));
          }
          else {
            FUN_1805c5600(lVar2,0);
          }
          return;
        }
      }
    }
  }
  lVar2 = func_0x00018000c510(0x180899640);
  FUN_1802dcfb0(lVar2);
  *(undefined8 *)(lVar2 + 8) = 0x180784948;
                    /* WARNING: Subroutine does not return */
  FUN_18000cfe0(lVar2);
}

