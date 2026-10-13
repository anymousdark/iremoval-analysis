/* 18055c4e0  FUN_18055c4e0  body=87 */

longlong FUN_18055c4e0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_3 < *(uint *)(param_1 + 8)) {
    puVar1 = (undefined8 *)(param_1 + 0x10 + (ulonglong)param_3 * 0x10);
    uVar2 = *(undefined4 *)(puVar1 + 1);
    func_0x00018000c790(param_2,*puVar1);
    *(undefined4 *)(param_2 + 8) = uVar2;
    return param_2;
  }
  lVar3 = func_0x00018039d020();
  return lVar3;
}

