/* query=1805398b0 containing=1805398b0 name=FUN_1805398b0 body=69 */

longlong FUN_1805398b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*pcRam0000000180818fe0)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x1807962c8);
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

