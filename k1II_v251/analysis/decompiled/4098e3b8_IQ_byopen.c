/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 IQ_byopen(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    FUN_4067cd44(0x4098e740);
  }
  else {
    uVar1 = FUN_4098d8e0();
    iVar2 = FUN_4098e000(uVar1,*(undefined4 *)(param_2 + 4));
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xffffffff;
}

