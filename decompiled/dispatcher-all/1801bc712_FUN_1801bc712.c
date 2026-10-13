/* 1801bc712  FUN_1801bc712  body=23 */

void FUN_1801bc712(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong unaff_RBP;
  
  lVar1 = *(longlong *)(unaff_RBP + 0x10);
  *(undefined1 *)(lVar1 + 0x3c) = 0;
  *(undefined1 *)(lVar1 + 0x3d) = 0;
  func_0x00018000d100();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

