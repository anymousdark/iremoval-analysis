/* 1801bc4a0  FUN_1801bc4a0  body=110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801bc4a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1801bc660(param_1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = func_0x00018000c510(0x180837070);
    uVar2 = func_0x00018000c510(0x180863c48);
    func_0x00018036c7e0(uVar2,0,_DAT_180caabe0);
    func_0x00018000c720(lVar1 + 8,uVar2);
    func_0x00018000c720(param_1 + 0x30,lVar1);
  }
  return lVar1;
}

