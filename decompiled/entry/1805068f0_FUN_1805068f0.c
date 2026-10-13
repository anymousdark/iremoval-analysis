/* 1805068f0  FUN_1805068f0  body=300 */

undefined8 FUN_1805068f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  
  local_48 = 0;
  if (param_1 == 0) {
    uVar3 = func_0x00018000c510(0x180858908);
    func_0x0001802e1350(uVar3,0x1807b90d8);
    uVar3 = func_0x00018000cfe0(uVar3);
    return uVar3;
  }
  puVar5 = local_50;
  iVar1 = FUN_180503030(param_1,8,0,0,puVar5);
  if (iVar1 == 0) {
    lVar2 = func_0x000180004bd4();
    if (*(int *)(lVar2 + 0xf8) == 6) {
      uVar3 = func_0x00018000c510(0x180858908);
      func_0x0001802e1350(uVar3,0x1807872c0);
      uVar3 = func_0x00018000cfe0(uVar3);
      return uVar3;
    }
  }
  func_0x00018000c9a0(local_78);
  uVar3 = func_0x0001800bf6ae();
  func_0x00018000c9f0(local_78);
  iVar1 = FUN_180502d20(uVar3,param_1,uVar3,&local_48,(ulonglong)puVar5 & 0xffffffff00000000,1,2);
  if (iVar1 != 0) {
    return local_48;
  }
  uVar3 = func_0x00018000c510(0x18085c3c8);
  uVar4 = func_0x000180376920();
  func_0x00018030c710(uVar3,uVar4);
  uVar3 = func_0x00018000cfe0(uVar3);
  return uVar3;
}

