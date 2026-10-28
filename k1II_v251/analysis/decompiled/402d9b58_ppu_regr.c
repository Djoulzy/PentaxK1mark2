/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_regr(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 auStack_20 [2];
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  auStack_20[0] = 0;
  iVar2 = FUN_402d97cc();
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    FUN_4067cd44(0x402d9ed0);
  }
  else {
    if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_18)) {
      uVar3 = FUN_4020b80c(param_2[1],0);
      FUN_4067cd44(0x402d9e78,uVar3);
      iVar2 = FUN_4051d3c8(iVar2,uVar3,auStack_20,1);
      if (iVar2 == 0) {
        uVar3 = 0x402d9e8c;
      }
      else {
        FUN_4067cd44(0x402d9ea4,auStack_20[0]);
        uVar3 = 0x402d9eb8;
      }
      FUN_4067cd44(uVar3);
      FUN_4067cd44(0x402d9e88);
      return 0;
    }
    uStack_1c = *puRam402d9ee0;
    FUN_40679338(*param_2,0x402d9ee4,&uStack_1c,1);
  }
  return 0xffffffff;
}

