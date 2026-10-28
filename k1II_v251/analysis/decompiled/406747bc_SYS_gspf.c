/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_gspf(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_40497bbc();
  uVar2 = uRam406748ec;
  iVar1 = *(int *)(iVar1 + 4);
  FUN_4067ca30(iVar1 != 0,0x4067489c,uRam406741f4,0x954,uRam406748ec);
  iVar1 = FUN_406716e4(iVar1,0x80);
  FUN_4067ca30(iVar1 != 0,0x406748b4,uRam406741f4,0x957,uVar2);
  iVar1 = FUN_402f3900(iVar1);
  FUN_4067ca30(iVar1 != 0,0x406748c4,uRam406741f4,0x95a,uVar2);
  uVar2 = FUN_40259764(iVar1);
  FUN_4067cd44(0x406748f0,uVar2);
  return 0;
}

