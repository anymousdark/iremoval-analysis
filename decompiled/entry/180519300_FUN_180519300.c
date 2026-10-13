/* 180519300  FUN_180519300  body=58 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180519300(uint param_1)

{
  if ((param_1 & 0x200) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_180806380 != 0) {
    func_0x000180002dbc();
  }
  return *(undefined8 *)(_DAT_180fe04e8 + 0x18);
}

