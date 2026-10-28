/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_rcf(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_10);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_10)) {
    FUN_40678be4(param_2[1]);
    uVar2 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam408bbeb0 + 0xc);
    FUN_40679338(*param_2,0x408bbed0,auStack_18,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

