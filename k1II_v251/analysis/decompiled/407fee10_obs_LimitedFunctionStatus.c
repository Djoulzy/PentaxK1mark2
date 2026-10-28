/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_LimitedFunctionStatus(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  
  uVar2 = obs_GetSpecModel();
  iVar3 = FUN_407fea08(param_2);
  uVar1 = *(undefined1 *)(iRam407fec5c + iVar3 * 0x10);
  iVar3 = obs_GetFeatureAvailability(uVar2,uVar1);
  if (iVar3 == 0) {
    sVar4 = 0x241;
  }
  else {
    iVar3 = obs_IsFeatureTrialActive(uVar2,uVar1);
    if (iVar3 == 0) {
      sVar4 = 0;
    }
    else {
      sVar4 = 0x31;
    }
  }
  iVar3 = FUN_405f603c(param_1,uRam407ff128);
  if (*(short *)(iVar3 + 0x108) == sVar4) {
    return;
  }
  *(short *)(iVar3 + 0x108) = sVar4;
  *(undefined1 *)(iVar3 + 0x105) = 1;
  return;
}

