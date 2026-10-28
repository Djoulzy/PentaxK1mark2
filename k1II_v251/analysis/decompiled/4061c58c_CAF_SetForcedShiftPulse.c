/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAF_SetForcedShiftPulse(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    iVar1 = FUN_40619bf4();
    uVar2 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
    *(undefined4 *)(iVar1 + 0xec) = uVar2;
    FUN_4067c0f4(0,0,0x4061c5d4,uVar2);
  }
  return 0;
}

