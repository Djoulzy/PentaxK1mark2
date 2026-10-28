/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Blend(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
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
  undefined4 uStack_50;
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
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined4 uStack_2c;
  
  FUN_4067cd44(0x403bcdf0);
  uStack_2c = uRam403bc3b8;
  uVar1 = FUN_40674b78();
  uVar5 = uRam403bc3bc;
  iVar2 = FUN_40674bc0(uVar1,uRam403bc3bc,0,uRam403bc8a0);
  uVar1 = FUN_40674b78();
  iVar3 = FUN_40674bc0(uVar1,uVar5,0,uRam403bc8a0);
  uVar1 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar1,uVar5,0,uRam403bc8a0);
  uVar5 = uRam403bce0c;
  FUN_4067ca30(iVar2 != 0,0x403bce10,uRam403bbcb0,0x6fc,uRam403bce0c);
  FUN_4067ca30(iVar3 != 0,0x403bce20,uRam403bbcb0,0x6fd,uVar5);
  FUN_4067ca30(iVar4 != 0,uRam403bc01c,uRam403bbcb0,0x6fe,uVar5);
  uVar5 = FUN_40674b78();
  iVar2 = FUN_40674c88(uVar5,iVar2);
  uVar5 = FUN_40674b78();
  iVar3 = FUN_40674c88(uVar5,iVar3);
  uVar5 = FUN_40674b78();
  iVar4 = FUN_40674c88(uVar5,iVar4);
  FUN_4067a4ec(iVar2,uStack_2c);
  FUN_4067a4ec(iVar3,uStack_2c);
  FUN_4067a4ec(iVar4,uStack_2c);
  uVar9 = 0;
  do {
    uVar6 = 0;
    do {
      iVar10 = uVar9 * 0x1e0 + uVar6;
      uVar6 = uVar6 + 1;
      *(undefined1 *)(iVar2 + iVar10) = 0xff;
    } while (uVar6 < 0x1e0);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1e0);
  uVar9 = 0;
  do {
    uVar6 = 0;
    do {
      iVar10 = uVar9 * 0x1e0 + uVar6;
      uVar6 = uVar6 + 1;
      *(undefined1 *)(iVar3 + iVar10) = 0;
    } while (uVar6 < 0x1e0);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1e0);
  iVar10 = FUN_402fd7a4();
  iVar7 = *(int *)(iVar10 + 0x34);
  FUN_404346b8(&uStack_84);
  iVar10 = iRam403bc3c4;
  uStack_84 = 0;
  uStack_83 = 4;
  uStack_82 = 2;
  uStack_78 = 0x1e0;
  iStack_64 = iVar2 + 0x38400;
  uStack_80 = 0x1e0;
  uStack_76 = 0x1e0;
  uStack_74 = 0x1e0;
  uStack_7e = 0x1e0;
  uStack_72 = 0x1e0;
  uStack_7c = 0x1e0;
  uStack_6c = 0x1e0;
  iStack_60 = iVar2 + 0x54600;
  uStack_7a = 0x1e0;
  uStack_6a = 0x1e0;
  iStack_58 = iVar3 + 0x38400;
  uStack_70 = 0x1e0;
  uStack_6e = 0x1e0;
  iStack_54 = iVar3 + 0x54600;
  uStack_50 = 0;
  iStack_48 = iVar4 + 0x38400;
  iStack_44 = iVar4 + 0x54600;
  uStack_40 = 10;
  uStack_3e = 10;
  uStack_3c = 10;
  uStack_38 = 0x80;
  uStack_34 = 0x80;
  uStack_3a = 0x80;
  uStack_36 = 0x80;
  uStack_32 = 0x80;
  uStack_30 = 0x80;
  uStack_2e = 2;
  *(undefined1 *)(iRam403bc3c4 + 8) = 0;
  iStack_68 = iVar2;
  iStack_5c = iVar3;
  iStack_4c = iVar4;
  if (((*(byte *)(iVar10 + 0x54) & 1) == 0) && (iVar8 = FUN_406831b6(iVar10 + 0x54), iVar8 != 0)) {
    uVar5 = FUN_406d5a74(iRam403bce30);
    FUN_4067e474(uVar5,uRam403bc938,uRam403bc3cc);
  }
  iVar8 = iRam403bce30;
  *(undefined4 *)(iRam403bce30 + 0xc) = uRam403bce34;
  uVar5 = FUN_403b9844();
  *(undefined4 *)(iVar8 + 4) = uVar5;
  *(undefined1 **)(iVar8 + 8) = &uStack_84;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  FUN_40675bd4(iVar7 + 8,iVar8,2);
  while (*(char *)(iVar10 + 8) == '\0') {
    FUN_4067ab8c(100);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_403bb240(0x38400,iVar4);
  FUN_403bb240(0x38400,iVar2);
  FUN_403bb240(0x38400,iVar3);
  uVar5 = FUN_40674b78();
  FUN_40674be0(uVar5,iVar2,uRam403bc8a0);
  uVar5 = FUN_40674b78();
  FUN_40674be0(uVar5,iVar3,uRam403bc8a0);
  uVar5 = FUN_40674b78();
  FUN_40674be0(uVar5,iVar4,uRam403bc8a0);
  FUN_4067cd44(0x403bd0d8);
  return 0;
}

