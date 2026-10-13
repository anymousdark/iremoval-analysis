/* 18050a6c0  FUN_18050a6c0  body=138 */

int FUN_18050a6c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50) + 8)) {
    do {
      plVar2 = (longlong *)FUN_18050a410(param_1,iVar3);
      if (plVar2 == (longlong *)0x0) {
        if (param_2 == 0) {
          return iVar3;
        }
      }
      else if ((param_2 != 0) && (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), iVar1 != 0)
              ) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50) + 8));
  }
  return -1;
}

