/* query=1805396c0 containing=1805396c0 name=FUN_1805396c0 body=115 */

undefined8 FUN_1805396c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lStack_8;
  
  lStack_8 = 0;
  iVar1 = (*pcRam0000000180823fd0)
                    (*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),0x1807853a8,&lStack_8);
  if ((iVar1 != 0) && (lStack_8 != 0)) {
    plVar2 = (longlong *)FUN_180530050(lStack_8);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x78))();
      if (lVar3 != 0) {
        lVar3 = FUN_180530050();
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
  }
  return 0x180759410;
}

