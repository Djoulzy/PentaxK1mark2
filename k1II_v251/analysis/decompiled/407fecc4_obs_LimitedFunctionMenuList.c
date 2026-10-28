/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

void obs_LimitedFunctionMenuList(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  uVar3 = obs_GetSpecModel();
  iVar4 = FUN_407fea08(param_2);
  iVar5 = iRam407fec5c;
  uVar1 = *(undefined1 *)(iRam407fec5c + iVar4 * 0x10 + 1);
  iVar4 = FUN_407fea08(param_2);
  uVar2 = *(undefined1 *)(iVar5 + iVar4 * 0x10);
  iVar5 = obs_GetFeatureAvailability(uVar3,uVar1);
  if ((iVar5 == 0) || (iVar5 = obs_IsFeatureActivatable(uVar3,uVar2), iVar5 == 0)) {
    uVar7 = 0;
  }
  piVar6 = (int *)FUN_405f603c(param_1,uRam407ff114);
                    /* WARNING: Could not recover jumptable at 0x407fed44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0xc))(piVar6,uVar7);
  return;
}

