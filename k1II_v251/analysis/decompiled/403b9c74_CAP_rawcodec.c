/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_rawcodec(void)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  bool bVar19;
  char acStack_214 [452];
  undefined2 auStack_50 [10];
  undefined2 auStack_3c [12];
  
  FUN_4067ce58(5,0,0x403b9fec);
  pcVar2 = pcRam403b9ae0;
  *pcRam403b9ae0 = '\0';
  iVar4 = FUN_402fd7a4();
  uVar8 = uRam403ba004;
  iVar4 = *(int *)(iVar4 + 0x14);
  FUN_4067ca30(iVar4 != 0,0x403ba028,0x403ba008,0x160,uRam403ba004);
  if (((pcVar2[0x1c] & 1U) == 0) &&
     (iVar5 = FUN_406831b6(uRam403ba040), puVar3 = puRam403ba044, iVar5 != 0)) {
    iVar5 = (int)puRam403ba044 + 0x22;
    *puRam403ba044 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    *(undefined1 *)((int)puVar3 + 0x15) = 0;
    *(undefined1 *)((int)puVar3 + 0x16) = 0;
    *(undefined1 *)((int)puVar3 + 0x17) = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)((int)puVar3 + 0x1d) = 0;
    *(undefined2 *)((int)puVar3 + 0x1e) = 0;
    *(undefined2 *)(puVar3 + 8) = 0;
    FUN_4067a4ec(iVar5,0x1e);
    FUN_4067a4ec(puVar3 + 0x10,0x1e);
    FUN_4067e474(puVar3,uRam403ba048,uRam403b9aec);
  }
  uVar11 = (uint)(byte)pcVar2[0x18];
  if ((pcVar2[0x18] & 1U) == 0) {
    iVar5 = FUN_406831b6(uRam403ba04c);
    uVar11 = 0;
    if (iVar5 != 0) {
      uVar6 = FUN_406d5a74(iRam403ba050);
      FUN_4067e474(uVar6,uRam403ba054,uRam403b9aec);
      uVar11 = uRam403ba04c;
    }
  }
  uVar6 = FUN_40674b78(uVar11);
  iVar5 = FUN_40674bc0(uVar6,0x2c00,0,uRam403ba058);
  uVar6 = FUN_40674b78();
  iVar7 = FUN_40674bc0(uVar6,0x2c00,0,uRam403ba058);
  FUN_4067ca30(iVar5 != 0,0x403ba05c,0x403ba008,0x167,uVar8);
  FUN_4067ca30(iVar7 != 0,0x403ba068,0x403ba008,0x168,uVar8);
  uVar8 = FUN_40674b78();
  pcVar9 = (char *)FUN_40674c88(uVar8,iVar5 + 0x40);
  uVar8 = FUN_40674b78();
  iVar10 = FUN_40674c88(uVar8,iVar7 + 0x40);
  FUN_4067ce58(5,0,0x403ba074,pcVar9);
  FUN_4067ce58(5,0,0x403ba088,iVar10);
  FUN_4067ce58(5,0,0x403ba09c);
  iVar18 = 0;
  do {
    FUN_4067ce58(5,0,0x403ba0a4,pcVar9[iVar18]);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x30);
  FUN_4067ce58(5,0,0x403b9fe8);
  uVar11 = 0;
  do {
    pcVar9[uVar11] = -1;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0xc00);
  uVar11 = 0;
  do {
    *(undefined1 *)(iVar10 + uVar11) = 0xff;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0xc00);
  FUN_406833b0(acStack_214,uRam403ba0ac,0x1c4);
  iVar18 = 0;
  pcVar13 = pcVar9;
  do {
    if (acStack_214[iVar18] == '\0') {
      bVar1 = acStack_214[iVar18 + 1];
      iVar18 = iVar18 + 2;
      pcVar14 = pcVar13;
      for (iVar15 = 0; iVar15 < (int)(uint)bVar1; iVar15 = iVar15 + 1) {
        *pcVar14 = '\0';
        pcVar14 = pcVar14 + 1;
      }
    }
    else {
      pcVar14 = pcVar13 + 1;
      *pcVar13 = acStack_214[iVar18];
      iVar18 = iVar18 + 1;
    }
    pcVar13 = pcVar14;
  } while (iVar18 < 0x1c4);
  FUN_4067ce58(5,0,0x403ba09c);
  iVar18 = 0;
  do {
    FUN_4067ce58(5,0,0x403ba0a4,pcVar9[iVar18]);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x30);
  FUN_4067ce58(5,0,0x403b9fe8);
  FUN_4067ce58(5,0,0x403ba0b0);
  iVar18 = 0;
  do {
    FUN_4067ce58(5,0,0x403ba0a4,*(undefined1 *)(iVar10 + iVar18));
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x30);
  FUN_4067ce58(5,0,0x403b9fe8);
  FUN_406833b0(auStack_50,uRam403ba0b8,0x14);
  FUN_406833b0(auStack_3c,uRam403ba0bc,0x14);
  puVar3 = puRam403ba044;
  *puRam403ba044 = 0xc00;
  puVar3[1] = pcVar9;
  puVar3[2] = iVar10;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined1 *)((int)puVar3 + 0x1d) = 0;
  *(undefined1 *)((int)puVar3 + 0x15) = 0;
  *(undefined1 *)((int)puVar3 + 0x16) = 0;
  *(undefined1 *)((int)puVar3 + 0x17) = 0;
  puVar3[6] = 0;
  *(undefined1 *)(puVar3 + 7) = 1;
  uVar11 = 0;
  puVar12 = (undefined2 *)((int)puVar3 + 0x1e);
  *puVar12 = 0;
  do {
    puVar16 = (undefined2 *)(uVar11 & 0xffff);
    bVar19 = puVar16 < &DataAbort;
    if (bVar19) {
      puVar16 = puVar12 + (int)puVar16;
    }
    if (bVar19) {
      puVar16[2] = auStack_50[uVar11];
    }
    puVar17 = (undefined2 *)(uVar11 & 0xffff);
    puVar16 = auStack_3c + uVar11;
    if (bVar19) {
      puVar17 = puVar12 + (int)puVar17;
    }
    uVar11 = uVar11 + 1;
    if (bVar19) {
      puVar17[0x11] = *puVar16;
    }
    iVar10 = iRam403ba050;
  } while ((int)uVar11 < 9);
  *(undefined4 *)(iRam403ba050 + 0xc) = 4;
  *(int *)(iVar10 + 8) = iVar10 + -0x60;
  *(undefined4 *)(iVar10 + 0x10) = 0;
  uVar8 = FUN_403b9844();
  *(undefined4 *)(iVar10 + 4) = uVar8;
  FUN_40675bd4(iVar4 + 8,iVar10,2);
  while (*pcVar2 == '\0') {
    FUN_4067ab8c(100);
  }
  uVar8 = FUN_40674b78();
  FUN_40674be0(uVar8,iVar5,uRam403ba058);
  uVar8 = FUN_40674b78();
  FUN_40674be0(uVar8,iVar7,uRam403ba058);
  FUN_4067ce58(5,0,0x403ba554);
  return 0;
}

