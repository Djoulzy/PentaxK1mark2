/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_sspf(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_40497bbc();
  uVar3 = uRam40674898;
  iVar2 = *(int *)(iVar1 + 4);
  FUN_4067ca30(iVar2 != 0,0x4067489c,uRam406741f4,0x93a,uRam40674898);
  iVar1 = FUN_406716e4(iVar2,0x80);
  FUN_4067ca30(iVar1 != 0,0x406748b4,uRam406741f4,0x93d,uVar3);
  iVar1 = FUN_402f3900(iVar1);
  FUN_4067ca30(iVar1 != 0,0x406748c4,uRam406741f4,0x940,uVar3);
  uVar3 = 0x10;
  if (1 < param_1) {
    uVar3 = FUN_4020b80c(*(undefined4 *)(param_2 + 4),0);
  }
  FUN_4067cd44(0x406748d4,uVar3);
  FUN_4025975c(iVar1,uVar3);
  FUN_40259730(iVar1,1);
  FUN_40673e54(iVar2,0x80);
  return 0;
}

