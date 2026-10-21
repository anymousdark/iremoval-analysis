/* query=1802d7b00 containing=1802d7b00 name=FUN_1802d7b00 body=724 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1802d7b00(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_4e8 [32];
  int iStack_4c8;
  uint uStack_4c0;
  undefined1 auStack_4b8 [512];
  undefined1 auStack_2b8 [456];
  undefined *puStack_f0;
  undefined1 auStack_e8 [48];
  longlong lStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  uint uStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  longlong lStack_80;
  int iStack_78;
  longlong lStack_70;
  uint uStack_68;
  undefined1 *puStack_60;
  uint uStack_58;
  longlong lStack_50;
  uint uStack_48;
  undefined1 *puStack_40;
  longlong lStack_38;
  
  puStack_b0 = (undefined1 *)0x0;
  uStack_a8 = 0;
  puStack_a0 = (undefined1 *)0x0;
  lVar1 = -0x60;
  do {
    *(undefined8 *)((longlong)&lStack_38 + lVar1) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar1) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar1) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar1) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar1) = 0;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar1) = 0;
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0);
  lStack_b8 = _DAT_180fe7000;
  lStack_38 = lVar1;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    puStack_f0 = (undefined *)0x1802d7daf;
    FUN_1806c8650(param_4,0x1807c5de8);
  }
  if ((param_5 & 0xfffffffc) != 0) {
                    /* WARNING: Subroutine does not return */
    puStack_f0 = &UNK_1802d7dbf;
    FUN_180302cf0(0x45,0x59);
  }
  if ((param_2 == 0) && ((param_3 == 0 || (*(int *)(param_3 + 8) == 0)))) {
    lStack_80 = 0;
    iStack_78 = 0;
    puStack_f0 = (undefined *)0x1802d7bb3;
    uVar2 = FUN_1802d7900(param_1,&lStack_80,param_4,param_5);
    puVar3 = auStack_e8;
    goto LAB_1802d7d7b;
  }
  puVar3 = auStack_e8;
  if ((1 < param_4) && (puVar3 = auStack_e8, *(int *)(param_1 + 8) != 0)) {
    if (param_2 == 0) {
      puStack_40 = auStack_2b8;
      lStack_38 = 0x80;
      lStack_50 = 0;
      uStack_48 = 0;
      puVar3 = auStack_4e8;
      puStack_60 = auStack_4b8;
      uStack_58 = 0x80;
      lStack_70 = 0;
      uStack_68 = 0;
      lStack_80 = param_1 + 0xc;
      if (param_3 == 0) {
        lStack_90 = 0;
        uStack_88 = 0;
      }
      else {
        lStack_90 = param_3 + 0x10;
        uStack_88 = *(undefined4 *)(param_3 + 8);
      }
      iStack_78 = *(int *)(param_1 + 8);
      FUN_1802d8be0(&lStack_80,&lStack_90,&lStack_50,&lStack_70);
      if (((uint)lStack_38 < uStack_48) || (uStack_58 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
        FUN_180302930();
      }
      if (uStack_48 != 0) {
        iStack_4c8 = param_4;
        if (param_5 == 0) {
          puStack_a0 = puStack_40;
          uStack_98 = uStack_48;
          puStack_b0 = puStack_60;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,uStack_68);
          uVar2 = FUN_1802d8020(param_1,&puStack_a0,&puStack_b0,0);
        }
        else {
          puStack_a0 = puStack_40;
          uStack_98 = uStack_48;
          puStack_b0 = puStack_60;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,uStack_68);
          uStack_4c0 = param_5;
          uVar2 = FUN_1802d81a0(param_1,&puStack_a0,&puStack_b0,0);
        }
        lVar1 = lStack_50;
        if (lStack_50 != 0) {
          lStack_50 = 0;
          if (lRam0000000180807c00 != 0) {
            func_0x0001800041fc();
          }
          FUN_1805a0e60(*(undefined8 *)(_DAT_180fe2518 + 8),lVar1,0);
        }
        lVar1 = lStack_70;
        puVar3 = auStack_4e8;
        if (lStack_70 != 0) {
          lStack_70 = 0;
          if (lRam0000000180807c00 != 0) {
            func_0x0001800041fc();
          }
          FUN_1805a0e60(*(undefined8 *)(_DAT_180fe2518 + 8),lVar1,0);
          puVar3 = auStack_4e8;
        }
        goto LAB_1802d7d7b;
      }
    }
    else {
      if (*(int *)(param_2 + 8) != 0) {
        puStack_f0 = (undefined *)0x1802d7bf6;
        uVar2 = FUN_1802d7e50(param_1,param_2,param_4,param_5);
        puVar3 = auStack_e8;
        goto LAB_1802d7d7b;
      }
      param_4 = 1;
      puVar3 = auStack_e8;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x1802d7be3;
  uVar2 = FUN_1802d7de0(param_1,param_5,param_4);
LAB_1802d7d7b:
  if (lStack_b8 != _DAT_180fe7000) {
    *(undefined8 *)(puVar3 + -8) = 0x1802d7d90;
    uVar2 = func_0x00018000cd70();
  }
  return uVar2;
}

