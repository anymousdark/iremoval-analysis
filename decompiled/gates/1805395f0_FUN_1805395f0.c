/* query=1805395f0 containing=1805395f0 name=FUN_1805395f0 body=69 */

longlong FUN_1805395f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*pcRam0000000180818f90)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x1807bc548);
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

