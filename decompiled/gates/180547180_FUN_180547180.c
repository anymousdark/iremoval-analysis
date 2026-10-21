/* query=180547495 containing=180547180 name=FUN_180547180 body=971 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180547180(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  longlong lStack_38;
  int iStack_2c;
  
  lStack_38 = 0;
  iStack_2c = (int)param_1[4];
  lVar1 = param_1[2];
  if (iStack_2c == 0) {
    lStack_38 = param_1[7];
    param_1[7] = 0;
    iStack_2c = -1;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    goto LAB_18054738b;
  }
  if (*param_1 == 0) {
    lVar3 = func_0x00018000c510(0x180898be0);
    uVar4 = func_0x00018000c510(0x1808ec788);
    FUN_18067a9c0(uVar4,0,0);
    func_0x00018000c720(lVar3 + 8,uVar4);
    func_0x00018000c790(param_1,lVar3);
  }
  if (param_1[1] != 0) {
    (*pcRam0000000180823570)(*(undefined8 *)(*param_1 + 8),0x18079a2d0);
  }
  lVar3 = func_0x00018000c510(0x180898be0);
  uVar4 = func_0x00018000c510(0x1808ec788);
  FUN_18067a9c0(uVar4,0,0);
  func_0x00018000c720(lVar3 + 8,uVar4);
  lVar5 = func_0x00018000c510(0x1808990c0);
  *(undefined8 *)(lVar5 + 0x10) = 0x180759410;
  FUN_1805305a0(lVar5,0x18076f240);
  (*pcRam0000000180823570)(*(undefined8 *)(lVar3 + 8),0x180774078,lVar5);
  (*pcRam0000000180823570)(*(undefined8 *)(lVar3 + 8),0x180773a48,*param_1);
  FUN_1805342c0(*(undefined8 *)(lVar1 + 0x10),lVar3,1);
  lVar3 = func_0x00018000c510(0x1808988a0);
  lVar5 = func_0x00018000c510(0x180953a00);
  func_0x00018000c720(lVar5 + 8,*(undefined8 *)(_DAT_180fe40e8 + 8));
  func_0x00018000c720(lVar3 + 8,lVar5);
  func_0x00018000c790(param_1 + 3,lVar3);
  do {
    do {
      lStack_38 = FUN_1805340f0(*(undefined8 *)(lVar1 + 0x10),param_1[6]);
      if ((*(uint *)(lStack_38 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        func_0x00018000c790(param_1 + 7,lStack_38);
        uVar4 = FUN_1807018e0(0x1807fe298,param_1,param_1 + 5);
        FUN_18071cd30(0x180803b98,&lStack_38,uVar4);
        return;
      }
LAB_18054738b:
      if ((*(uint *)(lStack_38 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_38,0);
      }
      if (*(longlong *)(lStack_38 + 0x38) == 0) goto LAB_1805474bd;
      lVar3 = FUN_18052fbd0();
      iVar2 = (*pcRam0000000180822770)(*(undefined8 *)(lVar3 + 8),0x1807773c0);
      if (iVar2 != 0) {
        (*pcRam0000000180819020)(*(undefined8 *)(lVar3 + 8),0x1807773c0);
        lVar5 = FUN_18052f750();
        uVar4 = (*pcRam000000018081bef0)(*(undefined8 *)(lVar5 + 8));
        while (iVar2 = (*pcRam0000000180812520)(uVar4), iVar2 != 0) {
          uVar6 = (*pcRam000000018081bf60)(uVar4);
          (*pcRam0000000180821970)(*(undefined8 *)(param_1[3] + 8),uVar6);
        }
        if (iStack_2c < 0) {
          (*pcRam000000018080fd80)(uVar4);
        }
      }
      (*pcRam0000000180819020)(*(undefined8 *)(lVar3 + 8),0x1807a0060);
      lVar3 = FUN_180530050();
      lVar3 = *(longlong *)(lVar3 + 0x10);
    } while ((lVar3 == 0) || (*(int *)(lVar3 + 8) != 8));
    auVar7._0_4_ = -(uint)(*(int *)(lVar3 + 0xc) == _DAT_180cb2e30);
    auVar7._4_4_ = -(uint)(*(int *)(lVar3 + 0x10) == _UNK_180cb2e34);
    auVar7._8_4_ = -(uint)(*(int *)(lVar3 + 0x14) == _UNK_180cb2e38);
    auVar7._12_4_ = -(uint)(*(int *)(lVar3 + 0x18) == _UNK_180cb2e3c);
  } while ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                    (ushort)((byte)(auVar7._12_4_ >> 7) & 1) << 0xc |
                    (ushort)((byte)(auVar7._12_4_ >> 0xf) & 1) << 0xd |
                    (ushort)((byte)(auVar7._12_4_ >> 0x17) & 1) << 0xe |
                   (ushort)(byte)(auVar7._12_4_ >> 0x1f) << 0xf) != 0xffff);
LAB_1805474bd:
  lVar1 = param_1[3];
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  param_1[3] = 0;
  lVar3 = param_1[5];
  if (lVar3 == 0) {
    if (lVar1 == 0) {
      if (lRam00000001808088a8 != 0) {
        func_0x0001800044dc();
      }
      lVar3 = *(longlong *)(_DAT_180fe4080 + 8);
    }
    else {
      lVar3 = func_0x00018000c510(0x180952558);
      *(undefined4 *)(lVar3 + 0x34) = 0x1000000;
      func_0x00018000c720(lVar3 + 0x38,lVar1);
    }
    func_0x00018000c790(param_1 + 5,lVar3);
  }
  else {
    FUN_180646380(0x1809526f0,lVar3,lVar1);
  }
  return;
}

