/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_JpgEnc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 auStack_e0 [9];
  undefined4 auStack_bc [2];
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  
  FUN_4067cd44(0x403ba574);
  iVar2 = FUN_402fd7a4();
  iVar9 = *(int *)(iVar2 + 0x18);
  iStack_b4 = 0;
  iStack_ac = 0;
  iStack_a8 = 0;
  iStack_b0 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a2 = 0;
  uStack_9e = 0;
  uStack_9c = 0;
  uStack_97 = 0;
  uStack_93 = 0;
  uStack_96 = 1;
  uStack_92 = 2;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  iVar2 = FUN_4067992c();
  uVar6 = uRam403ba594;
  piVar7 = *(int **)(iVar2 + 0x10);
  auStack_e0[0] = uRam403ba594;
  FUN_4067ca30(piVar7 != (int *)0x0,0x403ba598,0x403ba008,0x1db);
  uVar1 = uRam403ba5ac;
  uVar3 = FUN_40674b78();
  iVar2 = FUN_40674bc0(uVar3,0x3fc000,0,uRam403ba058);
  uVar3 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar3,0x3fc000,0,uRam403ba058);
  auStack_e0[0] = uVar6;
  FUN_4067ca30(iVar2 != 0,0x403ba05c,0x403ba008,0x1ed);
  auStack_e0[0] = uVar6;
  FUN_4067ca30(iVar4 != 0,0x403ba068,0x403ba008,0x1ee);
  FUN_4020f00c(iVar2,uVar1,0xff);
  iVar8 = iVar2 + 0x1fe000;
  FUN_4020f00c(iVar8,0xff000,0xc0);
  FUN_4020f00c(iVar2 + 0x2fd000,0xff000,0x80);
  FUN_4067a4ec(iVar4,0x3fc000);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_84,0x403ba5b0);
  iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_84,1,auStack_bc);
  if (iVar5 != 0) {
    (**(code **)(*piVar7 + 0x1c))(piVar7,auStack_bc[0],iVar2,0x3fc000);
    (**(code **)(*piVar7 + 0x18))(piVar7,auStack_bc[0]);
  }
  iVar5 = iRam403b9ae0;
  iStack_ac = iVar2 + 0x2fd000;
  uStack_a4 = 0x780;
  uStack_a2 = 0x2d0;
  uStack_a0 = 0x1e0;
  uStack_98 = 0;
  uStack_97 = 0;
  uStack_94 = 0;
  uStack_9e = 0;
  uStack_96 = 0;
  uStack_93 = 0;
  uStack_92 = 2;
  uStack_90 = 0xff000;
  uStack_9c = 0x3fc000;
  uStack_8c = 0;
  uStack_88 = 1;
  *(undefined1 *)(iRam403b9ae0 + 1) = 0;
  iStack_b4 = iVar2;
  iStack_b0 = iVar8;
  iStack_a8 = iVar4;
  if (((*(byte *)(iVar5 + 0x20) & 1) == 0) && (iVar8 = FUN_406831b6(iVar5 + 0x20), iVar8 != 0)) {
    uVar6 = FUN_406d5a74(iRam403ba5c0);
    FUN_4067e474(uVar6,uRam403ba054,uRam403b9aec);
  }
  iVar8 = iRam403ba5c0;
  *(undefined4 *)(iRam403ba5c0 + 0xc) = uRam403b9af0;
  uVar6 = FUN_403b9844();
  *(undefined4 *)(iVar8 + 4) = uVar6;
  *(int **)(iVar8 + 8) = &iStack_b4;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  FUN_40675bd4(iVar9 + 8,iVar8,2);
  FUN_4067cd44(0x403ba5c4);
  iVar8 = 0;
  do {
    if (*(char *)(iVar5 + 1) != '\0') goto LAB_403ba4c8;
    FUN_4067ab8c(100);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x1e);
  if (*(char *)(iVar5 + 1) == '\0') {
    FUN_4067cd44(0x403ba5e4);
    iVar8 = FUN_4049a740();
    FUN_40301540(*(undefined4 *)(iVar8 + 0x1c));
    if (*(char *)(iVar5 + 1) == '\0') goto LAB_403ba6a4;
  }
LAB_403ba4c8:
  FUN_4067cd44(0x403ba608);
  FUN_406759e8();
  FUN_406759f0();
  uVar6 = uStack_8c;
  *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
  FUN_4067e440(auStack_64,0x403ba628);
  iVar8 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_64,0,auStack_e0);
  if (iVar8 != 0) {
    (**(code **)(*piVar7 + 0x20))(piVar7,auStack_e0[0],iVar4,uVar6);
    (**(code **)(*piVar7 + 0x18))(piVar7,auStack_e0[0]);
  }
  FUN_4067e440(auStack_44,0x403ba638,*(undefined4 *)(iVar5 + 0x24));
  iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_44,0,auStack_e0);
  if (iVar5 != 0) {
    (**(code **)(*piVar7 + 0x20))(piVar7,auStack_e0[0],iVar2,0x3fc000);
    (**(code **)(*piVar7 + 0x18))(piVar7,auStack_e0[0]);
  }
LAB_403ba6a4:
  if (iVar2 != 0) {
    uVar6 = FUN_40674b78();
    FUN_40674be0(uVar6,iVar2,uRam403ba058);
  }
  if (iVar4 != 0) {
    uVar6 = FUN_40674b78();
    FUN_40674be0(uVar6,iVar4,uRam403ba058);
  }
  FUN_4067cd44(0x403baa74);
  return 0;
}

