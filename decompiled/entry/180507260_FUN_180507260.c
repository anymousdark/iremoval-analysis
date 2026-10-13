/* 180507260  FUN_180507260  body=148 */

longlong * FUN_180507260(undefined4 param_1,char param_2,undefined1 *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *local_30;
  
  local_30 = (longlong *)0x0;
  *param_3 = 1;
  *param_4 = 0;
  iVar2 = FUN_180503d50(param_1,3,&local_30);
  if (iVar2 == 0) {
    iVar2 = func_0x0001803767b0();
    *param_4 = iVar2;
    iVar2 = *param_4;
    iVar3 = FUN_180507160(0x3f0);
    plVar1 = local_30;
    if ((iVar2 == iVar3) && (*param_3 = 0, param_2 == '\0')) {
      (**(code **)(*local_30 + 0x38))(local_30,1);
      func_0x0001802d2050(plVar1);
      local_30 = (longlong *)FUN_180507300(param_1,param_4);
    }
  }
  return local_30;
}

