/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Rotate(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_5c [4];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined4 uStack_2c;
  
  FUN_4067cd44(0x403bb554);
  iVar2 = FUN_402fd7a4();
  iVar8 = *(int *)(iVar2 + 0x24);
  iStack_58 = 0;
  iStack_44 = 0;
  auStack_5c[0] = 0;
  iStack_54 = 0;
  uStack_30 = 1;
  iStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_3a = 0;
  uStack_36 = 0;
  uStack_32 = 0;
  uStack_2f = 2;
  uStack_2c = uRam403bb570;
  uVar3 = FUN_40674b78();
  uVar5 = uRam403bb574;
  iVar2 = FUN_40674bc0(uVar3,uRam403bb574,0,uRam403bb514);
  uVar3 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar3,uVar5,0,uRam403bb514);
  FUN_4067ca30(iVar2 != 0,uRam403baac4,uRam403baac0,0x3e5,uRam403bb578);
  FUN_4067ca30(iVar4 != 0,uRam403baac8,uRam403baac0,0x3e6,uRam403bb578);
  uVar5 = FUN_40674b78();
  iVar2 = FUN_40674c88(uVar5,iVar2);
  uVar5 = FUN_40674b78();
  iVar4 = FUN_40674c88(uVar5,iVar4);
  FUN_4067a4ec(iVar2,uStack_2c);
  FUN_4067a4ec(iVar4,uStack_2c);
  uVar6 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar6) = 0xff;
    iVar1 = iRam403bb05c;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x780);
  auStack_5c[0] = 0;
  iStack_54 = iVar2 + 0x384000;
  iStack_50 = iVar2 + 0x546000;
  iStack_48 = iVar4 + 0x384000;
  iStack_44 = iVar4 + 0x546000;
  uStack_3c = 0x780;
  uStack_3a = 0x780;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_36 = 0;
  uStack_32 = 0;
  uStack_40 = 0x1e0;
  uStack_30 = 1;
  uStack_3e = 0x1e0;
  uStack_2f = 0;
  *(undefined1 *)(iRam403bb05c + 2) = 0;
  iStack_58 = iVar2;
  iStack_4c = iVar4;
  if (((*(byte *)(iVar1 + 0x38) & 1) == 0) && (iVar7 = FUN_406831b6(iVar1 + 0x38), iVar7 != 0)) {
    uVar5 = FUN_406d5a74(iRam403bb57c);
    FUN_4067e474(uVar5,uRam403bb580,uRam403bb064);
  }
  iVar7 = iRam403bb57c;
  *(undefined4 *)(iRam403bb57c + 0xc) = uRam403bb584;
  uVar5 = FUN_403b9844();
  *(undefined4 *)(iVar7 + 4) = uVar5;
  *(undefined1 **)(iVar7 + 8) = auStack_5c;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  FUN_40675bd4(iVar8 + 8,iVar7,2);
  while (*(char *)(iVar1 + 2) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(0x384000,iVar4);
  FUN_403bb240(0x384000,iVar2);
  uVar5 = FUN_40674b78();
  FUN_40674be0(uVar5,iVar2,uRam403bb514);
  uVar5 = FUN_40674b78();
  FUN_40674be0(uVar5,iVar4,uRam403bb514);
  FUN_4067cd44(0x403bb89c);
  return 0;
}

