/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SW_afareasel(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_10);
  uVar1 = 2;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    if (1 < iStack_10) {
      uVar1 = FUN_4020b80c(param_2[1],0);
    }
    FUN_409e9270(7,uVar1);
    uVar3 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam409ea7e8 + 0x78);
    FUN_40679338(*param_2,0x409ea7ec,auStack_18,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

