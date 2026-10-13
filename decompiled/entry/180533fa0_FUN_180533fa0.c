/* 180533fa0  FUN_180533fa0  body=171 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180533fa0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    return *(longlong *)(_DAT_180fe2458 + 8);
  }
  lVar1 = func_0x00018000c630(0x1809b90e0,(longlong)param_2);
  iVar3 = 0;
  do {
    iVar4 = param_2 - iVar3;
    if (0x8000 < iVar4) {
      iVar4 = 0x8000;
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x10);
    }
    iVar4 = (**(code **)(*plVar2 + 0x108))(plVar2,lVar1,iVar3,iVar4);
  } while ((iVar4 != 0) && (iVar3 = iVar3 + iVar4, iVar3 < param_2));
  if (*(int *)(lVar1 + 8) <= iVar3) {
    return lVar1;
  }
  func_0x0001806a6bf0(lVar1,iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

