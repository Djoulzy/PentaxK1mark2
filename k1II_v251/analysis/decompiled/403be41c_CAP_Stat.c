/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_Stat(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 auStack_d0 [49];
  
  FUN_4067cd44(0x403be5b8);
  FUN_406833b0(auStack_d0,uRam403be5d4,0xc4);
  uVar2 = 0;
  do {
    uVar1 = FUN_4062af84();
    uVar1 = FUN_4062b36c(uVar1,uVar2 & 0xff);
    FUN_4067cd44(0x403be5d8,auStack_d0[uVar2],uVar2,uVar1);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x32);
  FUN_4067cd44(0x403be5f0);
  return 0;
}

