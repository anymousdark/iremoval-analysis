/* 1805439b0  FUN_1805439b0  body=155 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1805439b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 local_8;
  
  local_8 = 0;
  iVar1 = (*_DAT_180824070)(*(undefined8 *)(param_2 + 8),0x1807a0060,&local_8);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_180530050();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 0xc)) {
    auVar3._0_4_ = -(uint)(*(int *)(lVar2 + 0xc) == _DAT_180cb2dc0 &&
                          *(int *)(lVar2 + 0x14) == _DAT_180cb2dd0);
    auVar3._4_4_ = -(uint)(*(int *)(lVar2 + 0x10) == iRam0000000180cb2dc4 &&
                          *(int *)(lVar2 + 0x18) == iRam0000000180cb2dd4);
    auVar3._8_4_ = -(uint)(*(int *)(lVar2 + 0x14) == iRam0000000180cb2dc8 &&
                          *(int *)(lVar2 + 0x1c) == iRam0000000180cb2dd8);
    auVar3._12_4_ =
         -(uint)(*(int *)(lVar2 + 0x18) == iRam0000000180cb2dcc &&
                *(int *)(lVar2 + 0x20) == iRam0000000180cb2ddc);
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar3._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar3._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar3._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar3._12_4_ >> 0x1f) << 0xf) == 0xffff) {
      return 1;
    }
  }
  return 0;
}

