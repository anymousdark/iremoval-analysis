/* 1805398b0  FUN_1805398b0  body=69 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1805398b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*_DAT_180818fe0)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x1807962c8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_180530050();
    lVar1 = *(longlong *)(lVar1 + 0x10);
  }
  if (lVar1 == 0) {
    lVar1 = 0x180759410;
  }
  return lVar1;
}

