/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_nfformat(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  byte abStack_118 [256];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  FUN_40683cc4(abStack_118,0x100);
  pcVar1 = (char *)FUN_406793bc(&uStack_10,param_2);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == 'h') {
      uStack_18 = *(undefined4 *)(iRam409dcb40 + 0x30);
      uStack_14 = *(undefined4 *)(iRam409dcb40 + 0x34);
      FUN_40679338(*param_2,0x409dd544,&uStack_18,2);
      return 0xffffffff;
    }
    if (*pcVar1 == 'y') {
LAB_409dd274:
      FUN_4067cd44(0x409dd348);
      goto LAB_409dd27c;
    }
  }
  while( true ) {
    FUN_4067cd44(0x409dd30c);
    iVar2 = FUN_408a594c(abStack_118,0x100);
    if (iVar2 < 0) break;
    FUN_4067cd44(0x409dd00c);
    uVar3 = FUN_4068312c(abStack_118);
    bVar5 = uVar3 == 1;
    if (bVar5) {
      uVar3 = (uint)abStack_118[0];
    }
    if (bVar5 && uVar3 == 0x79) goto LAB_409dd274;
    uVar3 = FUN_4068312c(abStack_118);
    bVar5 = uVar3 == 1;
    if (bVar5) {
      uVar3 = (uint)abStack_118[0];
    }
    if (bVar5 && uVar3 == 0x6e) {
      FUN_4067cd44(0x409dd3a0);
      return 0xffffffff;
    }
    FUN_4067cd44(0x409dd330);
  }
LAB_409dd27c:
  uVar4 = FUN_40677b5c();
  FUN_40677c28(uVar4,0x12d);
  iVar2 = FUN_4025c280();
  if (iVar2 == 0) {
    uVar4 = 0x409dd364;
  }
  else {
    uVar4 = 0x409dd384;
  }
  FUN_4067cd44(uVar4);
  return 0;
}

