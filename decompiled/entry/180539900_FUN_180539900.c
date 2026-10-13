/* 180539900  FUN_180539900  body=69 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180539900(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*_DAT_180818ff0)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x18076f398);
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

