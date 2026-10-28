/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAF_SetBacklashSpeedRatio(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    iVar1 = FUN_404c0eec();
    iVar1 = *(int *)(iVar1 + 4);
    uVar2 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
    *(undefined4 *)(iVar1 + 0xcbb4) = uVar2;
  }
  return 0;
}

