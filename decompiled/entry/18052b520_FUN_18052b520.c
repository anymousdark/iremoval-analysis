/* 18052b520  FUN_18052b520  body=182 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052b520(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = func_0x00018000c630(0x1809b90e0,(longlong)(param_3 * *(int *)(param_4 + 0x1c)));
  iVar4 = *(int *)(lVar2 + 8);
  iVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 0x108))
                    (*(longlong **)(param_4 + 8),lVar2,0,iVar4);
  if (iVar1 == iVar4) {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        uVar3 = FUN_18052b280(param_4,lVar2,iVar4);
        uVar3 = FUN_18052b760(param_1,param_4,uVar3);
        (*_DAT_180821940)(param_2,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    return;
  }
  uVar3 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(uVar3);
  func_0x00018000cfe0(uVar3);
  return;
}

