/* 180504810  FUN_180504810  body=90 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_180504810(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    func_0x0001802e15d0(0x1807caf80);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  uVar1 = *(uint *)(lVar2 + 0x10);
  if (uVar1 < *(uint *)(*(longlong *)(lVar2 + 8) + 8)) {
    *(uint *)(lVar2 + 0x10) = uVar1 + 1;
    func_0x000180370d30(*(longlong *)(lVar2 + 8),(longlong)(int)uVar1,param_2);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

