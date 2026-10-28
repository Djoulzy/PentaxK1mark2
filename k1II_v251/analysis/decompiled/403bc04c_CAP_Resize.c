/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Resize(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_a4 [4];
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined1 uStack_88;
  undefined1 auStack_84 [4];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  
  FUN_4067cd44(0x403bc398);
  uVar7 = uRam403bc3b8;
  uVar2 = FUN_40674b78();
  uVar5 = uRam403bc3bc;
  iVar3 = FUN_40674bc0(uVar2,uRam403bc3bc,0,uRam403bb514);
  uVar2 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar2,uVar5,0,uRam403bb514);
  uVar5 = uRam403bc3c0;
  FUN_4067ca30(iVar3 != 0,uRam403bc018,uRam403bbcb0,0x56f,uRam403bc3c0);
  FUN_4067ca30(iVar4 != 0,uRam403bc01c,uRam403bbcb0,0x570,uVar5);
  uVar5 = FUN_40674b78();
  iVar3 = FUN_40674c88(uVar5,iVar3);
  uVar5 = FUN_40674b78();
  iVar4 = FUN_40674c88(uVar5,iVar4);
  FUN_4067a4ec(iVar3,uVar7);
  FUN_4067a4ec(iVar4,uVar7);
  uVar10 = 0;
  do {
    uVar9 = 0;
    do {
      iVar11 = uVar10 * 0x1e0 + uVar9;
      uVar9 = uVar9 + 1;
      *(undefined1 *)(iVar3 + iVar11) = 0;
    } while (uVar9 < 0x1e0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x1e0);
  uVar10 = 0;
  do {
    *(undefined1 *)(iVar3 + uVar10) = 0xff;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x1e0);
  uVar10 = 0;
  do {
    iVar11 = uVar10 * 0x1e0;
    uVar10 = uVar10 + 1;
    bVar12 = 0x1df < uVar10;
    if (bVar12) {
      uVar10 = 0;
    }
    *(undefined1 *)(iVar3 + iVar11) = 0xff;
  } while (!bVar12);
  do {
    iVar11 = uVar10 + 0x38040;
    uVar10 = uVar10 + 1;
    bVar12 = uVar10 < 0x1e0;
    if (!bVar12) {
      uVar10 = 0;
    }
    *(undefined1 *)(iVar3 + iVar11) = 0xff;
  } while (bVar12);
  do {
    iVar11 = uVar10 * 0x1e0;
    uVar10 = uVar10 + 1;
    *(undefined1 *)(iVar11 + iVar3 + 0x1de) = 0xff;
  } while (uVar10 < 0x1e0);
  uVar10 = 0;
  do {
    uVar9 = 0;
    do {
      iVar11 = uVar10 * 0x1e0 + uVar9;
      uVar9 = uVar9 + 1;
      *(undefined1 *)(iVar3 + iVar11 + 0x38400) = 0xff;
    } while (uVar9 < 0x1e0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x1e0);
  iVar11 = FUN_402fd7a4();
  iStack_28 = *(int *)(iVar11 + 0x2c);
  puStack_64 = (undefined1 *)0x0;
  uStack_50 = 1;
  uStack_5c = 0x10000;
  puStack_60 = (undefined1 *)0x0;
  uStack_54 = 0;
  uStack_4f = 0;
  uStack_58 = 0x10000;
  uStack_52 = 0;
  uStack_4e = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  iStack_34 = 0x10000;
  uStack_38 = 0;
  FUN_408dda2c(auStack_84);
  FUN_408dda2c(auStack_a4);
  iVar1 = iStack_34;
  puStack_64 = auStack_84;
  puStack_60 = auStack_a4;
  iVar6 = iVar3 + 0x38400;
  iStack_78 = iVar3 + 0x54600;
  iStack_98 = iVar4 + 0x54600;
  uStack_90 = 0x1e0;
  uStack_94 = 0xf0;
  uStack_92 = 0xf0;
  uStack_2c = 0xf0;
  uStack_8c = 0x78;
  uStack_70 = 0x1e0;
  uStack_74 = 0x1e0;
  uStack_8a = 0x78;
  uStack_72 = 0x1e0;
  uStack_68 = 2;
  uStack_88 = 2;
  iStack_a0 = iVar4;
  iStack_9c = iVar4 + 0x38400;
  iStack_80 = iVar3;
  iStack_7c = iVar6;
  uVar7 = FUN_40683b6c(iStack_34 * 0x1e0);
  uStack_58 = FUN_40683b6c(iVar1 * 0x1e0,uStack_2c);
  iVar11 = iRam403bc3c4;
  uStack_50 = 1;
  uStack_54 = 0xf0;
  uStack_4f = 0;
  uStack_52 = 0xf0;
  uStack_4e = 0;
  *(undefined1 *)(iRam403bc3c4 + 6) = 0;
  uStack_5c = uVar7;
  if (((*(byte *)(iVar11 + 0x48) & 1) == 0) && (iVar8 = FUN_406831b6(iVar11 + 0x48), iVar8 != 0)) {
    uVar7 = FUN_406d5a74(iRam403bc3c8);
    FUN_4067e474(uVar7,uRam403bb580,uRam403bc3cc);
  }
  iVar8 = iRam403bc3c8;
  *(undefined4 *)(iRam403bc3c8 + 0xc) = uRam403bc3d0;
  uVar7 = FUN_403b9844();
  *(undefined4 *)(iVar8 + 4) = uVar7;
  *(undefined1 ***)(iVar8 + 8) = &puStack_64;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  FUN_40675bd4(iStack_28 + 8,iVar8,2);
  while (*(char *)(iVar11 + 6) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(0x38400,iVar4);
  FUN_403bb240(0x38400,iVar4 + 0x38400);
  FUN_403bb240(0x38400,iVar3);
  FUN_403bb240(0x38400,iVar6);
  FUN_4067cd44(0x403bc7ec,iVar1);
  FUN_4067cd44(0x403bc7f8,uStack_4c);
  FUN_4067cd44(0x403bc804,uStack_48);
  FUN_4067cd44(0x403bc810,uStack_44);
  FUN_4067cd44(0x403bc820,uStack_40);
  FUN_4067cd44(0x403bc82c,uStack_3c);
  FUN_4067cd44(0x403bc83c,uStack_38);
  uVar7 = FUN_40674b78();
  FUN_40674be0(uVar7,iVar3,uRam403bb514);
  uVar7 = FUN_40674b78();
  FUN_40674be0(uVar7,iVar4,uRam403bb514);
  FUN_4067cd44(0x403bc84c);
  return 0;
}

