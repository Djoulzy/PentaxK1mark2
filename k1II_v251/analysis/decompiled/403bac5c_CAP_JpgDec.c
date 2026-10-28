/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_JpgDec(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  int iStack_98;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  
  FUN_4067cd44(0x403bb004);
  iVar2 = FUN_4067992c();
  uVar8 = uRam403bb024;
  piVar9 = *(int **)(iVar2 + 0x10);
  uStack_b8 = uRam403bb024;
  FUN_4067ca30(piVar9 != (int *)0x0,uRam403bb028,uRam403baac0,799);
  uVar1 = uRam403ba5ac;
  uVar10 = 0x3fc000;
  uStack_8c = 0x780;
  uStack_90 = 0x3fc000;
  uVar3 = FUN_40674b78();
  iVar2 = FUN_40674bc0(uVar3,0x3fc000,0,uRam403ba058);
  uVar3 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar3,uStack_90,0,uRam403ba058);
  uStack_b8 = uVar8;
  FUN_4067ca30(iVar2 != 0,uRam403baac4,uRam403baac0,0x331);
  uStack_b8 = uVar8;
  FUN_4067ca30(iVar4 != 0,uRam403baac8,uRam403baac0,0x332);
  FUN_4067a4ec(iVar2,uVar1);
  FUN_4067a4ec(iVar2 + 0x1fe000);
  FUN_4067a4ec(iVar2 + 0x2fd000,0xff000);
  FUN_4067a4ec(iVar4,uStack_90);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_84,0x403bb02c);
  iVar5 = (**(code **)(*piVar9 + 0x14))(piVar9,auStack_84,1,&uStack_88);
  if (iVar5 != 0) {
    uStack_b8 = 0;
    (**(code **)(*piVar9 + 0x28))(piVar9,uStack_88,&uStack_b8);
    uVar10 = uStack_b8;
    (**(code **)(*piVar9 + 0x1c))(piVar9,uStack_88,iVar2,uStack_b8);
    (**(code **)(*piVar9 + 0x18))(piVar9,uStack_88);
  }
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067cd44(0x403bb03c);
  iVar6 = FUN_402fd7a4();
  iVar5 = iRam403bb05c;
  iVar6 = *(int *)(iVar6 + 0x18);
  iStack_a8 = 0;
  iStack_b0 = 0;
  uStack_a0 = 0;
  uStack_94 = 1;
  iStack_ac = 0;
  uStack_9e = 0;
  uStack_9c = 0;
  uStack_93 = 0;
  uStack_9a = 1;
  iStack_98 = 0;
  uStack_92 = 1;
  *(undefined1 *)(iRam403bb05c + 1) = 0;
  iStack_b4 = iVar2;
  uStack_a4 = uVar10;
  if (((*(byte *)(iVar5 + 0x30) & 1) == 0) && (iVar7 = FUN_406831b6(iVar5 + 0x30), iVar7 != 0)) {
    uVar8 = FUN_406d5a74(iRam403bb060);
    FUN_4067e474(uVar8,uRam403ba054,uRam403bb064);
  }
  iVar7 = iRam403bb060;
  *(undefined4 *)(iRam403bb060 + 0xc) = uRam403bb068;
  uVar8 = FUN_403b9844();
  *(undefined4 *)(iVar7 + 4) = uVar8;
  *(int **)(iVar7 + 8) = &iStack_b4;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  FUN_40675bd4(iVar6 + 8,iVar7,2);
  iVar7 = 0;
  do {
    if (*(char *)(iVar5 + 1) != '\0') goto LAB_403baee8;
    FUN_4067ab8c(100);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x1e);
  if (*(char *)(iVar5 + 1) == '\0') {
    FUN_4067cd44(0x403bb06c);
    iVar7 = FUN_4049a740();
    FUN_40301540(*(undefined4 *)(iVar7 + 0x1c));
  }
LAB_403baee8:
  if (iStack_98 == 0) {
    FUN_4067cd44(0x403bb098);
    FUN_4067cd44(0x403bb0b8,uStack_9e,uStack_9c);
    iVar7 = iRam403bb060;
    iStack_ac = iVar4 + uVar1;
    iStack_a8 = iStack_ac + (uVar1 >> 1);
    uStack_a0 = (undefined2)uStack_8c;
    uStack_94 = uStack_9a;
    uStack_92 = 1;
    uStack_93 = 0;
    *(undefined1 *)(iVar5 + 1) = 0;
    *(undefined4 *)(iVar7 + 0xc) = uRam403bb0d8;
    iStack_b4 = iVar2;
    iStack_b0 = iVar4;
    uStack_a4 = uVar10;
    uVar8 = FUN_403b9844();
    *(undefined4 *)(iVar7 + 4) = uVar8;
    *(int **)(iVar7 + 8) = &iStack_b4;
    *(undefined4 *)(iVar7 + 0x10) = 0;
    FUN_40675bd4(iVar6 + 8,iVar7,2);
    iVar6 = 0;
    do {
      if (*(char *)(iVar5 + 1) != '\0') goto LAB_403bafc0;
      FUN_4067ab8c(100);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1e);
    if (*(char *)(iVar5 + 1) == '\0') {
      FUN_4067cd44(0x403bb0dc);
      iVar6 = FUN_4049a740();
      FUN_40301540(*(undefined4 *)(iVar6 + 0x1c));
    }
  }
LAB_403bafc0:
  FUN_4067cd44(0x403bb104);
  FUN_406759e8();
  FUN_406759f0();
  uVar8 = uStack_90;
  *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + 1;
  FUN_4067e440(auStack_64,0x403bb4f4);
  iVar6 = (**(code **)(*piVar9 + 0x14))(piVar9,auStack_64,0,&uStack_b8);
  if (iVar6 != 0) {
    (**(code **)(*piVar9 + 0x20))(piVar9,uStack_b8,iVar4,uVar8);
    (**(code **)(*piVar9 + 0x18))(piVar9,uStack_b8);
  }
  uVar8 = uStack_a4;
  FUN_4067e440(auStack_44,0x403bb504,*(undefined4 *)(iVar5 + 0x34));
  iVar5 = (**(code **)(*piVar9 + 0x14))(piVar9,auStack_44,0,&uStack_b8);
  if (iVar5 != 0) {
    (**(code **)(*piVar9 + 0x20))(piVar9,uStack_b8,iVar2,uVar8);
    (**(code **)(*piVar9 + 0x18))(piVar9,uStack_b8);
  }
  if (iVar2 != 0) {
    uVar8 = FUN_40674b78();
    FUN_40674be0(uVar8,iVar2,uRam403bb514);
  }
  if (iVar4 != 0) {
    uVar8 = FUN_40674b78();
    FUN_40674be0(uVar8,iVar4,uRam403bb514);
  }
  FUN_4067cd44(0x403bb518);
  return 0;
}

