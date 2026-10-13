/* 18052f040  FUN_18052f040  body=883 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052f040(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar9;
  undefined8 uVar8;
  
  if (param_3 == 1) {
    lVar1 = func_0x00018000c510(0x180883d78);
    func_0x0001804544a0(lVar1);
    if (_DAT_1808065e8 != 0) {
      func_0x00018000313c();
    }
    lVar5 = _DAT_180fe0688;
    uVar2 = *(undefined8 *)(_DAT_180fe0688 + 8);
    func_0x000180454c50(lVar1,0x18077b130);
    func_0x00018000c720(lVar1 + 8,uVar2);
    func_0x000180454c50(lVar1,0x180783ab8);
    *(undefined4 *)(lVar1 + 0x54) = 1;
    func_0x000180454540(lVar1,0x180759ac8);
    func_0x0001804544f0(lVar1,0x180759d68);
    uVar2 = func_0x00018000c510(0x180862388);
    func_0x00018035ca40(uVar2,0);
    plVar3 = (longlong *)func_0x000180454660(lVar1,uVar2);
    lVar1 = *plVar3;
    (**(code **)(lVar1 + 0x30))();
    uVar9 = 0;
    (**(code **)(lVar1 + 0x48))(plVar3,0x1807cf4c8,0x1807600c0,0x1807c9f68,0);
    (**(code **)(lVar1 + 0x50))(plVar3,0,0x1807cf4c8,0);
    func_0x000180453ef0(plVar3,0x1807d4138,0x180762c08);
    (**(code **)(*param_1 + 0x68))(param_1);
    (**(code **)(lVar1 + 0x58))(plVar3);
    (**(code **)(lVar1 + 0xf0))(plVar3);
    (*_DAT_18080fb90)(plVar3);
    func_0x00018035d790(uVar2,0,0);
    uVar4 = func_0x00018000c510(0x180862920);
    uVar8 = CONCAT44(uVar9,0x400);
    func_0x000180361880(uVar4,uVar2,*(undefined8 *)(lVar5 + 8),1,uVar8,0);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    lVar1 = func_0x00018000c510(0x180860e80);
    func_0x000180347900(lVar1,0xfde9);
    *(undefined1 *)(lVar1 + 0x25) = 0;
    plVar3 = (longlong *)func_0x00018000c510(0x1808629e0);
    func_0x000180362b10(plVar3,param_2,lVar1,0x1000,CONCAT44(uVar9,1));
    (**(code **)(*plVar3 + 0x58))(plVar3,0x180759d68);
    while( true ) {
      lVar1 = func_0x000180362420(uVar4);
      if (lVar1 == 0) break;
      lVar5 = func_0x0001802d8eb0(lVar1);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 8)) {
        auVar6._0_4_ = -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2bd0);
        auVar6._4_4_ = -(uint)(*(int *)(lVar5 + 0x10) == iRam0000000180cb2bd4);
        auVar6._8_4_ = -(uint)(*(int *)(lVar5 + 0x14) == iRam0000000180cb2bd8);
        auVar6._12_4_ = -(uint)(*(int *)(lVar5 + 0x18) == iRam0000000180cb2bdc);
        if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar6._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          lVar1 = func_0x0001802d73c0(lVar1,0x180767338,0x180767360);
        }
      }
      lVar5 = func_0x0001802d8eb0();
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 9)) {
        auVar7._0_4_ = -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2be0 &&
                              *(int *)(lVar5 + 0xe) == _DAT_180cb2bf0);
        auVar7._4_4_ = -(uint)(*(int *)(lVar5 + 0x10) == iRam0000000180cb2be4 &&
                              *(int *)(lVar5 + 0x12) == iRam0000000180cb2bf4);
        auVar7._8_4_ = -(uint)(*(int *)(lVar5 + 0x14) == iRam0000000180cb2be8 &&
                              *(int *)(lVar5 + 0x16) == iRam0000000180cb2bf8);
        auVar7._12_4_ =
             -(uint)(*(int *)(lVar5 + 0x18) == iRam0000000180cb2bec &&
                    *(int *)(lVar5 + 0x1a) == iRam0000000180cb2bfc);
        if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
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
                    (ushort)(byte)(auVar7._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          lVar1 = func_0x0001802d73c0(lVar1,0x1807671f0,0x180767218);
        }
      }
      func_0x000180363820(plVar3,lVar1);
    }
    (*_DAT_18080fb90)(plVar3);
    (*_DAT_18080fb90)(uVar4);
    (*_DAT_18080fb90)(uVar2);
    return;
  }
  lVar1 = func_0x00018000c510(0x180898990);
  uVar2 = func_0x00018000c510(0x1808f94a8);
  func_0x000180594f70(uVar2,0,0);
  func_0x00018000c720(lVar1 + 8,uVar2);
  FUN_18052caa0(lVar1,param_2,param_1);
  return;
}

