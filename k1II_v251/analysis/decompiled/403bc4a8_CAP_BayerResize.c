/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_BayerResize(void)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ushort *puVar12;
  uint uVar13;
  int *piVar14;
  undefined2 *puVar15;
  undefined4 auStack_e0 [2];
  undefined4 auStack_d8 [3];
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined2 *puStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  int iStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  FUN_4067cd44(0x403bc86c);
  iVar5 = FUN_4067992c();
  uVar11 = uRam403bc894;
  piVar14 = *(int **)(iVar5 + 0x10);
  auStack_e0[0] = uRam403bc894;
  FUN_4067ca30(piVar14 != (int *)0x0,uRam403bc898,uRam403bbcb0,0x5f6);
  iVar5 = iRam403bc89c;
  uStack_6c = 0xe50;
  iStack_30 = 0x1572;
  iStack_38 = 0xe50;
  uStack_34 = 0x2d0;
  uStack_3c = 0x1e0;
  iStack_78 = iRam403bc89c;
  uVar6 = FUN_40674b78();
  iVar7 = FUN_40674bc0(uVar6,iVar5 + 0x40,0,uRam403bc8a0);
  uVar6 = FUN_40674b78();
  iVar8 = FUN_40674bc0(uVar6,iVar5 + 0x40,0,uRam403bc8a0);
  auStack_e0[0] = uVar11;
  FUN_4067ca30(iVar7 != 0,0x403bc8a4,uRam403bbcb0,0x609);
  auStack_e0[0] = uVar11;
  FUN_4067ca30(iVar8 != 0,0x403bc8b4,uRam403bbcb0,0x60a);
  puVar15 = (undefined2 *)(iVar7 + 0x3fU & 0xffffffc0);
  uVar13 = iVar8 + 0x3fU & 0xffffffc0;
  FUN_4067a4ec(puVar15,iVar5);
  FUN_4067a4ec(uVar13,iStack_78);
  FUN_4067e440(auStack_64,0x403bc8c4);
  iVar9 = (**(code **)(*piVar14 + 0x14))(piVar14,auStack_64,1,auStack_d8);
  if (iVar9 != 0) {
    (**(code **)(*piVar14 + 0x1c))(piVar14,auStack_d8[0],puVar15,iVar5);
    (**(code **)(*piVar14 + 0x18))(piVar14,auStack_d8[0]);
  }
  uVar2 = (short)uStack_6c * 0x1580;
  for (uVar10 = 0; uVar10 < uVar2; uVar10 = uVar10 + 1) {
    uVar1 = puVar15[uVar10];
    puVar15[uVar10] = uVar1 >> 8 | uVar1 << 8;
  }
  FUN_4067c0f4(0,0,0x403bc8d0,*puVar15);
  FUN_4067c0f4(0,0,0x403bc8e8,puVar15[1]);
  FUN_4067c0f4(0,0,0x403bc900,puVar15[2]);
  FUN_4067c0f4(0,0,0x403bc918,puVar15[3]);
  *(undefined1 *)(iRam403bc3c4 + 7) = 0;
  FUN_403150f0(&uStack_cc);
  uStack_cc = 0;
  uStack_cb = 3;
  uStack_ca = 2;
  uStack_bc = 0x1580;
  uStack_ba = (undefined2)uStack_6c;
  uStack_c4 = 0;
  uStack_b8 = (undefined2)iStack_30;
  uStack_b6 = (undefined2)iStack_38;
  uStack_c0 = 0;
  uStack_b4 = 3;
  uStack_b3 = 2;
  uStack_ac = 0;
  uStack_a4 = 0x1580;
  uStack_a2 = (undefined2)uStack_34;
  uStack_a8 = 0;
  uStack_a0 = (undefined2)uStack_3c;
  uStack_98 = 0;
  uStack_96 = 0;
  uStack_83 = 0;
  lVar3 = (ulonglong)(iStack_30 - 1) * 0x10000;
  uStack_82 = 0;
  uStack_9c = 0;
  uStack_81 = 0;
  uStack_9e = 0;
  uStack_9a = 0;
  puStack_c8 = puVar15;
  uStack_b0 = uVar13;
  uStack_68 = FUN_403ddb4c((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),uStack_34,0);
  lVar3 = (ulonglong)(iStack_38 - 1) * 0x10000;
  uStack_88 = FUN_403ddb4c((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),uStack_3c,0);
  uStack_95 = 1;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_8c = uStack_68;
  iVar5 = FUN_402fd7a4();
  iVar5 = *(int *)(iVar5 + 0x2c);
  if (((*(byte *)(iRam403bc3c4 + 0x4c) & 1) == 0) &&
     (iVar9 = FUN_406831b6(uRam403bc930), iVar9 != 0)) {
    uVar11 = FUN_406d5a74(iRam403bc934);
    FUN_4067e474(uVar11,uRam403bc938,uRam403bc3cc);
  }
  iVar9 = iRam403bc934;
  *(undefined4 *)(iRam403bc934 + 0xc) = uRam403bc93c;
  uVar11 = FUN_403b9844();
  *(undefined4 *)(iVar9 + 4) = uVar11;
  *(undefined1 **)(iVar9 + 8) = &uStack_cc;
  *(undefined4 *)(iVar9 + 0x10) = 0;
  FUN_40675bd4(iVar5 + 8,iVar9,2);
  iVar5 = iRam403bc3c4;
  bVar4 = false;
  iVar9 = 0;
  do {
    if (*(char *)(iVar5 + 7) != '\0') {
      bVar4 = true;
      break;
    }
    FUN_4067ab8c(100);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 300);
  for (uVar10 = 0; uVar10 < uVar2; uVar10 = uVar10 + 1) {
    puVar12 = (ushort *)(uVar13 + uVar10 * 2);
    uVar1 = *puVar12;
    *puVar12 = uVar1 >> 8 | uVar1 << 8;
  }
  if (*(char *)(iVar5 + 7) != '\0') {
    if (bVar4) {
      FUN_4067cd44(0x403bcd68);
      iVar9 = iStack_78;
      *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + 1;
      FUN_4067e440(auStack_44,0x403bcd90);
      iVar5 = (**(code **)(*piVar14 + 0x14))(piVar14,auStack_44,0,auStack_e0);
      if (iVar5 != 0) {
        (**(code **)(*piVar14 + 0x20))(piVar14,auStack_e0[0],uVar13,iVar9);
        (**(code **)(*piVar14 + 0x18))(piVar14,auStack_e0[0]);
      }
    }
    else {
      FUN_4067cd44(0x403bcda0);
    }
  }
  if (iVar7 != 0) {
    uVar11 = FUN_40674b78();
    FUN_40674be0(uVar11,iVar7,uRam403bc8a0);
  }
  if (iVar8 != 0) {
    uVar11 = FUN_40674b78();
    FUN_40674be0(uVar11,iVar8,uRam403bc8a0);
  }
  FUN_4067cd44(0x403bcdc8);
  return 0;
}

