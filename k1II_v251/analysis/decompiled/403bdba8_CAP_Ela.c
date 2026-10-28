/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Ela(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_738;
  undefined1 uStack_734;
  undefined1 uStack_733;
  undefined1 uStack_732;
  undefined2 uStack_730;
  undefined1 uStack_72e;
  undefined1 uStack_72d;
  undefined1 uStack_72c;
  undefined2 uStack_72a;
  undefined1 uStack_728;
  undefined1 uStack_727;
  undefined1 uStack_726;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined1 uStack_718;
  undefined1 auStack_714 [1152];
  undefined1 *puStack_294;
  undefined1 auStack_290 [461];
  undefined1 uStack_c3;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined1 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 auStack_64 [32];
  undefined4 auStack_44 [7];
  
  FUN_4067cd44(0x403bdf8c);
  iVar1 = FUN_40248418();
  piVar10 = *(int **)(iVar1 + 0x10);
  iVar1 = FUN_402fd7a4();
  iStack_84 = *(int *)(iVar1 + 0x10);
  uStack_734 = 0;
  uStack_730 = 0;
  uStack_733 = 0;
  uStack_72e = 0;
  uStack_72c = 0;
  uStack_728 = 0;
  uStack_732 = 0;
  uStack_72d = 0;
  uStack_72a = 0;
  uStack_727 = 0;
  uStack_726 = 0xc;
  uStack_724 = 0;
  uStack_720 = 0;
  uStack_71c = 0;
  uStack_718 = 0;
  iVar1 = FUN_4045de14(auStack_714);
  *(undefined4 *)(iVar1 + 0x47c) = 0;
  puStack_294 = (undefined1 *)0x0;
  iVar1 = FUN_403a2e30(auStack_290);
  *(undefined1 *)(iVar1 + 0x1cc) = 0;
  *(undefined1 *)(iVar1 + 0x1cd) = 1;
  *(undefined4 *)(iVar1 + 0x1d0) = 0;
  *(undefined4 *)(iVar1 + 0x1d4) = 0;
  *(undefined4 *)(iVar1 + 0x1d8) = 0;
  *(undefined4 *)(iVar1 + 0x1dc) = 0;
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  *(undefined4 *)(iVar1 + 0x1e4) = 0;
  *(undefined1 *)(iVar1 + 0x1e8) = 1;
  *(undefined4 *)(iVar1 + 0x1ec) = 0;
  *(undefined4 *)(iVar1 + 0x1f0) = 0;
  *(undefined1 *)(iVar1 + 500) = 0;
  uStack_71c = 2;
  uStack_720 = 4;
  uStack_718 = 0;
  uStack_734 = 0;
  (**(code **)(*piVar10 + 0x18))(piVar10,&uStack_734);
  iVar1 = FUN_4067992c();
  uVar11 = uRam403bdfac;
  piVar10 = *(int **)(iVar1 + 0x10);
  uStack_738 = uRam403bdfac;
  FUN_4067ca30(piVar10 != (int *)0x0,uRam403bdfb0,uRam403bd3a0,0x989);
  uVar8 = uRam403bdfb4;
  uStack_8c = uRam403bdfb8;
  uStack_7c = 0x1572;
  uStack_80 = 0xe50;
  uStack_70 = uRam403bdfbc;
  uVar2 = FUN_40674b78();
  iVar1 = FUN_40674bc0(uVar2,uVar8,0,uRam403bdfc0);
  uVar2 = FUN_40674b78();
  iVar3 = FUN_40674bc0(uVar2,uRam403bdfc4,0,uRam403bdfc0);
  uVar4 = FUN_40674b78();
  uVar2 = uRam403bdfc8;
  iVar5 = FUN_40674bc0(uVar4,uRam403bdfc8,0,uRam403bdfc0);
  uVar4 = FUN_40674b78();
  iVar6 = FUN_40674bc0(uVar4,uVar2,0,uRam403bdfc0);
  uStack_738 = uVar11;
  FUN_4067ca30(iVar1 != 0,uRam403bdfcc,uRam403bd3a0,0x9a4);
  uStack_738 = uVar11;
  FUN_4067ca30(iVar5 != 0,0x403bdfd0,uRam403bd3a0,0x9a5);
  uStack_738 = uVar11;
  FUN_4067ca30(iVar6 != 0,0x403bdfe8,uRam403bd3a0,0x9a6);
  uStack_738 = iVar3 + 0x3fU & 0xffffffc0;
  uVar11 = iVar6 + 0x3fU & 0xffffffc0;
  uVar12 = iVar5 + 0x3fU & 0xffffffc0;
  FUN_4067a4ec(iVar1,uVar8);
  FUN_4067a4ec(uStack_738,uStack_8c);
  FUN_4067a4ec(uVar12,uStack_70);
  FUN_4067a4ec(uVar11,uStack_70);
  FUN_406759e8();
  FUN_406759f0();
  uStack_90 = uVar8;
  FUN_4067e440(auStack_64,0x403be000);
  iVar7 = (**(code **)(*piVar10 + 0x14))(piVar10,auStack_64,1,auStack_44);
  if (iVar7 != 0) {
    (**(code **)(*piVar10 + 0x1c))(piVar10,auStack_44[0],iVar1,uStack_90);
    (**(code **)(*piVar10 + 0x18))(piVar10,auStack_44[0]);
  }
  iVar7 = iRam403bd88c;
  puStack_294 = &uStack_734;
  uStack_c3 = 1;
  uStack_bc = 0;
  uStack_b8 = 0x2040;
  uStack_b4 = uStack_7c;
  uStack_b0 = uStack_80;
  uStack_ac = uStack_738;
  uStack_a8 = 1;
  uStack_9c = 0;
  *(undefined1 *)(iRam403bd88c + 9) = 0;
  iStack_c0 = iVar1;
  uStack_a4 = uVar12;
  uStack_a0 = uVar11;
  if (((*(byte *)(iVar7 + 0x58) & 1) == 0) && (iVar7 = FUN_406831b6(uRam403be010), iVar7 != 0)) {
    uVar8 = FUN_406d5a74(iRam403be014);
    FUN_4067e474(uVar8,uRam403be01c,uRam403be018);
  }
  iVar7 = iRam403be014;
  *(undefined4 *)(iRam403be014 + 0xc) = uRam403be020;
  uVar8 = FUN_403b9844();
  *(undefined4 *)(iVar7 + 4) = uVar8;
  *(undefined1 ***)(iVar7 + 8) = &puStack_294;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  FUN_40675bd4(iStack_84 + 8,iVar7,2);
  iVar7 = 0;
  do {
    if (*(char *)(iRam403bd88c + 9) != '\0') goto LAB_403bdf74;
    FUN_4067ab8c(100);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 300);
  if (*(char *)(iRam403bd88c + 9) != '\0') {
LAB_403bdf74:
    FUN_4067cd44(0x403be024);
    FUN_406759e8();
    FUN_406759f0();
    iVar7 = iRam403bd88c;
    *(int *)(iRam403bd88c + 0x5c) = *(int *)(iRam403bd88c + 0x5c) + 1;
    uStack_6c = uVar12;
    FUN_4067e440(&uStack_90,0x403be33c);
    iVar9 = (**(code **)(*piVar10 + 0x14))(piVar10,&uStack_90,0,&uStack_738);
    if (iVar9 != 0) {
      (**(code **)(*piVar10 + 0x20))(piVar10,uStack_738,uStack_6c,uStack_70);
      (**(code **)(*piVar10 + 0x18))(piVar10,uStack_738);
    }
    FUN_4067e440(&uStack_90,0x403be34c,*(undefined4 *)(iVar7 + 0x5c));
    iVar7 = (**(code **)(*piVar10 + 0x14))(piVar10,&uStack_90,0,&uStack_738);
    if (iVar7 != 0) {
      (**(code **)(*piVar10 + 0x20))(piVar10,uStack_738,uVar11,uStack_70);
      (**(code **)(*piVar10 + 0x18))(piVar10,uStack_738);
    }
  }
  if (iVar1 != 0) {
    uVar8 = FUN_40674b78();
    FUN_40674be0(uVar8,iVar1,uRam403bdfc0);
  }
  if (iVar3 != 0) {
    uVar8 = FUN_40674b78();
    FUN_40674be0(uVar8,iVar3,uRam403bdfc0);
  }
  if (iVar5 != 0) {
    uVar8 = FUN_40674b78();
    FUN_40674be0(uVar8,iVar5,uRam403bdfc0);
  }
  if (iVar6 != 0) {
    uVar8 = FUN_40674b78();
    FUN_40674be0(uVar8,iVar6,uRam403bdfc0);
  }
  FUN_4067cd44(0x403be35c);
  return 0;
}

