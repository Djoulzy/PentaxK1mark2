/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_JpgEncSpec(void)

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
  undefined4 uStack_148;
  int aiStack_144 [4];
  undefined1 uStack_134;
  undefined2 uStack_132;
  undefined4 uStack_130;
  undefined4 auStack_11c [2];
  undefined1 auStack_114 [4];
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  undefined2 uStack_100;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined1 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 auStack_c4 [64];
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  
  FUN_4067cd44(0x403baa98);
  iVar2 = FUN_402fd7a4();
  iVar9 = *(int *)(iVar2 + 0x18);
  puStack_f0 = (undefined1 *)0x0;
  uStack_e4 = 0;
  piStack_e0 = (int *)0x0;
  uStack_dc = 0;
  uStack_d0 = 1;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_ce = 0;
  uStack_cb = 0;
  uStack_c6 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cd = 0;
  uStack_ca = 0;
  uStack_c5 = 0;
  FUN_40683cc4(auStack_c4,0x40);
  FUN_408dda2c(auStack_114);
  aiStack_144[0] = 0;
  uStack_134 = 1;
  aiStack_144[1] = 0;
  aiStack_144[2] = 0;
  aiStack_144[3] = 0;
  uStack_132 = 0;
  uStack_130 = 0;
  iVar2 = FUN_4067992c();
  uVar1 = uRam403baabc;
  piVar7 = *(int **)(iVar2 + 0x10);
  FUN_4067ca30(piVar7 != (int *)0x0,0x403ba598,uRam403baac0,0x279,uRam403baabc);
  uVar6 = uRam403ba5ac;
  uVar3 = FUN_40674b78();
  iVar2 = FUN_40674bc0(uVar3,0x3fc000,0,uRam403ba058);
  uVar3 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar3,0x3fc000,0,uRam403ba058);
  FUN_4067ca30(iVar2 != 0,uRam403baac4,uRam403baac0,0x28b,uVar1);
  FUN_4067ca30(iVar4 != 0,uRam403baac8,uRam403baac0,0x28c,uVar1);
  FUN_4020f00c(iVar2,uVar6,0xff);
  iVar8 = iVar2 + 0x1fe000;
  FUN_4020f00c(iVar8,0xff000,0xc0);
  FUN_4020f00c(iVar2 + 0x2fd000,0xff000,0x80);
  FUN_4067a4ec(iVar4,0x3fc000);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_84,0x403ba5b0);
  iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_84,1,auStack_11c);
  if (iVar5 != 0) {
    (**(code **)(*piVar7 + 0x1c))(piVar7,auStack_11c[0],iVar2,0x3fc000);
    (**(code **)(*piVar7 + 0x18))(piVar7,auStack_11c[0]);
  }
  iVar5 = iRam403b9ae0;
  puStack_f0 = auStack_114;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  piStack_e0 = aiStack_144;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d0 = 1;
  uStack_cf = 0;
  uStack_ce = 0;
  uStack_cd = 0;
  uStack_cb = 1;
  auStack_114[0] = 2;
  iStack_108 = iVar2 + 0x2fd000;
  uStack_104 = 0x2d0;
  uStack_102 = 0x1e0;
  uStack_100 = 0x780;
  uStack_fc = 0;
  uStack_fa = 0;
  aiStack_144[1] = 0xff000;
  aiStack_144[3] = 0;
  uStack_134 = 2;
  uStack_132 = 4;
  uStack_130 = 0;
  uStack_ca = 0;
  aiStack_144[2] = 0x3fc000;
  uStack_c6 = 1;
  *(undefined1 *)(iRam403b9ae0 + 1) = 0;
  aiStack_144[0] = iVar4;
  iStack_110 = iVar2;
  iStack_10c = iVar8;
  if (((*(byte *)(iVar5 + 0x28) & 1) == 0) && (iVar8 = FUN_406831b6(iVar5 + 0x28), iVar8 != 0)) {
    uVar6 = FUN_406d5a74(iRam403baacc);
    FUN_4067e474(uVar6,uRam403ba054,uRam403b9aec);
  }
  iVar8 = iRam403baacc;
  *(undefined4 *)(iRam403baacc + 0xc) = uRam403baad0;
  uVar6 = FUN_403b9844();
  *(undefined4 *)(iVar8 + 4) = uVar6;
  *(undefined1 ***)(iVar8 + 8) = &puStack_f0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  FUN_40675bd4(iVar9 + 8,iVar8,2);
  FUN_4067cd44(0x403baad4);
  iVar8 = 0;
  do {
    if (*(char *)(iVar5 + 1) != '\0') goto LAB_403baa60;
    FUN_4067ab8c(100);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x1e);
  if (*(char *)(iVar5 + 1) == '\0') {
    FUN_4067cd44(0x403baaf8);
    iVar8 = FUN_4049a740();
    FUN_40301540(*(undefined4 *)(iVar8 + 0x1c));
    if (*(char *)(iVar5 + 1) == '\0') goto LAB_403bac18;
  }
LAB_403baa60:
  FUN_4067cd44(0x403bab20);
  FUN_406759e8();
  FUN_406759f0();
  iVar8 = aiStack_144[3];
  uVar6 = uRam403bafd4;
  *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + 1;
  FUN_4067e440(auStack_64,uVar6);
  iVar9 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_64,0,&uStack_148);
  if (iVar9 != 0) {
    (**(code **)(*piVar7 + 0x20))(piVar7,uStack_148,iVar4,iVar8);
    (**(code **)(*piVar7 + 0x18))(piVar7,uStack_148);
  }
  FUN_4067e440(auStack_44,uRam403bafd8,*(undefined4 *)(iVar5 + 0x2c));
  iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_44,0,&uStack_148);
  if (iVar5 != 0) {
    (**(code **)(*piVar7 + 0x20))(piVar7,uStack_148,iVar2,0x3fc000);
    (**(code **)(*piVar7 + 0x18))(piVar7,uStack_148);
  }
LAB_403bac18:
  if (iVar2 != 0) {
    uVar6 = FUN_40674b78();
    FUN_40674be0(uVar6,iVar2,uRam403ba058);
  }
  if (iVar4 != 0) {
    uVar6 = FUN_40674b78();
    FUN_40674be0(uVar6,iVar4,uRam403ba058);
  }
  FUN_4067cd44(0x403bafdc);
  return 0;
}

