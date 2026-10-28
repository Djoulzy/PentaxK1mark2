/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAF_SetDriveSpeedRatio(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    iVar2 = FUN_404c0eec();
    iVar2 = *(int *)(iVar2 + 4);
    uVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
    *(undefined1 *)(iVar2 + 0xcbb0) = uVar1;
  }
  return 0;
}

