/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 IQ_hdrbkup(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_8;
  
  uStack_8 = 0;
  if (2 < param_1) {
    return 0xffffffff;
  }
  if (param_1 < 2) {
    iVar1 = FUN_402fd7a4();
    uVar2 = 0x4099049c;
    uVar3 = (uint)*(byte *)(*(int *)(iVar1 + 0x4c) + 0xd0);
  }
  else {
    FUN_40211b84(*(undefined4 *)(param_2 + 4),0x40990498,&uStack_8);
    if (2 < uStack_8) {
      return 0xffffffff;
    }
    iVar1 = FUN_402fd7a4();
    *(char *)(*(int *)(iVar1 + 0x4c) + 0xd0) = (char)uStack_8;
    uVar2 = 0x409904b8;
    uVar3 = uStack_8;
  }
  FUN_4067cd44(uVar2,uVar3);
  return 0;
}

