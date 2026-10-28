/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SW_rd(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uStack_10;
  
  uVar2 = 1;
  uStack_10 = param_4;
  if (1 < param_1) {
    cVar1 = FUN_400f21f8(param_2[1],0);
    uVar2 = (uint)cVar1;
    if (uVar2 == 0) {
      uStack_10 = *(undefined4 *)(iRam400bffe8 + 0x5c);
      FUN_4000af54(*param_2,0x400c0c64,&uStack_10,1);
      return 0xffffffff;
    }
  }
  FUN_400bfd0c(0x2b,uVar2 & 0xff);
  return 0;
}

