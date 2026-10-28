/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 serdes_status(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_18)) {
    uVar2 = FUN_40677b5c();
    iVar3 = FUN_40677c28(uVar2,0x130);
    auStack_20[0] = uRam4026e4cc;
    FUN_4067ca30(iVar3 != 0,0x4026e4d0,uRam4026e454,0x216);
    iVar4 = FUN_4066f1e0(param_2[1],0x4026e4dc);
    if (iVar4 == 0) {
      FUN_4026dd2c(iVar3);
      return 0;
    }
    iVar4 = FUN_4066f1e0(param_2[1],0x4026e4e0);
    if (iVar4 == 0) {
      FUN_4026decc(iVar3);
      return 0;
    }
    FUN_4067cd44(0x4026e4e4,param_2[1]);
  }
  auStack_20[0] = *(undefined4 *)(iRam4026e430 + 8);
  FUN_40679338(*param_2,0x4026e4b8,auStack_20,1);
  return 0xffffffff;
}

