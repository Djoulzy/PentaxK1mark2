/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Spf(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_e4 [56];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a5;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined2 uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  
  FUN_4067cd44(0x403bbff4);
  iVar1 = FUN_402fd7a4();
  iVar10 = *(int *)(iVar1 + 0x34);
  FUN_404345f4(&uStack_ac);
  uVar7 = uRam403bbc94;
  uVar2 = FUN_40674b78();
  uVar4 = uRam403bc010;
  iVar1 = FUN_40674bc0(uVar2,uRam403bc010,0,uRam403bb514);
  uVar2 = FUN_40674b78();
  iVar3 = FUN_40674bc0(uVar2,uVar4,0,uRam403bb514);
  uVar4 = uRam403bc014;
  FUN_4067ca30(iVar1 != 0,uRam403bc018,uRam403bbcb0,0x50c,uRam403bc014);
  FUN_4067ca30(iVar3 != 0,uRam403bc01c,uRam403bbcb0,0x50d,uVar4);
  uVar4 = FUN_40674b78();
  iVar1 = FUN_40674c88(uVar4,iVar1);
  uVar4 = FUN_40674b78();
  iVar3 = FUN_40674c88(uVar4,iVar3);
  FUN_4067a4ec(iVar1,uVar7);
  FUN_4067a4ec(iVar3,uVar7);
  uVar8 = 0;
  do {
    uVar5 = 0;
    do {
      iVar9 = uVar8 * 0x780 + uVar5;
      uVar5 = uVar5 + 1;
      *(undefined1 *)(iVar1 + iVar9) = 0xff;
    } while (uVar5 < 0x1e0);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x1e0);
  iStack_9c = iVar1 + 0x384000;
  iStack_98 = iVar1 + 0x546000;
  iStack_8c = iVar3 + 0x384000;
  iStack_88 = iVar3 + 0x546000;
  uStack_82 = 0x1e0;
  uStack_84 = 0x780;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_80 = 0x1e0;
  uStack_aa = 0;
  uStack_94 = 0x780;
  uStack_7a = 0;
  uStack_78 = 0;
  uStack_a9 = 0;
  uStack_a8 = 2;
  uStack_a7 = 2;
  uStack_a5 = 4;
  iStack_a0 = iVar1;
  iStack_90 = iVar3;
  FUN_406833b0(auStack_e4,uRam403bc020,0x34);
  iVar9 = iRam403bb05c;
  puStack_74 = auStack_e4;
  *(undefined1 *)(iRam403bb05c + 5) = 0;
  puStack_70 = puStack_74;
  puStack_6c = puStack_74;
  if (((*(byte *)(iVar9 + 0x44) & 1) == 0) && (iVar6 = FUN_406831b6(iVar9 + 0x44), iVar6 != 0)) {
    uVar7 = FUN_406d5a74(iRam403bc024);
    FUN_4067e474(uVar7,uRam403bb580,uRam403bb064);
  }
  iVar6 = iRam403bc024;
  *(undefined4 *)(iRam403bc024 + 0xc) = uRam403bc028;
  uVar7 = FUN_403b9844();
  *(undefined4 *)(iVar6 + 4) = uVar7;
  *(undefined1 **)(iVar6 + 8) = &uStack_ac;
  *(undefined4 *)(iVar6 + 0x10) = 0;
  FUN_40675bd4(iVar10 + 8,iVar6,2);
  while (*(char *)(iVar9 + 5) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(0x384000,iVar3);
  FUN_403bb240(0x384000,iVar1);
  uVar7 = FUN_40674b78();
  FUN_40674be0(uVar7,iVar1,uRam403bb514);
  uVar7 = FUN_40674b78();
  FUN_40674be0(uVar7,iVar3,uRam403bb514);
  FUN_4067cd44(0x403bc02c);
  return 0;
}

