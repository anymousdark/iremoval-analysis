/* 1801b43b0  FUN_1801b43b0  body=68 */

undefined1 FUN_1801b43b0(longlong param_1)

{
  if (*(char *)(param_1 + 0xec) == '\0') {
    configure(param_1,0x20);
    FUN_1801b5ba0(param_1);
    if (*(char *)(param_1 + 0xec) != '\0') {
      FUN_1801b4e40(param_1);
    }
  }
  return *(undefined1 *)(param_1 + 0xec);
}

