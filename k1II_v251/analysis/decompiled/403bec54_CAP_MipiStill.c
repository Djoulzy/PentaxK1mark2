/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_MipiStill(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 auStack_c4 [2];
  undefined1 auStack_bc [32];
  undefined4 uStack_9c;
  undefined1 auStack_94 [64];
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_2c;
  int iStack_28;
  
  uStack_2c = param_1;
  iStack_28 = param_2;
  FUN_406793bc(&uStack_2c);
  FUN_4067cd44(0x403bea70);
  uVar8 = 0xfe0;
  uVar12 = 0x1640;
  iVar10 = 0x17a0;
  iVar11 = 0xfe0;
  if ((*(int *)(param_2 + 4) != 0) && (uVar12 = FUN_4066f214(), 0x1640 < uVar12)) {
    uVar12 = 0x1640;
  }
  if ((*(int *)(param_2 + 8) != 0) && (uVar8 = FUN_4066f214(), 0x1640 < uVar8)) {
    uVar8 = 0x1640;
  }
  if (*(int *)(param_2 + 4) != 0) {
    iVar10 = FUN_4066f214(*(undefined4 *)(param_2 + 0xc));
  }
  if (*(int *)(param_2 + 8) != 0) {
    iVar11 = FUN_4066f214(*(undefined4 *)(param_2 + 0x10));
  }
  uVar1 = uVar12 >> 1;
  FUN_4067c0f4(1,0,0x403bea88,iVar10,iVar11);
  FUN_4067c0f4(1,0,0x403beaa8,uVar12,uVar8);
  FUN_4067c0f4(1,0,0x403beac8,uVar1,uVar8);
  FUN_4067cd44(0x403beae8);
  FUN_4067cd44(0x403beb04);
  iVar4 = FUN_4067992c();
  piVar7 = *(int **)(iVar4 + 0x10);
  iVar11 = (iVar10 + 0x20) * iVar11 * 2;
  uVar5 = FUN_40674b78();
  uVar5 = FUN_40674bc0(uVar5,iVar11,0,uRam403bdfc0);
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_bc,0x403beb1c);
  iVar4 = (**(code **)(*piVar7 + 0x14))(piVar7,auStack_bc,1,auStack_c4);
  if (iVar4 != 0) {
    (**(code **)(*piVar7 + 0x1c))(piVar7,auStack_c4[0],uVar5,iVar11);
    (**(code **)(*piVar7 + 0x18))(piVar7,auStack_c4[0]);
  }
  FUN_4067cd44(0x403beb28);
  iVar11 = FUN_4049a740();
  FUN_403819a4(*(undefined4 *)(iVar11 + 4),2);
  iVar11 = FUN_403726c8();
  iVar11 = FUN_40626004(*(undefined4 *)(iVar11 + 4));
  iVar4 = FUN_402675cc();
  uStack_9c = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(iVar11 + 0x2da8) = 0x8009;
  uVar3 = (undefined2)uVar1;
  *(undefined2 *)(iVar11 + 0x2d92) = uVar3;
  uVar2 = (undefined2)uVar8;
  *(undefined2 *)(iVar11 + 0x2d94) = uVar2;
  *(uint *)(iVar11 + 0x2d48) = uVar1;
  *(undefined2 *)(iVar11 + 0x2c84) = uVar3;
  *(undefined2 *)(iVar11 + 0x2c86) = uVar2;
  *(undefined2 *)(iVar11 + 0x2c96) = 0;
  *(undefined2 *)(iVar11 + 0x2c9a) = uVar3;
  *(undefined2 *)(iVar11 + 0x2c9c) = uVar2;
  uVar3 = FUN_40302508(iVar11 + 0x2c68,uVar1);
  *(undefined2 *)(iVar11 + 0x2c92) = uVar3;
  *(undefined4 *)(iVar11 + 0x2db8) = *(undefined4 *)(iVar11 + 0x1cc);
  FUN_4067cd44(0x403beb40);
  FUN_4038abd4(uStack_9c,iVar11 + 0x2988,iVar11 + 0x2c68,(undefined4 *)(iVar11 + 0x2da8));
  iVar4 = FUN_4049a740();
  uVar9 = *(undefined4 *)(iVar4 + 0x54);
  FUN_40302040(uVar9,1);
  FUN_4043406c(&uStack_54);
  uStack_54 = uVar12;
  uStack_50 = uVar8;
  iStack_4c = iVar10 << 1;
  uStack_48 = uVar5;
  FUN_4030233c(uVar9,&uStack_54);
  FUN_4067cd44(0x403beb5c);
  FUN_4030244c(uVar9,1);
  FUN_4030244c(uVar9,0);
  while( true ) {
    uVar6 = FUN_4062af84();
    iVar10 = FUN_4062b36c(uVar6,0x21);
    if (iVar10 != 1) break;
    FUN_4067ab8c(10);
  }
  FUN_4030247c(uVar9,1);
  FUN_40302040(uVar9,0);
  iVar10 = iRam403beee4;
  FUN_4067e440(auStack_94,0x403beee8,*(undefined4 *)(iRam403beee4 + 0x68));
  uVar6 = *(undefined4 *)(iVar11 + 0x2db8);
  iVar4 = (uint)*(ushort *)(iVar11 + 0x2c92) * (uint)*(ushort *)(iVar11 + 0x2c86);
  FUN_4067c0f4(0,0,0x403beefc,*(undefined2 *)(iVar11 + 0x2c84),(uint)*(ushort *)(iVar11 + 0x2c86));
  FUN_4067c0f4(0,0,0x403bef14,uVar6,iVar4);
  uVar9 = FUN_40377fa4();
  FUN_40378478(uVar9,uVar6,iVar4,auStack_94);
  *(int *)(iVar10 + 0x68) = *(int *)(iVar10 + 0x68) + 1;
  FUN_4067c0f4(0,0,0x403bef34);
  uVar9 = FUN_40674b78();
  FUN_40674be0(uVar9,uVar5,uRam403bf574);
  FUN_4067cd44(0x403bef64);
  return 0;
}

