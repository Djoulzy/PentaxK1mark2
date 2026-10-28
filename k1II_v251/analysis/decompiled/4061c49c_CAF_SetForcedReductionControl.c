/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAF_SetForcedReductionControl(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 2) {
    iVar1 = FUN_40619bf4();
    iVar2 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
    *(bool *)(iVar1 + 0xea) = iVar2 != 0;
    FUN_4067c0f4(0,0,0x4061c570);
  }
  return 0;
}

