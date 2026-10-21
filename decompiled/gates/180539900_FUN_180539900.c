/* query=180539900 containing=180539900 name=FUN_180539900 body=69 */

longlong FUN_180539900(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*pcRam0000000180818ff0)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x18076f398);
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

