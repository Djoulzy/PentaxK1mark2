/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 IQ_hdrtest(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = 0xffffffff;
  uStack_14 = 0xffffffff;
  uStack_10 = 1;
  if (param_1 < 2) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_40211b84(*(undefined4 *)(param_2 + 4),0x40990498,&uStack_14);
    if (2 < param_1) {
      FUN_40211b84(*(undefined4 *)(param_2 + 8),0x40990498,&uStack_18);
    }
    if (3 < param_1) {
      FUN_40211b84(*(undefined4 *)(param_2 + 0xc),0x40990498,&uStack_10);
    }
    uVar1 = FUN_4098d8e0();
    FUN_4098fcf4(uVar1,uStack_18,uStack_14,uStack_10);
    uVar1 = 0;
  }
  return CONCAT44(uStack_18,uVar1);
}

