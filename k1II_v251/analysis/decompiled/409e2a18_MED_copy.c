/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_copy(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_44 [16];
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  
  iStack_24 = param_1;
  puStack_20 = param_2;
  FUN_40636018(auStack_44);
  iVar9 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  pcVar2 = (char *)FUN_406793bc(&iStack_24,param_2);
  if (((pcVar2 != (char *)0x0) && (*pcVar2 == 'h')) || (iStack_24 < 3)) {
    uStack_28 = *(undefined4 *)(iRam409e2c7c + 0x20);
    FUN_40679338(*param_2,0x409e313c,&uStack_28,1);
    goto LAB_409e2e18;
  }
  iVar3 = FUN_4067992c();
  piVar7 = *(int **)(iVar3 + 0x10);
  FUN_4067ca30(piVar7 != (int *)0x0,uRam409e1ee4,uRam409e1ee0,0x2fa,uRam409e2c9c);
  iVar3 = FUN_406358a4(piVar7,param_2[2],auStack_44);
  if (iVar3 == 0) {
    uVar4 = 0x409e2ca0;
LAB_409e2b34:
    FUN_4067cd44(uVar4);
  }
  else {
    iVar3 = (**(code **)(*piVar7 + 0x14))(piVar7,param_2[1],1,&uStack_30);
    if (iVar3 == 0) {
      FUN_40635960(piVar7);
      uVar6 = FUN_409e1684();
      uVar4 = 0x409e2ce8;
    }
    else {
      iVar3 = (**(code **)(*piVar7 + 0x14))(piVar7,param_2[2],0,&uStack_2c);
      if (iVar3 == 0) {
        FUN_40635960(piVar7);
        uVar6 = FUN_409e1684();
        uVar4 = 0x409e2d0c;
      }
      else {
        iVar3 = (**(code **)(*piVar7 + 0x28))(piVar7,uStack_30,&uStack_34);
        if (iVar3 == 0) {
          FUN_40635960(piVar7);
          uVar6 = FUN_409e1684();
          uVar4 = 0x409e2d34;
        }
        else {
          iVar3 = FUN_4063604c(auStack_44);
          uVar1 = uRam409e226c;
          if ((uint)(iVar3 * 0x400) < uStack_34) {
            uVar4 = 0x409e2cbc;
            goto LAB_409e2b34;
          }
          uVar4 = FUN_406832d8(uRam409e226c);
          for (; uStack_34 != 0; uStack_34 = uStack_34 - uVar8) {
            uVar8 = uStack_34;
            if (uVar1 < uStack_34) {
              uVar8 = uVar1;
            }
            iVar3 = (**(code **)(*piVar7 + 0x1c))(piVar7,uStack_30,uVar4,uVar8);
            if (iVar3 == 0) {
              FUN_40635960(piVar7);
              uVar6 = FUN_409e1684();
              uVar5 = 0x409e309c;
LAB_409e2dd8:
              FUN_4067cd44(uVar5,iVar9,uVar6);
              FUN_40683358(uVar4);
              goto LAB_409e2e18;
            }
            iVar3 = (**(code **)(*piVar7 + 0x20))(piVar7,uStack_2c,uVar4,uVar8);
            if (iVar3 == 0) {
              FUN_40635960(piVar7);
              uVar6 = FUN_409e1684();
              uVar5 = 0x409e30c8;
              goto LAB_409e2dd8;
            }
            iVar9 = iVar9 + 1;
          }
          FUN_40683358(uVar4);
          iVar9 = (**(code **)(*piVar7 + 0x18))(piVar7,uStack_30);
          if (iVar9 == 0) {
            FUN_40635960(piVar7);
            uVar6 = FUN_409e1684();
            uVar4 = 0x409e30f8;
          }
          else {
            iVar9 = (**(code **)(*piVar7 + 0x18))(piVar7,uStack_2c);
            if (iVar9 != 0) {
              FUN_4067cd44(0x409e2d58);
              FUN_4067cd44(0x409e2d74,param_2[1]);
              FUN_4067cd44(0x409e2d8c,param_2[2]);
              FUN_40636030(auStack_44);
              return 0;
            }
            FUN_40635960(piVar7);
            uVar6 = FUN_409e1684();
            uVar4 = 0x409e3118;
          }
        }
      }
    }
    FUN_4067cd44(uVar4,uVar6);
  }
LAB_409e2e18:
  FUN_40636030(auStack_44);
  return 0xffffffff;
}

