/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_mictest(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r8;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_28;
  uint uStack_24;
  
  iVar3 = 1;
  uVar2 = 100;
  uVar6 = 10;
  if ((1 < param_1) && (**(char **)(param_2 + 4) == '2')) {
    iVar3 = 2;
  }
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (2 < param_1) {
    uVar2 = FUN_4066f214(*(undefined4 *)(param_2 + 8));
  }
  if (3 < param_1) {
    uVar6 = FUN_4066f214(*(undefined4 *)(param_2 + 0xc));
  }
  FUN_4067cd44(0x409cb3f8,iVar3);
  FUN_4067cd44(0x409cb410,uVar2);
  FUN_4067cd44(0x409cb424,uVar6);
  FUN_4067cd44(0x409cb438);
  iVar1 = FUN_409b6e58();
  uVar7 = *(undefined4 *)(iVar1 + 4);
  if (iVar3 != 1) {
    unaff_r8 = 0;
  }
  iVar4 = 0;
  iVar1 = 0;
  if (iVar3 != 1) {
    for (; unaff_r8 < uVar2; unaff_r8 = unaff_r8 + 1) {
      FUN_408bdccc(uVar7);
      FUN_4067ab8c(uVar6);
      uStack_28 = uStack_28 & 0xffffff00;
      uStack_24 = uStack_24 & 0xffffff00;
      FUN_408bdd38(uVar7,&uStack_28,&uStack_24);
      FUN_4067cd44(0x409cb464,unaff_r8,uStack_28 & 0xff,uStack_24 & 0xff);
      iVar1 = iVar1 + (uStack_24 & 0xff);
      iVar4 = iVar4 + (uStack_28 & 0xff);
      FUN_408bdd00(uVar7);
    }
  }
  else {
    FUN_408bdccc(uVar7);
    for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
      FUN_4067ab8c(uVar6);
      uStack_28 = uStack_28 & 0xffffff00;
      uStack_24 = uStack_24 & 0xffffff00;
      FUN_408bdd38(uVar7,&uStack_28,&uStack_24);
      FUN_4067cd44(0x409cb464,uVar5,uStack_28 & 0xff,uStack_24 & 0xff);
      iVar4 = iVar4 + (uStack_28 & 0xff);
      iVar1 = iVar1 + (uStack_24 & 0xff);
    }
    FUN_408bdd00(uVar7);
  }
  uVar6 = FUN_40683b6c(iVar4,uVar2);
  uVar7 = FUN_40683b6c(iVar1,uVar2);
  FUN_4067cd44(0x409cb438);
  FUN_4067cd44(0x409cb484,uVar6,uVar7);
  FUN_4067cd44(0x409cb438);
  FUN_4067cd44(0x409cb4a4);
  return 0;
}

