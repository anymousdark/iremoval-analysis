/* 180543be0  FUN_180543be0  body=82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180543be0(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_180543b70();
  plVar2 = (longlong *)
           func_0x0001803556c0(uVar1,0x1807d0018,*(undefined8 *)(_DAT_180fe0eb0 + 0x10),1);
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0x1809b90e0)) {
    plVar2 = (longlong *)func_0x0001803704c0(0x1809b90e0,plVar2);
  }
  return plVar2;
}

