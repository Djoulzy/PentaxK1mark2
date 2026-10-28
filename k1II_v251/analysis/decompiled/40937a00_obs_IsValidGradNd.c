/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 obs_IsValidGradNd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4095bfa0(param_1 + 8,0x73,param_3,param_4,param_4);
  switch(uVar1) {
  case 0:
    return 0;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    FUN_4067ca30(0,0x40937c4c,uRam40937c48,0x29e,uRam40937c44);
    return 0;
  }
  return 1;
}

