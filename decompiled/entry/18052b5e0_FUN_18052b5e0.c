/* 18052b5e0  FUN_18052b5e0  body=369 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052b5e0(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 * *(int *)(param_4 + 0x1c));
  lVar2 = func_0x00018000c630(0x1809b90e0,lVar5);
  lVar5 = func_0x00018000c630(0x1809b90e0,lVar5);
  iVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 0x108))
                    (*(longlong **)(param_4 + 8),lVar2,0,*(undefined4 *)(lVar2 + 8));
  if (iVar1 != *(int *)(lVar2 + 8)) {
    uVar3 = func_0x00018000c510(0x180898ed0);
    func_0x0001802dcfb0(uVar3);
    func_0x00018000cfe0(uVar3);
    return;
  }
  iVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 0x108))
                    (*(longlong **)(param_4 + 8),lVar5,0,*(undefined4 *)(lVar5 + 8));
  if (iVar1 == *(int *)(lVar5 + 8)) {
    iVar1 = 0;
    if (0 < param_3) {
      do {
        uVar3 = FUN_18052b280(param_4,lVar2,iVar1);
        plVar4 = (longlong *)FUN_18052b760(param_1,param_4,uVar3);
        if ((plVar4 == (longlong *)0x0) || (*plVar4 != 0x1808990c0)) {
          lVar2 = func_0x00018000c510(0x180898ed0);
          *(undefined4 *)(lVar2 + 0x48) = 0x80131500;
          *(undefined8 *)(lVar2 + 8) = 0x180789570;
          func_0x00018000cfe0(lVar2);
          return;
        }
        uVar3 = FUN_18052b280(param_4,lVar5,iVar1);
        uVar3 = FUN_18052b760(param_1,param_4,uVar3);
        (*_DAT_180823420)(param_2,plVar4[2],uVar3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3);
    }
    return;
  }
  uVar3 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(uVar3);
  func_0x00018000cfe0(uVar3);
  return;
}

