/* query=180539860 containing=180539860 name=FUN_180539860 body=69 */

longlong FUN_180539860(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*pcRam0000000180818fd0)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x180779a40);
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

