/* 1801b8f70  FUN_1801b8f70  body=233 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801b8f70(undefined8 param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (_DAT_180805be8 != 0) {
    func_0x0001800011b3();
  }
  iVar2 = func_0x0001801aed10(param_1,param_3);
  if ((iVar2 != 0) && (*param_3 != 0x103)) {
    return 1;
  }
  if (*param_2 == '\0') {
    plVar3 = (longlong *)func_0x00018000c510(0x180838e98);
    FUN_1801b0430(plVar3,param_1);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0);
    *param_2 = cVar1;
    (*_DAT_18080ef40)(plVar3);
  }
  if (*param_2 != '\0') {
    iVar2 = func_0x0001801aed10(param_1,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = func_0x00018000c510(0x18085d748);
    func_0x00018032b7e0(uVar4);
    uVar4 = func_0x00018000cfe0(uVar4);
    return uVar4;
  }
  return 0;
}

