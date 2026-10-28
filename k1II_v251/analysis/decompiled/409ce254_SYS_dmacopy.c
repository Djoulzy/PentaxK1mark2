/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_dmacopy(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 auStack_24 [2];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_1c);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (param_2[1] == 0) {
      uVar9 = 0x2800000;
    }
    else {
      uVar9 = FUN_4020c174(param_2[1],0);
    }
    uVar2 = FUN_4067825c();
    iVar3 = FUN_40678400(uVar2,uVar9,0);
    uVar2 = FUN_4067825c();
    iVar4 = FUN_40678400(uVar2,uVar9,0);
    if (iVar3 != 0 && iVar4 != 0) {
      FUN_4067cd44(0x409ce514,uVar9);
      FUN_4067cd44(0x409ce524);
      FUN_4020f00c(iVar4,uVar9,0xaa);
      FUN_4067944c(iVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      FUN_406833b0(iVar4,iVar3,uVar9);
      FUN_4067cd44(0x409ce534);
      FUN_4067944c(iVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      FUN_4067cd44(0x409ce544);
      for (uVar7 = 0; uVar7 < uVar9 >> 2; uVar7 = uVar7 + 1) {
        if (*(int *)(iVar3 + uVar7 * 4) != *(int *)(iVar4 + uVar7 * 4)) {
          FUN_4067cd44(0x409ce554,uVar7,*(undefined4 *)(iVar3 + uVar7 * 4),
                       *(undefined4 *)(iVar4 + uVar7 * 4));
          uVar2 = 0x409ce580;
          goto LAB_409ce3a4;
        }
      }
      uVar2 = 0x409ce550;
LAB_409ce3a4:
      FUN_4067cd44(0x409ce584,uVar2);
      FUN_4067cd44(0x409ce590);
      FUN_4020f00c(iVar4,uVar9,0xcc);
      FUN_4067944c(iVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      uVar2 = FUN_40677b5c();
      uVar2 = FUN_40677c28(uVar2,0xda);
      FUN_406759e8();
      FUN_406759f0();
      iVar5 = FUN_4031a288(uVar2,iVar3,iVar4,uVar9,1);
      FUN_4067cd44(0x409ce5a4);
      FUN_4067944c(iVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      FUN_4067cd44(0x409ce544);
      uVar7 = 0;
      do {
        if (uVar9 >> 2 <= uVar7) {
          if (iVar5 == 0) {
LAB_409ce4d8:
            uVar2 = 0x409ce580;
          }
          else {
            uVar2 = 0x409ce550;
          }
          FUN_4067cd44(0x409ce5ec,uVar2);
          uVar2 = FUN_4067825c();
          FUN_40678550(uVar2,iVar4,0xffffffff,0);
          uVar2 = FUN_4067825c();
          FUN_40678550(uVar2,iVar3,0xffffffff,0);
          return 0;
        }
        iVar6 = *(int *)(iVar3 + uVar7 * 4);
        iVar8 = *(int *)(iVar4 + uVar7 * 4);
        if (iVar6 != iVar8) {
          FUN_4067cd44(0x409ce554,uVar7,iVar6,iVar8);
          goto LAB_409ce4d8;
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
    FUN_4067cd44(0x409ce5b8,iVar3,iVar4);
  }
  auStack_24[0] = *(undefined4 *)(iRam409cde4c + 8);
  FUN_40679338(*param_2,0x409ce5dc,auStack_24,1);
  return 0xffffffff;
}

