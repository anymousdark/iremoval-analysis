/* query=1803015a0 containing=1803015a0 name=FUN_1803015a0 body=528 */

ulonglong FUN_1803015a0(longlong param_1,int param_2,ushort *param_3,uint param_4)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  undefined1 auVar14 [11];
  undefined1 auVar15 [12];
  undefined1 auVar16 [13];
  undefined1 auVar17 [14];
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  char cVar26;
  char cVar27;
  undefined1 uVar28;
  char cVar29;
  undefined1 uVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined1 uVar34;
  char cVar35;
  undefined1 uVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  undefined1 uVar40;
  char cVar41;
  undefined1 uVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  undefined1 uVar46;
  char cVar47;
  undefined1 uVar48;
  byte bVar49;
  
  if (param_4 == 0) {
    return 0;
  }
  uVar20 = param_4 - 1;
  if (uVar20 == 0) {
    if (*param_3 - 1 < 0xfe) {
      uVar21 = FUN_18070c480(param_1,(longlong)(short)*param_3);
    }
    else {
      uVar21 = FUN_1806c4860(param_1);
    }
    return uVar21;
  }
  lVar24 = 0;
  uVar3 = *param_3;
  param_2 = param_2 - uVar20;
  if (param_2 < 8) {
    while ((0 < param_2 &&
           (iVar18 = FUN_1806c4860(param_1 + lVar24 * 2,(longlong)(short)uVar3,param_2), -1 < iVar18
           ))) {
      uVar21 = lVar24 + iVar18;
      if (param_2 - iVar18 < 1) {
        return 0xffffffff;
      }
      iVar19 = FUN_180301140(param_1 + 2 + uVar21 * 2,param_3 + 1,(ulonglong)uVar20 * 2);
      if (iVar19 != 0) {
        return uVar21 & 0xffffffff;
      }
      param_2 = (param_2 - iVar18) + -1;
      lVar24 = uVar21 + 1;
    }
  }
  else {
    uVar4 = param_3[(int)uVar20];
    lVar23 = (longlong)(int)uVar20;
    while ((uVar4 == uVar3 && (1 < lVar23))) {
      lVar23 = lVar23 + -1;
      uVar4 = param_3[lVar23];
    }
    lVar1 = (longlong)param_2 + -8;
    while( true ) {
      puVar2 = (ushort *)(param_1 + lVar24 * 2);
      auVar25._0_2_ = -(ushort)(*puVar2 == uVar3);
      auVar25._2_2_ = -(ushort)(puVar2[1] == uVar3);
      auVar25._4_2_ = -(ushort)(puVar2[2] == uVar3);
      auVar25._6_2_ = -(ushort)(puVar2[3] == uVar3);
      auVar25._8_2_ = -(ushort)(puVar2[4] == uVar3);
      auVar25._10_2_ = -(ushort)(puVar2[5] == uVar3);
      auVar25._12_2_ = -(ushort)(puVar2[6] == uVar3);
      auVar25._14_2_ = -(ushort)(puVar2[7] == uVar3);
      puVar2 = (ushort *)(param_1 + (lVar24 + lVar23) * 2);
      sVar8 = -(ushort)(*puVar2 == uVar4);
      uVar28 = (undefined1)-(ushort)(puVar2[1] == uVar4);
      uVar30 = (undefined1)((ushort)-(ushort)(puVar2[1] == uVar4) >> 8);
      sVar9 = -(ushort)(puVar2[2] == uVar4);
      uVar34 = (undefined1)-(ushort)(puVar2[3] == uVar4);
      uVar36 = (undefined1)((ushort)-(ushort)(puVar2[3] == uVar4) >> 8);
      sVar10 = -(ushort)(puVar2[4] == uVar4);
      uVar40 = (undefined1)-(ushort)(puVar2[5] == uVar4);
      uVar42 = (undefined1)((ushort)-(ushort)(puVar2[5] == uVar4) >> 8);
      sVar12 = -(ushort)(puVar2[6] == uVar4);
      uVar46 = (undefined1)-(ushort)(puVar2[7] == uVar4);
      uVar48 = (undefined1)((ushort)-(ushort)(puVar2[7] == uVar4) >> 8);
      auVar5[2] = uVar28;
      auVar5._0_2_ = sVar8;
      auVar5[3] = uVar30;
      auVar5[4] = (char)sVar9;
      auVar5[5] = (char)((ushort)sVar9 >> 8);
      auVar5[6] = uVar34;
      auVar5[7] = uVar36;
      auVar5[8] = (char)sVar10;
      auVar5[9] = (char)((ushort)sVar10 >> 8);
      auVar5[10] = uVar40;
      auVar5[0xb] = uVar42;
      auVar5[0xc] = (char)sVar12;
      auVar5[0xd] = (char)((ushort)sVar12 >> 8);
      auVar5[0xe] = uVar46;
      auVar5[0xf] = uVar48;
      auVar25 = auVar25 & auVar5;
      uVar20 = CONCAT13(uVar30,CONCAT12(uVar28,sVar8)) ^ CONCAT13(uVar30,CONCAT12(uVar28,sVar8));
      uVar22 = CONCAT13(uVar36,CONCAT12(uVar34,sVar9)) ^ CONCAT13(uVar36,CONCAT12(uVar34,sVar9));
      uVar11 = CONCAT13(uVar42,CONCAT12(uVar40,sVar10)) ^ CONCAT13(uVar42,CONCAT12(uVar40,sVar10));
      uVar13 = CONCAT13(uVar48,CONCAT12(uVar46,sVar12)) ^ CONCAT13(uVar48,CONCAT12(uVar46,sVar12));
      cVar26 = -((char)uVar20 == auVar25[0]);
      cVar27 = -((char)(uVar20 >> 8) == auVar25[1]);
      cVar29 = -((char)(uVar20 >> 0x10) == auVar25[2]);
      cVar31 = -((char)(uVar20 >> 0x18) == auVar25[3]);
      cVar32 = -((char)uVar22 == auVar25[4]);
      cVar33 = -((char)(uVar22 >> 8) == auVar25[5]);
      cVar35 = -((char)(uVar22 >> 0x10) == auVar25[6]);
      cVar37 = -((char)(uVar22 >> 0x18) == auVar25[7]);
      cVar38 = -((char)uVar11 == auVar25[8]);
      cVar39 = -((char)(uVar11 >> 8) == auVar25[9]);
      cVar41 = -((char)(uVar11 >> 0x10) == auVar25[10]);
      cVar43 = -((char)(uVar11 >> 0x18) == auVar25[0xb]);
      cVar44 = -((char)uVar13 == auVar25[0xc]);
      cVar45 = -((char)(uVar13 >> 8) == auVar25[0xd]);
      cVar47 = -((char)(uVar13 >> 0x10) == auVar25[0xe]);
      bVar49 = -((byte)(uVar13 >> 0x18) == auVar25[0xf]);
      auVar6[1] = cVar27;
      auVar6[0] = cVar26;
      auVar6[2] = cVar29;
      auVar6[3] = cVar31;
      auVar6[4] = cVar32;
      auVar6[5] = cVar33;
      auVar6[6] = cVar35;
      auVar6[7] = cVar37;
      auVar6[8] = cVar38;
      auVar6[9] = cVar39;
      auVar6[10] = cVar41;
      auVar6[0xb] = cVar43;
      auVar6[0xc] = cVar44;
      auVar6[0xd] = cVar45;
      auVar6[0xe] = cVar47;
      auVar6[0xf] = bVar49;
      auVar7[1] = cVar27;
      auVar7[0] = cVar26;
      auVar7[2] = cVar29;
      auVar7[3] = cVar31;
      auVar7[4] = cVar32;
      auVar7[5] = cVar33;
      auVar7[6] = cVar35;
      auVar7[7] = cVar37;
      auVar7[8] = cVar38;
      auVar7[9] = cVar39;
      auVar7[10] = cVar41;
      auVar7[0xb] = cVar43;
      auVar7[0xc] = cVar44;
      auVar7[0xd] = cVar45;
      auVar7[0xe] = cVar47;
      auVar7[0xf] = bVar49;
      auVar17[1] = cVar31;
      auVar17[0] = cVar29;
      auVar17[2] = cVar32;
      auVar17[3] = cVar33;
      auVar17[4] = cVar35;
      auVar17[5] = cVar37;
      auVar17[6] = cVar38;
      auVar17[7] = cVar39;
      auVar17[8] = cVar41;
      auVar17[9] = cVar43;
      auVar17[10] = cVar44;
      auVar17[0xb] = cVar45;
      auVar17[0xc] = cVar47;
      auVar17[0xd] = bVar49;
      auVar16[1] = cVar32;
      auVar16[0] = cVar31;
      auVar16[2] = cVar33;
      auVar16[3] = cVar35;
      auVar16[4] = cVar37;
      auVar16[5] = cVar38;
      auVar16[6] = cVar39;
      auVar16[7] = cVar41;
      auVar16[8] = cVar43;
      auVar16[9] = cVar44;
      auVar16[10] = cVar45;
      auVar16[0xb] = cVar47;
      auVar16[0xc] = bVar49;
      auVar15[1] = cVar33;
      auVar15[0] = cVar32;
      auVar15[2] = cVar35;
      auVar15[3] = cVar37;
      auVar15[4] = cVar38;
      auVar15[5] = cVar39;
      auVar15[6] = cVar41;
      auVar15[7] = cVar43;
      auVar15[8] = cVar44;
      auVar15[9] = cVar45;
      auVar15[10] = cVar47;
      auVar15[0xb] = bVar49;
      auVar14[1] = cVar35;
      auVar14[0] = cVar33;
      auVar14[2] = cVar37;
      auVar14[3] = cVar38;
      auVar14[4] = cVar39;
      auVar14[5] = cVar41;
      auVar14[6] = cVar43;
      auVar14[7] = cVar44;
      auVar14[8] = cVar45;
      auVar14[9] = cVar47;
      auVar14[10] = bVar49;
      if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB141(auVar17 >> 7,0) & 1) << 2 |
                   (ushort)(SUB131(auVar16 >> 7,0) & 1) << 3 |
                   (ushort)(SUB121(auVar15 >> 7,0) & 1) << 4 |
                   (ushort)(SUB111(auVar14 >> 7,0) & 1) << 5 |
                   (ushort)((byte)(CONCAT19(bVar49,CONCAT18(cVar47,CONCAT17(cVar45,CONCAT16(cVar44,
                                                  CONCAT15(cVar43,CONCAT14(cVar41,CONCAT13(cVar39,
                                                  CONCAT12(cVar38,CONCAT11(cVar37,cVar35))))))))) >>
                                  7) & 1) << 6 |
                   (ushort)((byte)(CONCAT18(bVar49,CONCAT17(cVar47,CONCAT16(cVar45,CONCAT15(cVar44,
                                                  CONCAT14(cVar43,CONCAT13(cVar41,CONCAT12(cVar39,
                                                  CONCAT11(cVar38,cVar37)))))))) >> 7) & 1) << 7 |
                   (ushort)((byte)(CONCAT17(bVar49,CONCAT16(cVar47,CONCAT15(cVar45,CONCAT14(cVar44,
                                                  CONCAT13(cVar43,CONCAT12(cVar41,CONCAT11(cVar39,
                                                  cVar38))))))) >> 7) & 1) << 8 |
                   (ushort)((byte)(CONCAT17(bVar49,CONCAT16(cVar47,CONCAT15(cVar45,CONCAT14(cVar44,
                                                  CONCAT13(cVar43,CONCAT12(cVar41,CONCAT11(cVar39,
                                                  cVar38))))))) >> 0xf) & 1) << 9 |
                   (ushort)((byte)(CONCAT15(bVar49,CONCAT14(cVar47,CONCAT13(cVar45,CONCAT12(cVar44,
                                                  CONCAT11(cVar43,cVar41))))) >> 7) & 1) << 10 |
                   (ushort)((byte)(CONCAT14(bVar49,CONCAT13(cVar47,CONCAT12(cVar45,CONCAT11(cVar44,
                                                  cVar43)))) >> 7) & 1) << 0xb |
                   (ushort)((byte)(CONCAT13(bVar49,CONCAT12(cVar47,CONCAT11(cVar45,cVar44))) >> 7) &
                           1) << 0xc |
                   (ushort)((byte)(CONCAT12(bVar49,CONCAT11(cVar47,cVar45)) >> 7) & 1) << 0xd |
                   (ushort)((byte)(CONCAT11(bVar49,cVar47) >> 7) & 1) << 0xe |
                  (ushort)(bVar49 >> 7) << 0xf) != 0xffff) {
        uVar20 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
        do {
          if (uVar20 == 0) {
            uVar22 = 0x20;
          }
          else {
            uVar22 = 0;
            if (uVar20 != 0) {
              for (; (uVar20 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
              }
            }
          }
          if ((param_4 == 2) ||
             (iVar18 = FUN_180301140(param_1 + (lVar24 + (ulonglong)(uVar22 >> 1)) * 2,param_3,
                                     (ulonglong)param_4 * 2), iVar18 != 0)) {
            return (ulonglong)((uVar22 >> 1) + (int)lVar24);
          }
          uVar20 = uVar20 - 1 & uVar20;
          uVar20 = uVar20 - 1 & uVar20;
        } while (uVar20 != 0);
      }
      lVar24 = lVar24 + 8;
      if (lVar24 == param_2) break;
      if (lVar1 < lVar24) {
        lVar24 = lVar1;
      }
    }
  }
  return 0xffffffff;
}

