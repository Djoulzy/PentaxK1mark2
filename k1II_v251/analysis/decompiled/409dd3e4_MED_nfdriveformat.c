/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_nfdriveformat(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  bool bVar8;
  byte abStack_138 [256];
  uint uStack_38;
  undefined1 auStack_34 [36];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  FUN_40683cc4(abStack_138,0x100);
  pcVar2 = (char *)FUN_406793bc(&uStack_10,param_2);
  if (pcVar2 == (char *)0x0) {
LAB_409dd44c:
    FUN_4067cd44(0x409dd558);
    return 0xffffffff;
  }
  cVar1 = *pcVar2;
  if (cVar1 == 'h') {
    FUN_406833b0(auStack_34,uRam409dd750,0x24);
    FUN_40679338(*param_2,0x409dd754,auStack_34,9);
    return 0xffffffff;
  }
  if (cVar1 == 'J' || cVar1 == 'j') {
    FUN_4067cd44(0x409dd56c);
    bVar7 = 0x4a;
  }
  else if (cVar1 == 'A' || cVar1 == 'a') {
    FUN_4067cd44(0x409dd598);
    bVar7 = 0x41;
  }
  else if (cVar1 == 'B' || cVar1 == 'b') {
    FUN_4067cd44(0x409dd5c4);
    bVar7 = 0x42;
  }
  else {
    if (cVar1 != 'E' && cVar1 != 'e') goto LAB_409dd44c;
    FUN_4067cd44(0x409dd5f0);
    bVar7 = 0x45;
  }
  uStack_38 = (uint)bVar7;
  do {
    iVar4 = FUN_408a594c(abStack_138,0x100);
    if (iVar4 < 0) {
LAB_409dd504:
      uVar5 = FUN_40677b5c();
      uVar5 = FUN_40677c28(uVar5,0x12d);
      if (bVar7 == 0x4a) {
        uVar6 = 0;
      }
      else if (bVar7 == 0x41) {
        uVar6 = 1;
      }
      else if (bVar7 == 0x42) {
        uVar6 = 2;
      }
      else {
        if (bVar7 != 0x45) {
          return 0xffffffff;
        }
        uVar6 = 3;
      }
      iVar4 = FUN_4025c2a8(uVar5,uVar6);
      if (iVar4 == 0) {
        uVar5 = 0x409dd708;
      }
      else {
        uVar5 = 0x409dd72c;
      }
      FUN_4067cd44(uVar5);
      return 0;
    }
    FUN_4067cd44(0x409dd61c);
    uVar3 = FUN_4068312c(abStack_138);
    bVar8 = uVar3 == 1;
    if (bVar8) {
      uVar3 = (uint)abStack_138[0];
    }
    if (bVar8 && uVar3 == 0x79) {
      FUN_4067cd44(0x409dd6c0,&uStack_38);
      goto LAB_409dd504;
    }
    uVar3 = FUN_4068312c(abStack_138);
    bVar8 = uVar3 == 1;
    if (bVar8) {
      uVar3 = (uint)abStack_138[0];
    }
    if (bVar8 && uVar3 == 0x6e) {
      FUN_4067cd44(0x409dd6e4,&uStack_38);
      return 0xffffffff;
    }
    FUN_4067cd44(0x409dd330);
    FUN_4067cd44(0x409dd620,&uStack_38);
  } while( true );
}

