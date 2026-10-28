/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 IQ_dfswap(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iStack_8;
  
  bVar2 = param_1 == 1;
  if (bVar2) {
    param_1 = 1;
  }
  iStack_8 = 0;
  if (bVar2) {
    iStack_8 = param_1;
  }
  else if ((param_1 != 2) ||
          (iVar1 = FUN_4098f48c(&iStack_8,*(undefined4 *)(param_2 + 4)), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_402fd7a4();
  FUN_406851f8(*(undefined4 *)(iVar1 + 0x4c),iStack_8);
  return 0;
}

