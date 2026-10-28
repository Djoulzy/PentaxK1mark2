/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_finfo(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [13];
  undefined1 uStack_37;
  undefined4 uStack_34;
  undefined1 auStack_24 [8];
  undefined4 auStack_1c [2];
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  FUN_40677f14(auStack_48);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_4067a1f4(auStack_24,*puRam409e1f38,1);
  pcVar2 = (char *)FUN_406793bc(&uStack_14,param_2);
  piVar1 = piRam409e1744;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (*piRam409e1744 != 0) {
      iVar3 = FUN_4067992c();
      iVar7 = *(int *)(iVar3 + 0x10);
      uStack_58 = uRam409e1f3c;
      FUN_4067ca30(iVar7 != 0,uRam409e1ee4,uRam409e1ee0,0x131);
      iVar3 = FUN_40635378(iVar7,*piVar1,auStack_48);
      if (iVar3 == 0) {
        FUN_40635960(iVar7);
        uVar4 = FUN_409e1684();
        FUN_4067cd44(0x409e2228,uVar4);
      }
      else {
        FUN_409fd634(&uStack_58,auStack_48);
        FUN_4067a224(auStack_24,&uStack_58);
        FUN_4067a220(&uStack_58);
        FUN_4067cd44(0x409e1f40);
        FUN_4067cd44(0x409e1f60,auStack_44);
        FUN_4067cd44(0x409e1f7c,uStack_37);
        FUN_4067cd44(0x409e1f98,uStack_34);
        FUN_4067cd44(0x409e1fb4);
        uVar4 = FUN_4067a3d4(auStack_24);
        uVar5 = FUN_4067a3cc(auStack_24);
        uVar6 = FUN_4067a3c4(auStack_24);
        FUN_4067cd44(0x409e1fcc,uVar6,uVar5,uVar4);
        uVar4 = FUN_4067a468(auStack_24);
        uVar5 = FUN_4067a460(auStack_24);
        uVar6 = FUN_4067a458(auStack_24);
        FUN_4067cd44(0x409e1fe0,uVar6,uVar5,uVar4);
      }
      FUN_4067a220(auStack_24);
      FUN_40677f78(auStack_48);
      return 0;
    }
    FUN_4067cd44(0x409e1f00);
  }
  else {
    auStack_1c[0] = *(undefined4 *)(iRam409e17d4 + 4);
    FUN_40679338(*param_2,0x409e2244,auStack_1c,1);
  }
  FUN_4067a220(auStack_24);
  FUN_40677f78(auStack_48);
  return 0xffffffff;
}

