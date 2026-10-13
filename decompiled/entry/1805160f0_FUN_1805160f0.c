/* 1805160f0  FUN_1805160f0  body=48 */

longlong FUN_1805160f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x2e) == '\x19') {
    param_1 = FUN_1805182a0(param_1,0);
  }
  if ((*(char *)(param_1 + 0x2e) != '\t') && (*(char *)(param_1 + 0x2e) != '\f')) {
    return 0;
  }
  return param_1;
}

