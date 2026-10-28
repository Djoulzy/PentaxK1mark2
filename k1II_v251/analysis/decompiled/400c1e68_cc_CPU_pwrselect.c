/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_CPU_pwrselect(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_400f2070(*(undefined4 *)(param_2 + 4),0x400c1bbc,&uStack_10);
  if (((iVar1 == 1) && (-1 < (int)uStack_10)) && ((int)uStack_10 < 4)) {
    iVar1 = FUN_40091284();
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    FUN_400988b0(uVar2,uStack_10 & 0xff);
    FUN_40098c98(uVar2);
    FUN_40009c8c(0,0,0x400c1f74,uStack_10);
    return 0;
  }
  FUN_40009c8c(0,0,0x400c1f64);
  return 1;
}

