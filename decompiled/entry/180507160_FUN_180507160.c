/* 180507160  FUN_180507160  body=29 */

uint FUN_180507160(uint param_1)

{
  if (((longlong)(int)param_1 & 0x80000000U) == 0) {
    param_1 = param_1 & 0xffff | 0x80070000;
  }
  return param_1;
}

