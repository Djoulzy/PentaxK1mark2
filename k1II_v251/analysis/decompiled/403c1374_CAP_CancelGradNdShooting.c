/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_CancelGradNdShooting(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_4067cd44(0x403c14ec);
  iVar1 = FUN_403726c8();
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_4067cd44(0x403c1510);
  }
  else {
    iVar1 = FUN_4066f214();
    uVar2 = FUN_408d7eb4(uVar3,iVar1 == 1);
  }
  FUN_4067cd44(0x403c1540,uVar2,0);
  return 0;
}

