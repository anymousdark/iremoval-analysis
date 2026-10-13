/* 18050bba0  FUN_18050bba0  body=89 */

void FUN_18050bba0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 0x40) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 8);
    }
    FUN_18050b860(param_1,2,0xffffffff,param_2,0,*(undefined4 *)(param_2 + 8),uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180521d90(7);
}

