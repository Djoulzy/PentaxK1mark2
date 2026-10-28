/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_hwreset(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort auStack_30 [2];
  ushort auStack_2c [2];
  undefined4 auStack_28 [2];
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_20);
  auStack_2c[0] = 0;
  auStack_30[0] = 0;
  iVar2 = FUN_402d97cc();
  iVar4 = *(int *)(iVar2 + 8);
  iVar2 = FUN_402d97cc();
  iVar2 = *(int *)(iVar2 + 0x14);
  uVar3 = FUN_40677b5c();
  FUN_403975b4();
  uVar3 = FUN_40677c28(uVar3,0x12a);
  if (iVar4 == 0 || iVar2 == 0) {
    FUN_4067cd44(uRam402da5fc);
  }
  else {
    if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (iStack_20 < 2)) {
      FUN_4067cd44(0x402da854);
      FUN_402f4910(uVar3);
      FUN_4067ab8c(1);
      FUN_402f4904(uVar3);
      FUN_4067ab8c(1);
      FUN_4067cd44(0x402da684);
      FUN_4051a6e4(iVar4,auStack_2c);
      FUN_4051a6d0(iVar4,auStack_30);
      auStack_2c[0] = auStack_2c[0] & 0x7fff;
      auStack_30[0] = auStack_30[0] & 0x7fff;
      FUN_4051a6a0(iVar4,auStack_2c[0],0x101);
      FUN_4051a680(iVar4,auStack_30[0],0x101);
      auStack_2c[0] = 0x1a;
      auStack_30[0] = 0x1d;
      FUN_4051a6a0(iVar4,0x1a,0x101);
      FUN_4051a680(iVar4,auStack_30[0],0x101);
      auStack_2c[0] = auStack_2c[0] | 0x8000;
      auStack_30[0] = auStack_30[0] | 0x8000;
      FUN_4051a6a0(iVar4,auStack_2c[0],0x101);
      FUN_4051a680(iVar4,auStack_30[0],0x101);
      FUN_4067cd44(0x402da610);
      return 0;
    }
    auStack_28[0] = *(undefined4 *)(iRam402d9ee0 + 0x18);
    FUN_40679338(*param_2,0x402da868,auStack_28,1);
  }
  return 0xffffffff;
}

