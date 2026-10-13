/* 1801b8a20  FUN_1801b8a20  body=152 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801b8a20(int param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_18;
  
  if (_DAT_180805be8 != 0) {
    func_0x0001800011b3();
  }
  iVar2 = FUN_1801b8730(param_2);
  if (iVar2 == 0) {
    local_18 = CONCAT31(local_18._1_3_,1);
    lVar3 = FUN_1801bb800(CONCAT44(param_1,local_18),0);
    if (*(int *)(lVar3 + 8) == 1) {
      return *(longlong *)(lVar3 + 0x10);
    }
  }
  else {
    lVar3 = FUN_1801ba140(param_2,1);
    uVar4 = 0;
    if (0 < *(int *)(lVar3 + 8)) {
      do {
        lVar1 = *(longlong *)(lVar3 + 0x10 + (ulonglong)uVar4 * 8);
        if (*(int *)(lVar1 + 100) == param_1) {
          return lVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(lVar3 + 8));
    }
  }
  return 0;
}

