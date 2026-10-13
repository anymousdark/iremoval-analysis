/* 1801b9200  get_list  body=104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong get_list(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = func_0x00018000c510(0x1808e21c0);
    lVar2 = func_0x00018000c510(0x1808e28b0);
    func_0x00018000c720(lVar2 + 8,*(undefined8 *)(_DAT_180fe2178 + 8));
    func_0x00018000c720(lVar1 + 8,lVar2);
    func_0x00018000c720(param_1 + 0x30,lVar1);
  }
  return lVar1;
}

