/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_dmafill(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_1c);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (param_2[1] == 0) {
      uVar8 = 0x2800000;
    }
    else {
      uVar8 = FUN_4020c174(param_2[1],0);
    }
    uVar2 = FUN_4067825c();
    piVar3 = (int *)FUN_40678400(uVar2,uVar8,0);
    uVar2 = FUN_4067825c();
    iVar4 = FUN_40678400(uVar2,uVar8,0);
    if (piVar3 != (int *)0x0 && iVar4 != 0) {
      FUN_4067cd44(0x409ce514,uVar8);
      FUN_4067cd44(0x409ce8c8);
      FUN_4020f00c(iVar4,uVar8,0xaa);
      FUN_4067944c(piVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      *(char *)piVar3 = -0x56;
      FUN_4020f00c(iVar4,uVar8,0xaa);
      FUN_4067cd44(0x409ce8d8);
      FUN_4067944c(piVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      FUN_4067cd44(0x409ce544);
      for (uVar7 = 0; uVar7 < uVar8; uVar7 = uVar7 + 1) {
        if ((char)*piVar3 != *(char *)(iVar4 + uVar7)) {
          FUN_4067cd44(0x409ce8e8,uVar7,*(undefined1 *)(iVar4 + uVar7));
          uVar2 = 0x409ce580;
          goto LAB_409ce750;
        }
      }
      uVar2 = 0x409ce550;
LAB_409ce750:
      FUN_4067cd44(0x409ce908,uVar2);
      FUN_4067cd44(0x409ce914);
      FUN_4020f00c(iVar4,uVar8,0xcc);
      FUN_4067944c(piVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      uVar2 = FUN_40677b5c();
      uVar2 = FUN_40677c28(uVar2,0xda);
      *piVar3 = iRam409ce928;
      FUN_406759e8();
      FUN_406759f0();
      iVar5 = FUN_4031a7b8(uVar2,piVar3,iVar4,uVar8,0x20000,1);
      FUN_4067cd44(0x409ce92c);
      FUN_4067944c(piVar3,0x100,1);
      FUN_4067944c(iVar4,0x100,1);
      FUN_4067cd44(0x409ce544);
      uVar7 = 0;
      do {
        if (uVar8 >> 2 <= uVar7) {
          if (iVar5 == 0) {
LAB_409ce88c:
            uVar2 = 0x409ce580;
          }
          else {
            uVar2 = 0x409ce550;
          }
          FUN_4067cd44(0x409ce950,uVar2);
          uVar2 = FUN_4067825c();
          FUN_40678550(uVar2,iVar4,0xffffffff,0);
          uVar2 = FUN_4067825c();
          FUN_40678550(uVar2,piVar3,0xffffffff,0);
          return 0;
        }
        iVar6 = *(int *)(iVar4 + uVar7 * 4);
        if (*piVar3 != iVar6) {
          FUN_4067cd44(0x409ce8e8,uVar7,iVar6);
          goto LAB_409ce88c;
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
    FUN_4067cd44(0x409ce5b8,piVar3,iVar4);
  }
  uStack_20 = *(undefined4 *)(iRam409cde4c + 0xc);
  FUN_40679338(*param_2,0x409ce940,&uStack_20,1);
  return 0xffffffff;
}

