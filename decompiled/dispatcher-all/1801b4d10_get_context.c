/* 1801b4d10  get_context  body=97 */

longlong get_context(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = func_0x0001802d1810();
  lVar2 = func_0x00018000c550(0x180839620);
  func_0x0001802d2050(lVar2);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x180760738;
  *(undefined1 *)(lVar2 + 0xe6) = 0;
  *(undefined4 *)(lVar2 + 0xd0) = uVar1;
  *(undefined1 *)(lVar2 + 0xe4) = 1;
  *(undefined4 *)(lVar2 + 0xdc) = 0;
  *(undefined4 *)(lVar2 + 0xe0) = 0;
  return lVar2;
}

