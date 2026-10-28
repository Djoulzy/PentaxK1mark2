/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_swreset(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ushort auStack_28 [2];
  ushort auStack_24 [2];
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  auStack_24[0] = 0;
  auStack_28[0] = 0;
  iVar2 = FUN_402d97cc();
  iVar3 = *(int *)(iVar2 + 8);
  iVar2 = FUN_402d97cc();
  if (iVar3 == 0 || *(int *)(iVar2 + 0x14) == 0) {
    FUN_4067cd44(uRam402da5fc);
  }
  else {
    if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (iStack_18 < 2)) {
      FUN_4067cd44(0x402da670);
      FUN_4051acc4(iVar3,0xa55a,0x101);
      FUN_4067ab8c(1);
      FUN_4067cd44(0x402da684);
      FUN_4051a6e4(iVar3,auStack_24);
      FUN_4051a6d0(iVar3,auStack_28);
      auStack_24[0] = auStack_24[0] & 0x7fff;
      auStack_28[0] = auStack_28[0] & 0x7fff;
      FUN_4051a6a0(iVar3,auStack_24[0],0x101);
      FUN_4051a680(iVar3,auStack_28[0],0x101);
      auStack_24[0] = 0x1a;
      auStack_28[0] = 0x1d;
      FUN_4051a6a0(iVar3,0x1a,0x101);
      FUN_4051a680(iVar3,auStack_28[0],0x101);
      auStack_24[0] = auStack_24[0] | 0x8000;
      auStack_28[0] = auStack_28[0] | 0x8000;
      FUN_4051a6a0(iVar3,auStack_24[0],0x101);
      FUN_4051a680(iVar3,auStack_28[0],0x101);
      FUN_4067cd44(0x402da610);
      return 0;
    }
    auStack_20[0] = *(undefined4 *)(iRam402d9ee0 + 0x14);
    FUN_40679338(*param_2,0x402da694,auStack_20,1);
  }
  return 0xffffffff;
}

