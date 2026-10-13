/* 180503a60  FUN_180503a60  body=196 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_180503a60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_2c = 0;
  local_38 = 0;
  lVar3 = func_0x000180723dc0(0x1807fda80);
  func_0x0001800bf5f4(0);
  uVar1 = FUN_180504330(param_1,param_2,param_3,&local_38);
  uVar2 = func_0x0001800bf600();
  if (_DAT_181008818 != 0) {
    func_0x00018000dee0();
  }
  local_2c = 1;
  *(undefined8 *)(lVar3 + 8) = local_38;
  func_0x00018000c790(param_4,lVar3);
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  return uVar1;
}

