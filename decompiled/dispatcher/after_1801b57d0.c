/* 1801b57d0  after  body=202 */

void after(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int aiStack_28 [2];
  
  plVar6 = (longlong *)FUN_1801b6d70(param_1,0x1001,0);
  iVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
  if (iVar5 == 0) {
    iVar5 = func_0x0001801af1a0(plVar6,0xffffffff);
    if (iVar5 == 0) {
      lVar2 = func_0x00018000c510(0x18085d748);
      lVar3 = func_0x000180004bd4();
      iVar5 = *(int *)(lVar3 + 0xf8);
      uVar4 = func_0x0001803a0220(iVar5,0);
      *(undefined4 *)(lVar2 + 0x48) = 0x80131500;
      func_0x00018000c720(lVar2 + 8,uVar4);
      *(undefined4 *)(lVar2 + 0x48) = 0x80131501;
      *(undefined4 *)(lVar2 + 0x48) = 0x80004005;
      *(int *)(lVar2 + 0x50) = iVar5;
      if (iVar5 == 5) {
        iVar5 = func_0x0001801aed10(plVar6,aiStack_28);
        if ((iVar5 != 0) && (aiStack_28[0] != 0x103)) goto LAB_1801b5882;
      }
      func_0x00018000cfe0(lVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_1801b5882:
  (*pcRam000000018080eec0)(plVar6);
  return;
}

