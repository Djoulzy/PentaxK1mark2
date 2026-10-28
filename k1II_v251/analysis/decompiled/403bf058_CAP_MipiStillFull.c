/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_MipiStillFull(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [64];
  uint auStack_a4 [3];
  int iStack_98;
  int iStack_94;
  undefined4 uStack_8c;
  uint uStack_7c;
  undefined1 auStack_78 [44];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_406793bc(&uStack_2c);
  FUN_4067cd44(uRam403bf578);
  uStack_7c = 0x17a0;
  uStack_e8 = 0xfe0;
  iVar3 = FUN_403726c8();
  iVar3 = FUN_40626004(*(undefined4 *)(iVar3 + 4));
  iVar4 = FUN_402675cc();
  uStack_8c = *(undefined4 *)(iVar4 + 0xc);
  FUN_4067cd44(uRam403bf57c);
  iVar4 = FUN_4067992c();
  uVar9 = uRam403bf580;
  piVar8 = *(int **)(iVar4 + 0x10);
  uVar5 = FUN_40674b78();
  iVar4 = FUN_40674bc0(uVar5,uVar9,0,uRam403bf574);
  iStack_94 = iVar4;
  FUN_406759e8();
  FUN_406759f0();
  FUN_4067e440(auStack_78,uRam403bf584);
  iVar6 = (**(code **)(*piVar8 + 0x14))(piVar8,auStack_78,1,&uStack_ec);
  if (iVar6 != 0) {
    (**(code **)(*piVar8 + 0x1c))(piVar8,uStack_ec,iVar4,uVar9);
    (**(code **)(*piVar8 + 0x18))(piVar8,uStack_ec);
  }
  FUN_4067cd44(uRam403bf588);
  iVar6 = FUN_4049a740();
  FUN_403819a4(*(undefined4 *)(iVar6 + 4),2);
  iVar6 = *(int *)(iVar3 + 0x1cc);
  iVar10 = 0;
  iStack_4c = uStack_7c << 1;
  iStack_44 = (uStack_7c & 0x7fff) << 1;
  iStack_48 = iVar3 + 0x2988;
  iStack_40 = iVar6;
  do {
    uVar11 = 0x1640;
    while( true ) {
      iStack_38 = iStack_4c;
      uVar1 = uVar11 >> 1;
      FUN_4067c0f4(1,0,uRam403bf58c,uStack_7c,uStack_e8);
      FUN_4067c0f4(1,0,uRam403bf590,uVar11,0xfe0);
      FUN_4067c0f4(1,0,uRam403bf594,uVar1,0xfe0);
      FUN_4067cd44(uRam403bf598);
      if (iVar10 != 0) {
        if (iVar10 == 1) {
          iVar6 = iVar6 + 0x1640;
        }
        else if (iVar10 == 2) {
          iVar6 = iVar6 + 0xc80;
        }
      }
      *(undefined4 *)(iVar3 + 0x2da8) = 0x8009;
      uVar2 = (undefined2)uVar1;
      *(undefined2 *)(iVar3 + 0x2d92) = uVar2;
      *(undefined2 *)(iVar3 + 0x2d94) = 0xfe0;
      *(uint *)(iVar3 + 0x2d48) = uVar1;
      *(undefined2 *)(iVar3 + 0x2c84) = uVar2;
      *(undefined2 *)(iVar3 + 0x2c86) = 0xfe0;
      *(undefined2 *)(iVar3 + 0x2c96) = 0;
      *(undefined2 *)(iVar3 + 0x2c9a) = uVar2;
      *(undefined2 *)(iVar3 + 0x2c9c) = 0xfe0;
      *(short *)(iVar3 + 0x2c92) = (short)iStack_44;
      uVar9 = uRam403bf59c;
      *(int *)(iVar3 + 0x2db8) = iVar6;
      FUN_4067cd44(uVar9);
      FUN_4038abd4(uStack_8c,iStack_48,iVar3 + 0x2c68,(undefined4 *)(iVar3 + 0x2da8));
      iVar7 = FUN_4049a740();
      uVar9 = *(undefined4 *)(iVar7 + 0x54);
      FUN_40302040(uVar9,1);
      if (iVar10 != 0) {
        if (iVar10 == 1) {
          iVar4 = iVar4 + 0x1640;
        }
        else if (iVar10 == 2) {
          iVar4 = iVar4 + 0xc80;
        }
      }
      FUN_4043406c(auStack_a4);
      auStack_a4[1] = 0xfe0;
      auStack_a4[2] = iStack_38;
      auStack_a4[0] = uVar11;
      iStack_98 = iVar4;
      FUN_4030233c(uVar9,auStack_a4);
      FUN_4067cd44(uRam403bf5a0);
      FUN_4030244c(uVar9,1);
      FUN_4030244c(uVar9,0);
      while( true ) {
        uVar5 = FUN_4062af84();
        iVar7 = FUN_4062b36c(uVar5,0x21);
        if (iVar7 != 1) break;
        FUN_4067ab8c(10);
      }
      FUN_4030247c(uVar9,1);
      FUN_40302040(uVar9,0);
      iVar7 = iRam403beee4;
      iVar10 = iVar10 + 1;
      if (2 < iVar10) {
        *(int *)(iVar3 + 0x2db8) = iStack_40;
        FUN_4067e440(auStack_e4,uRam403bf5a4,*(undefined4 *)(iVar7 + 0x6c));
        uVar5 = *(undefined4 *)(iVar3 + 0x2db8);
        iVar3 = (int)(short)iStack_4c * (int)(short)uStack_e8;
        FUN_4067c0f4(0,0,uRam403bf5a8,uStack_7c,uStack_e8);
        FUN_4067c0f4(0,0,uRam403bf5ac,uVar5,iVar3);
        uVar9 = FUN_40377fa4();
        FUN_40378478(uVar9,uVar5,iVar3,auStack_e4);
        uVar9 = uRam403bf5b0;
        *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + 1;
        FUN_4067c0f4(0,0,uVar9);
        uVar9 = FUN_40674b78();
        FUN_40674be0(uVar9,iStack_94,uRam403bf574);
        FUN_4067cd44(uRam403bf5b4);
        return 0;
      }
      if (iVar10 == 0) break;
      if (iVar10 == 1 || iVar10 == 2) {
        uVar11 = 0xc80;
      }
    }
  } while( true );
}

