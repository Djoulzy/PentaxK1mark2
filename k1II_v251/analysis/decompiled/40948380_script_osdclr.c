/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong script_osdclr(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar3 = (char *)FUN_406793bc(&iStack_14);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != 'h')) {
    if (2 < iStack_14) {
      uVar1 = FUN_4020b80c(param_2[1],0);
      uVar2 = FUN_4020b80c(param_2[2],0);
      uVar4 = FUN_40947e9c();
      FUN_4094801c(uVar4,uVar1,uVar2);
      return (ulonglong)uStack_18 << 0x20;
    }
    FUN_4067cd44(0x40948350);
  }
  uStack_18 = *puRam40948424;
  FUN_40679338(*param_2,0x40948428,&uStack_18,1);
  return CONCAT44(uStack_18,0xffffffff);
}

