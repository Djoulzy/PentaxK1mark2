/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 Screen_SetBackLight(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (1 < param_1) {
    uVar1 = FUN_4020b80c(*(undefined4 *)(param_2 + 4),0);
    iVar2 = FUN_40669e34();
    FUN_405eea3c(*(undefined4 *)(iVar2 + 0x9c4),uVar1);
    uVar3 = 0;
    FUN_4067cd44(0x4066e9e8,uVar1);
  }
  return uVar3;
}

