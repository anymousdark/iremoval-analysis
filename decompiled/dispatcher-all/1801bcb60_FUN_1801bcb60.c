/* 1801bcb60  FUN_1801bcb60  body=341 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bcb60(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_1 == 0) {
    func_0x0001802e15d0(0x1807c3730);
    return;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  uVar5 = (*_DAT_180811970)(uVar5);
  iVar3 = (*_DAT_180811ed0)(uVar5);
  while( true ) {
    if (iVar3 == 0) {
      lVar9 = func_0x000180370340(0x180859e68,uVar5);
      if (lVar9 != 0) {
        (*_DAT_18080ef70)(lVar9);
      }
      return;
    }
    plVar6 = (longlong *)(*_DAT_180813eb0)(uVar5);
    if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0x180858040)) {
      func_0x0001803706a0(0x180858040,plVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = false;
    if (param_2 == 0) break;
    uVar11 = 0;
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 < 1) break;
    do {
      iVar4 = func_0x0001802d3ee0(*(undefined8 *)(param_2 + 0x10 + uVar11 * 8),plVar6);
      if (iVar4 != 0) {
        bVar2 = true;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar3);
    if (!bVar2) break;
    iVar3 = (*_DAT_180811ed0)(uVar5);
  }
  uVar5 = func_0x00018000c510(0x180858908);
  plVar7 = (longlong *)func_0x0001802d3060(param_3);
  uVar8 = (**(code **)(*plVar7 + 0x90))(plVar7);
  uVar8 = FUN_1801bbfe0(0x18075e748,plVar6,uVar8);
  func_0x0001802e1350(uVar5,uVar8);
  func_0x00018000cfe0(uVar5);
  return;
}

