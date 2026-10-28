/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 sdreg(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_20 [3];
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    iVar2 = FUN_4066f1e0(param_2[1],0x409dc7f4);
    uVar3 = uRam409dc7f8;
    if ((iVar2 == 0) ||
       (iVar2 = FUN_4066f1e0(param_2[1],0x409dc7fc), uVar3 = uRam409dc800, iVar2 == 0)) {
      FUN_4026e56c(auStack_20,uVar3);
      FUN_409dbac0(auStack_20);
      FUN_4026e584(auStack_20);
      return 0;
    }
    FUN_4067cd44(0x409dc804,param_2[1]);
  }
  auStack_20[0] = *puRam409dc7e4;
  FUN_40679338(*param_2,0x409dc7e8,auStack_20,1);
  return 0xffffffff;
}

