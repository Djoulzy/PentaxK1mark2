/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Lut(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  
  FUN_4067cd44(0x403bbc78);
  iVar3 = FUN_402fd7a4();
  iVar11 = iRam403bbc94;
  iStack_34 = *(int *)(iVar3 + 0x34);
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_7b = 0;
  uStack_72 = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  iStack_60 = 0;
  uStack_76 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  iStack_68 = 0;
  uStack_4c = 0;
  uStack_6e = 0;
  uStack_6a = 0;
  iStack_64 = 0;
  iStack_54 = 0;
  uStack_38 = 2;
  iStack_5c = 0;
  iStack_58 = 0;
  iStack_50 = 0;
  iStack_40 = 0;
  uStack_37 = 2;
  iStack_48 = 0;
  iStack_44 = 0;
  iStack_3c = 0;
  uStack_36 = 0;
  uStack_2c = 0x1e0;
  uVar4 = FUN_40674b78();
  iVar3 = FUN_40674bc0(uVar4,iVar11 + 0x40,0,uRam403bb514);
  uVar4 = FUN_40674b78();
  iVar5 = FUN_40674bc0(uVar4,iVar11 + 0x40,0,uRam403bb514);
  uVar4 = uRam403bbc98;
  FUN_4067ca30(iVar3 != 0,uRam403baac4,uRam403baac0,0x496,uRam403bbc98);
  FUN_4067ca30(iVar5 != 0,uRam403baac8,uRam403baac0,0x497,uVar4);
  uVar6 = FUN_40674b78();
  iVar3 = FUN_40674c88(uVar6,iVar3);
  uVar6 = FUN_40674b78();
  iStack_30 = FUN_40674c88(uVar6,iVar5);
  FUN_4067a4ec(iVar3,iVar11);
  FUN_4067a4ec(iStack_30,iVar11);
  uVar10 = 0;
  do {
    uVar7 = 0;
    do {
      iVar11 = uVar10 * 0x780 + uVar7;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(iVar3 + iVar11) = 0xff;
    } while (uVar7 < 0x1e0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < uStack_2c);
  uVar6 = FUN_40674b78();
  iVar11 = FUN_40674bc0(uVar6,0x200,0,0x403bbc9c);
  uVar6 = FUN_40674b78();
  iVar5 = FUN_40674bc0(uVar6,0x200,0,0x403bbc9c);
  uVar6 = FUN_40674b78();
  iVar8 = FUN_40674bc0(uVar6,0x200,0,0x403bbc9c);
  FUN_4067ca30(iVar11 != 0,0x403bbcb4,uRam403bbcb0,0x4ab,uVar4);
  FUN_4067ca30(iVar5 != 0,0x403bbcc4,uRam403bbcb0,0x4ac,uVar4);
  FUN_4067ca30(iVar8 != 0,0x403bbcd4,uRam403bbcb0,0x4ad,uVar4);
  iVar9 = 0;
  do {
    iVar1 = iVar9 * 2;
    iVar2 = iVar9 * 2;
    *(undefined2 *)(iVar8 + iVar9 * 2) = 0xc0;
    iVar9 = iVar9 + 1;
    *(undefined2 *)(iVar11 + iVar1) = 0x80;
    *(undefined2 *)(iVar5 + iVar2) = 0x40;
  } while (iVar9 < 0x100);
  *(undefined2 *)(iVar8 + 2) = 0xff;
  *(undefined2 *)(iVar11 + 0x80) = 0xff;
  *(undefined2 *)(iVar5 + 0xc0) = 0xff;
  iVar9 = iRam403bb05c;
  iStack_64 = iVar3 + 0x384000;
  iStack_60 = iVar3 + 0x546000;
  iStack_5c = iVar3 + 0x708000;
  iStack_58 = iStack_30;
  iStack_54 = iStack_30 + 0x384000;
  iStack_50 = iStack_30 + 0x708000;
  uStack_78 = 0x1e0;
  uStack_76 = (undefined2)uStack_2c;
  uStack_70 = 0x780;
  uStack_6a = 0x780;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_7c = 3;
  uStack_7b = 10;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_36 = 0;
  uStack_7a = 1;
  *(undefined1 *)(iRam403bb05c + 4) = 0;
  iStack_68 = iVar3;
  iStack_48 = iVar11;
  iStack_44 = iVar5;
  iStack_40 = iVar8;
  iStack_3c = iVar8;
  if (((*(byte *)(iVar9 + 0x40) & 1) == 0) && (iVar11 = FUN_406831b6(iVar9 + 0x40), iVar11 != 0)) {
    uVar4 = FUN_406d5a74(iRam403bbce4);
    FUN_4067e474(uVar4,uRam403bb580,uRam403bb064);
  }
  iVar11 = iRam403bbce4;
  *(undefined4 *)(iRam403bbce4 + 0xc) = uRam403bbce8;
  uVar4 = FUN_403b9844();
  *(undefined4 *)(iVar11 + 4) = uVar4;
  *(undefined1 **)(iVar11 + 8) = &uStack_7c;
  *(undefined4 *)(iVar11 + 0x10) = 0;
  FUN_40675bd4(iStack_34 + 8,iVar11,2);
  while (*(char *)(iVar9 + 4) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(0x384000,iStack_30);
  FUN_403bb240(0x384000,iVar3);
  uVar4 = FUN_40674b78();
  FUN_40674be0(uVar4,iVar3,uRam403bb514);
  uVar4 = FUN_40674b78();
  FUN_40674be0(uVar4,iStack_30,uRam403bb514);
  FUN_4067cd44(0x403bbfd4);
  return 0;
}

