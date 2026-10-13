/* 1805395a0  FUN_1805395a0  body=69 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1805395a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*_DAT_180818f80)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x18079d818);
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

