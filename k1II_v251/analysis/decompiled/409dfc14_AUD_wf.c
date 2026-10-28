/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_wf(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 1;
  if ((1 < param_1) && (iVar1 = FUN_40683ba0(*(undefined4 *)(param_2 + 4),0x409dfd04), iVar1 == 0))
  {
    iVar3 = 0;
  }
  FUN_404bfd38();
  uVar2 = FUN_404bfefc();
  FUN_40505e40(uVar2,iVar3);
  if (iVar3 == 0) {
    uVar2 = 0x409dfd1c;
  }
  else {
    uVar2 = 0x409dfd08;
  }
  FUN_4067cd44(uVar2);
  return 0;
}

