/* 18050a4a0  FUN_18050a4a0  body=304 */

undefined8 FUN_18050a4a0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = func_0x00018000c630(0x1809bfb10,
                                (longlong)
                                (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50) + 8) + -1
                                ));
    func_0x00018000c720(param_1 + 0x18,uVar2);
    uVar6 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 8)) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
        uVar5 = uVar6 + 1;
        uVar3 = FUN_18051d670(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x28),
                              *(undefined4 *)(lVar1 + 0x44),uVar5);
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        lVar1 = *(longlong *)(param_1 + 8);
        uVar4 = func_0x00018000c510(0x1808972e0);
        if (*(uint *)(*(longlong *)(lVar1 + 0x48) + 8) <= uVar5) goto LAB_18050a5cb;
        if (*(uint *)(*(longlong *)(lVar1 + 0x50) + 8) <= uVar5) goto LAB_18050a5cb;
        FUN_18050a200(uVar4,*(undefined8 *)(lVar1 + 8),
                      *(undefined8 *)(*(longlong *)(lVar1 + 0x48) + 0x10 + (ulonglong)uVar5 * 8),
                      *(undefined4 *)(*(longlong *)(lVar1 + 0x50) + 0x10 + (ulonglong)uVar5 * 4),
                      uVar3);
        func_0x000180370d30(uVar2,(longlong)(int)uVar6,uVar4);
        uVar6 = uVar5;
      } while ((int)uVar5 < *(int *)(*(longlong *)(param_1 + 0x18) + 8));
    }
  }
  if (param_2 - 1U < *(uint *)(*(longlong *)(param_1 + 0x18) + 8)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)(param_2 - 1) * 8);
  }
LAB_18050a5cb:
  uVar2 = func_0x00018039d020();
  return uVar2;
}

