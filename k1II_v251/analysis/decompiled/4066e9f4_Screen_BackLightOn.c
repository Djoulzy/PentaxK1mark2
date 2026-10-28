/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 Screen_BackLightOn(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (1 < param_1) {
    cVar1 = FUN_4020b80c(*(undefined4 *)(param_2 + 4),0);
    if (cVar1 == '\0') {
      uVar2 = FUN_40669e34();
      FUN_4066a2b4(uVar2,0);
    }
    else {
      FUN_40669e34();
      FUN_4066ae4c();
    }
    uVar2 = 0;
  }
  return uVar2;
}

