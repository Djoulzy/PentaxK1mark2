/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 serdes_busreset(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  uVar4 = 0;
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_18)) {
    iVar2 = FUN_4036cc28();
    iVar5 = *(int *)(iVar2 + 4);
    auStack_20[0] = uRam4026e4a0;
    FUN_4067ca30(iVar5 != 0,0x4026e458,uRam4026e454,0x1eb);
    iVar2 = FUN_4066f1e0(param_2[1],0x4026e468);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_4066f1e0(param_2[1],0x4026e46c);
      if (iVar2 != 0) {
        FUN_4067cd44(0x4026e4a4,param_2[1]);
        goto LAB_4026e2a0;
      }
      uVar3 = 1;
    }
    FUN_4032fd18(iVar5,uVar3);
  }
  else {
LAB_4026e2a0:
    uVar4 = 0xffffffff;
    auStack_20[0] = *(undefined4 *)(iRam4026e430 + 4);
    FUN_40679338(*param_2,0x4026e488,auStack_20,1);
  }
  return uVar4;
}

