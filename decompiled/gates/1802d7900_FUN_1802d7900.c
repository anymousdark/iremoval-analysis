/* query=1802d7900 containing=1802d7900 name=FUN_1802d7900 body=506 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802d7900(longlong param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_2c8 [32];
  int iStack_2a8;
  uint uStack_2a0;
  undefined1 auStack_298 [456];
  undefined *puStack_d0;
  undefined1 auStack_c8 [56];
  longlong lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 *puStack_78;
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  int iStack_50;
  longlong lStack_48;
  uint uStack_40;
  undefined1 *puStack_38;
  uint uStack_30;
  
  lVar2 = -0x60;
  do {
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar2) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar2) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar2) = 0;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar2) = 0;
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = 0;
    *(undefined8 *)(&stack0x00000000 + lVar2) = 0;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0);
  lStack_90 = _DAT_180fe7000;
  if (-1 < param_3) {
    if ((param_4 & 0xfffffffc) != 0) {
                    /* WARNING: Subroutine does not return */
      puStack_d0 = &UNK_1802d7aef;
      FUN_180302cf0(0x45,0x59);
    }
    puVar4 = auStack_c8;
    if ((1 < param_3) && (iVar1 = *(int *)(param_1 + 8), puVar4 = auStack_c8, iVar1 != 0)) {
      if ((param_2[2] == 0) && (iVar1 < param_3)) {
        param_4 = param_4 & 0xfffffffd;
      }
      puVar4 = auStack_2c8;
      puStack_38 = auStack_298;
      uStack_30 = 0x80;
      lStack_48 = 0;
      uStack_40 = 0;
      lStack_58 = param_1 + 0xc;
      uStack_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      iStack_50 = iVar1;
      FUN_1802d8760(&lStack_58,&uStack_68,&lStack_48);
      if (uStack_30 < uStack_40) {
                    /* WARNING: Subroutine does not return */
        FUN_180302930();
      }
      if (uStack_40 != 0) {
        iStack_2a8 = param_3;
        if (param_4 == 0) {
          puStack_78 = puStack_38;
          uStack_70 = uStack_40;
          uStack_88 = 0;
          uStack_80 = 0;
          uVar3 = FUN_1802d8020(param_1,&puStack_78,&uStack_88,1);
        }
        else {
          puStack_78 = puStack_38;
          uStack_70 = uStack_40;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_2a0 = param_4;
          uVar3 = FUN_1802d81a0(param_1,&puStack_78,&uStack_88,1);
        }
        lVar2 = lStack_48;
        if (lStack_48 != 0) {
          lStack_48 = 0;
          if (lRam0000000180807c00 != 0) {
            func_0x0001800041fc();
          }
          FUN_1805a0e60(*(undefined8 *)(_DAT_180fe2518 + 8),lVar2,0);
        }
        if (lStack_90 != _DAT_180fe7000) {
          uVar3 = func_0x00018000cd70();
        }
        return uVar3;
      }
      param_3 = 1;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1802d79ef;
    uVar3 = FUN_1802d7de0(param_1,param_4,param_3);
    if (lStack_90 != _DAT_180fe7000) {
      *(undefined8 *)(puVar4 + -8) = 0x1802d7a04;
      uVar3 = func_0x00018000cd70();
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  puStack_d0 = (undefined *)0x1802d7adf;
  FUN_1806c8650(param_3,0x1807c5de8);
}

