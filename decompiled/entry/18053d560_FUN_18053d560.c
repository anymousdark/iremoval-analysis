/* 18053d560  FUN_18053d560  body=391 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18053d560(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  longlong *local_28;
  undefined8 uStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  local_2c = 0;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = (longlong *)0x0;
  plStack_10 = (longlong *)0x0;
  iVar2 = (*_DAT_180823ff0)(*(undefined8 *)(param_2 + 8),0x180794318,&plStack_10);
  if (iVar2 == 0) {
    return 0;
  }
  if ((plStack_10 != (longlong *)0x0) && (*plStack_10 == 0x180898be0)) {
    local_38 = (*_DAT_18081d500)(plStack_10[1]);
    iVar2 = (*_DAT_180812510)();
    do {
      if (iVar2 == 0) {
        (*_DAT_18080fd10)(local_38);
        return 0;
      }
      (*_DAT_18081d550)(local_38,&uStack_20);
      if ((((local_18 != (longlong *)0x0) && (*local_18 == 0x180898be0)) &&
          (iVar2 = (*_DAT_180823ff0)(local_18[1],0x180795fa8,&local_28), iVar2 != 0)) &&
         (((local_28 != (longlong *)0x0 && (*local_28 == 0x1808990c0)) &&
          ((lVar1 = local_28[2], lVar1 != 0 && (*(int *)(lVar1 + 8) == 10)))))) {
        auVar3._0_4_ = -(uint)(*(int *)(lVar1 + 0xc) == _DAT_180cb2ce0 &&
                              *(int *)(lVar1 + 0x10) == _DAT_180cb2cf0);
        auVar3._4_4_ = -(uint)(*(int *)(lVar1 + 0x10) == iRam0000000180cb2ce4 &&
                              *(int *)(lVar1 + 0x14) == iRam0000000180cb2cf4);
        auVar3._8_4_ = -(uint)(*(int *)(lVar1 + 0x14) == iRam0000000180cb2ce8 &&
                              *(int *)(lVar1 + 0x18) == iRam0000000180cb2cf8);
        auVar3._12_4_ =
             -(uint)(*(int *)(lVar1 + 0x18) == iRam0000000180cb2cec &&
                    *(int *)(lVar1 + 0x1c) == iRam0000000180cb2cfc);
        if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
          local_2c = 1;
          FUN_18053d6e7(auStack_58);
          return local_2c;
        }
      }
      iVar2 = (*_DAT_180812510)(local_38);
    } while( true );
  }
  return 0;
}

