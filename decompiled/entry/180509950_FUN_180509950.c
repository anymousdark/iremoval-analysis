/* 180509950  FUN_180509950  body=85 */

longlong FUN_180509950(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = func_0x00018000c550();
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x10) = 4;
  *(undefined1 *)(lVar1 + 0x14) = 1;
  *(undefined1 *)(lVar1 + 0x15) = 1;
  *(undefined8 *)(lVar1 + 0x18) = 0xffffffffffffffff;
  uVar2 = func_0x000180376cc0((longlong)param_1);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  func_0x000180377270(lVar1,(longlong)param_1);
  return lVar1;
}

