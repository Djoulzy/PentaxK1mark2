/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 DPU_Write(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  if (0 < param_1) {
    FUN_4067c0f4(0,0,0x409ccc24,*(undefined4 *)(param_2 + 4));
    iVar1 = FUN_40211b84(*(undefined4 *)(param_2 + 4),0x409ccc4c,&uStack_10,&uStack_c);
    if (iVar1 == 2) {
      return 0;
    }
  }
  FUN_4067c0f4(0,0,0x409ccc54);
  return 0;
}

