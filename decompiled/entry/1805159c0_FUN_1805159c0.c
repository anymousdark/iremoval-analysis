/* 1805159c0  FUN_1805159c0  body=36 */

void FUN_1805159c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2e);
  while (cVar1 == '\x1d') {
    param_1 = FUN_1805182a0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x2e);
  }
  return;
}

