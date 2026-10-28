/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_dmacopyrect(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  
  uStack_2c = param_1;
  puStack_28 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_2c);
  uVar11 = 0x870;
  iVar10 = 1;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (param_2[1] == 0) {
      uVar3 = uRam409ceb2c;
    }
    else {
      uVar3 = thunk_FUN_4020c174(param_2[1],0);
    }
    uVar4 = FUN_4067825c();
    iVar5 = FUN_40678400(uVar4,uVar3,0);
    uVar4 = FUN_4067825c();
    iVar6 = FUN_40678400(uVar4,uVar3,0);
    if (iVar5 != 0 && iVar6 != 0) {
      FUN_4067cd44(0x409ceb30,0xf00);
      FUN_4067cd44(0x409ceb4c,uVar11);
      FUN_4067cd44(0x409ceb68,0x10);
      FUN_4067cd44(0x409ceb84,0x10);
      FUN_4067cd44(0x409ceba0,0xb40);
      FUN_4067cd44(0x409cebbc,0x654);
      FUN_4067cd44(0x409cebd8);
      FUN_4020f00c(iVar6,uVar3,0xaa);
      FUN_4067944c(iVar5,0x100,1);
      FUN_4067944c(iVar6,0x100,1);
      uVar9 = 0;
      do {
        FUN_40683ff4(uVar9 * 0xb40 + iVar6,(uVar9 + 0x10) * 0xf00 + iVar5 + 0x10,0xb40);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x654);
      FUN_4067cd44(0x409cebec);
      FUN_4067944c(iVar5,0x100,1);
      FUN_4067944c(iVar6,0x100,1);
      FUN_4067cd44(uRam409cec00);
      uVar9 = 0;
      do {
        uVar8 = 0;
        iVar7 = (uVar9 + 0x10) * 0xf00 + iVar5 + 0x10;
        do {
          cVar1 = *(char *)(uVar9 * 0xb40 + iVar6 + uVar8);
          if (*(char *)(iVar7 + uVar8) != cVar1) {
            FUN_4067cd44(0x409cec04,uVar9,uVar8,*(undefined1 *)(iVar7 + uVar8),cVar1);
            goto LAB_409ceca0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < 0xb40);
        if (iVar10 == 0) {
LAB_409ceca0:
          uVar4 = 0x409cee3c;
          goto LAB_409ceca4;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x654);
      uVar4 = 0x409cee38;
LAB_409ceca4:
      FUN_4067cd44(0x409cee40,uVar4);
      FUN_4067cd44(0x409cee50);
      FUN_4020f00c(iVar6,uVar3,0xcc);
      FUN_4067944c(iVar5,0x100,1);
      FUN_4067944c(iVar6,0x100,1);
      uVar3 = FUN_40677b5c();
      uVar3 = FUN_40677c28(uVar3,0xda);
      FUN_406759e8();
      FUN_406759f0();
      iVar10 = FUN_4031a414(uVar3,iVar5,iVar6,0xf00,uVar11,0x10,0x10,0xb40,0x654,1);
      FUN_4067cd44(0x409cee64);
      FUN_4067944c(iVar5,0x100,1);
      FUN_4067944c(iVar6,0x100,1);
      FUN_4067cd44(uRam409cec00);
      uVar9 = 0;
      while( true ) {
        uVar8 = 0;
        iVar7 = (uVar9 + 0x10) * 0xf00 + iVar5 + 0x10;
        do {
          cVar1 = *(char *)(uVar9 * 0xb40 + iVar6 + uVar8);
          if (*(char *)(iVar7 + uVar8) != cVar1) {
            FUN_4067cd44(0x409cec04,uVar9,uVar8,*(undefined1 *)(iVar7 + uVar8),cVar1);
            goto LAB_409ceddc;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < 0xb40);
        if (iVar10 == 0) break;
        uVar9 = uVar9 + 1;
        if (0x653 < uVar9) {
          uVar11 = 0x409cee38;
LAB_409cede0:
          FUN_4067cd44(0x409cee78,uVar11);
          uVar11 = FUN_4067825c();
          FUN_40678550(uVar11,iVar6,0xffffffff,0);
          uVar11 = FUN_4067825c();
          FUN_40678550(uVar11,iVar5,0xffffffff,0);
          return 0;
        }
      }
LAB_409ceddc:
      uVar11 = 0x409cee3c;
      goto LAB_409cede0;
    }
    FUN_4067cd44(uRam409cee20,iVar5,iVar6);
  }
  uStack_30 = *(undefined4 *)(iRam409cde4c + 0x10);
  FUN_40679338(*param_2,0x409cee24,&uStack_30,1);
  return 0xffffffff;
}

