/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Affine(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 auStack_e4 [2];
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_28;
  
  FUN_4067cd44(0x403bb8bc);
  iVar1 = FUN_402fd7a4();
  iVar9 = *(int *)(iVar1 + 0x28);
  FUN_404342fc(auStack_e4);
  uStack_28 = uRam403bb570;
  uVar2 = FUN_40674b78();
  uVar4 = uRam403bb574;
  iVar1 = FUN_40674bc0(uVar2,uRam403bb574,0,uRam403bb514);
  uVar2 = FUN_40674b78();
  iVar3 = FUN_40674bc0(uVar2,uVar4,0,uRam403bb514);
  uVar4 = uRam403bb8dc;
  FUN_4067ca30(iVar1 != 0,uRam403baac4,uRam403baac0,0x439,uRam403bb8dc);
  FUN_4067ca30(iVar3 != 0,uRam403baac8,uRam403baac0,0x43a,uVar4);
  uVar4 = FUN_40674b78();
  iVar1 = FUN_40674c88(uVar4,iVar1);
  uVar4 = FUN_40674b78();
  iVar3 = FUN_40674c88(uVar4,iVar3);
  FUN_4067a4ec(iVar1,uStack_28);
  FUN_4067a4ec(iVar3,uStack_28);
  uVar7 = 0;
  do {
    uVar5 = 0;
    do {
      iVar8 = uVar7 * 0x780 + uVar5;
      uVar5 = uVar5 + 1;
      *(undefined1 *)(iVar1 + iVar8) = 0xff;
      iVar8 = iRam403bb05c;
    } while (uVar5 < 0x1e0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x1e0);
  iStack_cc = iVar1 + 0x384000;
  iStack_c8 = iVar1 + 0x546000;
  iStack_c0 = iVar3 + 0x384000;
  iStack_bc = iVar3 + 0x546000;
  uStack_dc = 0x3c0;
  uStack_da = 0xf0;
  uStack_d8 = 0xf0;
  uStack_d4 = 0;
  uStack_e0 = 0x1e0;
  uStack_98 = 0;
  uStack_de = 0x1e0;
  uStack_97 = 0;
  auStack_e4[0] = 0x780;
  uStack_96 = 0;
  uStack_90 = 0;
  uStack_d6 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  uStack_8f = 0;
  uStack_74 = 0xf0;
  uStack_72 = 0xf0;
  *(undefined1 *)(iRam403bb05c + 3) = 0;
  iStack_d0 = iVar1;
  iStack_c4 = iVar3;
  if (((*(byte *)(iVar8 + 0x3c) & 1) == 0) && (iVar6 = FUN_406831b6(iVar8 + 0x3c), iVar6 != 0)) {
    uVar4 = FUN_406d5a74(iRam403bb8e0);
    FUN_4067e474(uVar4,uRam403bb580,uRam403bb064);
  }
  iVar6 = iRam403bb8e0;
  *(undefined4 *)(iRam403bb8e0 + 0xc) = uRam403bb584;
  uVar4 = FUN_403b9844();
  *(undefined4 *)(iVar6 + 4) = uVar4;
  *(undefined2 **)(iVar6 + 8) = auStack_e4;
  *(undefined4 *)(iVar6 + 0x10) = 0;
  FUN_40675bd4(iVar9 + 8,iVar6,2);
  while (*(char *)(iVar8 + 3) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(0x384000,iVar3);
  FUN_403bb240(0x384000,iVar1);
  uVar4 = FUN_40674b78();
  FUN_40674be0(uVar4,iVar1,uRam403bb514);
  uVar4 = FUN_40674b78();
  FUN_40674be0(uVar4,iVar3,uRam403bb514);
  FUN_4067cd44(0x403bb8e4);
  return 0;
}

