/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_MipiStill_Old(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_d0 [64];
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [40];
  undefined4 uStack_54;
  undefined4 uStack_2c;
  int iStack_28;
  
  uStack_2c = param_1;
  iStack_28 = param_2;
  FUN_406793bc(&uStack_2c);
  FUN_4067cd44(0x403bea70);
  uVar7 = 0xfe0;
  uVar11 = 0x1640;
  iVar8 = 0x17a0;
  iVar10 = 0xfe0;
  if ((*(int *)(param_2 + 4) != 0) && (uVar11 = FUN_4066f214(), 0x1640 < uVar11)) {
    uVar11 = 0x1640;
  }
  if ((*(int *)(param_2 + 8) != 0) && (uVar7 = FUN_4066f214(), 0x1640 < uVar7)) {
    uVar7 = 0x1640;
  }
  if (*(int *)(param_2 + 4) != 0) {
    iVar8 = FUN_4066f214(*(undefined4 *)(param_2 + 0xc));
  }
  if (*(int *)(param_2 + 8) != 0) {
    iVar10 = FUN_4066f214(*(undefined4 *)(param_2 + 0x10));
  }
  uVar1 = uVar11 >> 1;
  FUN_4067c0f4(1,0,0x403bea88,iVar8,iVar10);
  FUN_4067c0f4(1,0,0x403beaa8,uVar11,uVar7);
  FUN_4067c0f4(1,0,0x403beac8,uVar1,uVar7);
  FUN_4067cd44(0x403beae8);
  FUN_4067cd44(0x403beb04);
  iVar3 = FUN_4067992c();
  piVar6 = *(int **)(iVar3 + 0x10);
  iVar10 = (iVar8 + 0x20) * iVar10 * 2;
  uVar4 = FUN_40674b78();
  uVar4 = FUN_40674bc0(uVar4,iVar10,0,uRam403bdfc0);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_7c,0x403beb1c);
  iVar3 = (**(code **)(*piVar6 + 0x14))(piVar6,auStack_7c,1,&uStack_90);
  if (iVar3 != 0) {
    (**(code **)(*piVar6 + 0x1c))(piVar6,uStack_90,uVar4,iVar10);
    (**(code **)(*piVar6 + 0x18))(piVar6,uStack_90);
  }
  FUN_4067cd44(0x403beb28);
  iVar10 = FUN_403726c8();
  iVar10 = FUN_40626004(*(undefined4 *)(iVar10 + 4));
  iVar3 = FUN_402675cc();
  uStack_54 = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(iVar10 + 0x2da8) = 0x8009;
  *(uint *)(iVar10 + 0x2d48) = uVar1;
  *(short *)(iVar10 + 0x2c84) = (short)uVar1;
  *(short *)(iVar10 + 0x2c86) = (short)uVar7;
  *(undefined2 *)(iVar10 + 0x2c96) = 0;
  *(short *)(iVar10 + 0x2c9a) = (short)uVar1;
  *(short *)(iVar10 + 0x2c9c) = (short)uVar7;
  uVar2 = FUN_40302508(iVar10 + 0x2c68,uVar1);
  *(undefined2 *)(iVar10 + 0x2c92) = uVar2;
  *(undefined4 *)(iVar10 + 0x2db8) = *(undefined4 *)(iVar10 + 0x1cc);
  FUN_4067cd44(0x403beb40);
  FUN_4038abd4(uStack_54,iVar10 + 0x2988,iVar10 + 0x2c68,(undefined4 *)(iVar10 + 0x2da8));
  iVar3 = FUN_4049a740();
  uVar9 = *(undefined4 *)(iVar3 + 0x54);
  FUN_40302040(uVar9,1);
  FUN_4043406c(&uStack_8c);
  uStack_8c = uVar11;
  uStack_88 = uVar7;
  iStack_84 = iVar8 << 1;
  uStack_80 = uVar4;
  FUN_4030233c(uVar9,&uStack_8c);
  FUN_4067cd44(0x403beb5c);
  FUN_4030244c(uVar9,1);
  FUN_4030244c(uVar9,0);
  while( true ) {
    uVar5 = FUN_4062af84();
    iVar8 = FUN_4062b36c(uVar5,0x21);
    if (iVar8 != 1) break;
    FUN_4067ab8c(10);
  }
  FUN_4030247c(uVar9,1);
  FUN_40302040(uVar9,0);
  iVar8 = iRam403beee4;
  FUN_4067e440(auStack_d0,0x403beee8,*(undefined4 *)(iRam403beee4 + 100));
  uVar5 = *(undefined4 *)(iVar10 + 0x2db8);
  iVar3 = (uint)*(ushort *)(iVar10 + 0x2c92) * (uint)*(ushort *)(iVar10 + 0x2c86);
  FUN_4067c0f4(0,0,0x403beefc,*(undefined2 *)(iVar10 + 0x2c84),(uint)*(ushort *)(iVar10 + 0x2c86));
  FUN_4067c0f4(0,0,0x403bef14,uVar5,iVar3);
  uVar9 = FUN_40377fa4();
  FUN_40378478(uVar9,uVar5,iVar3,auStack_d0);
  *(int *)(iVar8 + 100) = *(int *)(iVar8 + 100) + 1;
  FUN_4067c0f4(0,0,0x403bef34);
  uVar9 = FUN_40674b78();
  FUN_40674be0(uVar9,uVar4,uRam403bdfc0);
  FUN_4067cd44(0x403bef64);
  return 0;
}

