/* 1801b4d80  FUN_1801b4d80  body=181 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b4d80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    iVar3 = (*_DAT_18080e220)(lVar2);
    if (iVar3 != 0) {
      lVar4 = func_0x00018000c630(0x1809b8c30,2);
      func_0x00018000c720(lVar4 + 0x10,param_1);
      func_0x00018000c720(lVar4 + 0x18,*(undefined8 *)(_DAT_180fe0470 + 8));
      (*_DAT_180813c90)(lVar2,lVar1,lVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801b4e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))
            (*(undefined8 *)(lVar1 + 8),param_1,*(undefined8 *)(_DAT_180fe0470 + 8));
  return;
}

