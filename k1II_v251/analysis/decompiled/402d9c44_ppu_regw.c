/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_regw(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 auStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_18);
  iVar3 = FUN_402d97cc();
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    FUN_4067cd44(0x402d9ed0);
  }
  else {
    if (((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) && (2 < iStack_18)) {
      uVar4 = FUN_4020b80c(param_2[1],0);
      uVar1 = FUN_4020b80c(param_2[2],0);
      FUN_4067cd44(0x402d9e78,uVar4);
      FUN_4067cd44(0x402d9ea4,uVar1);
      iVar3 = FUN_4051d3a8(iVar3,uVar4,uVar1,1);
      if (iVar3 == 0) {
        uVar4 = 0x402d9f14;
      }
      else {
        uVar4 = 0x402d9ef8;
      }
      FUN_4067cd44(uVar4);
      FUN_4067cd44(0x402d9e88);
      return 0;
    }
    auStack_20[0] = *(undefined4 *)(iRam402d9ee0 + 4);
    FUN_40679338(*param_2,0x402d9f2c,auStack_20,1);
  }
  return 0xffffffff;
}

