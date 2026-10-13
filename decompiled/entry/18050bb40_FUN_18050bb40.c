/* 18050bb40  FUN_18050bb40  body=92 */

bool FUN_18050bb40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 0x40) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 8);
    }
    lVar1 = FUN_18050b860(param_1,0,0xffffffff,param_2,0,*(undefined4 *)(param_2 + 8),uVar2);
    return lVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180521d90(7);
}

