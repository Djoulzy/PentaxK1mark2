/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_CheckCisPpu(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_402675cc();
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  uVar1 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_4066f214(*(int *)(param_2 + 4),0);
  }
  iVar2 = FUN_4038b760(uVar3,uVar1);
  if (iVar2 != 0) {
    FUN_4067c0f4(0,0,0x403b9b1c);
    FUN_4038b76c(uVar3,0);
  }
  FUN_4067c0f4(0);
  return 0;
}

