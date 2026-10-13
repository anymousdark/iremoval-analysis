/* 1801b3e00  FUN_1801b3e00  body=41 */

void FUN_1801b3e00(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0x180864580)) {
    func_0x0001803706a0(0x180864580);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  func_0x000180371a10();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

