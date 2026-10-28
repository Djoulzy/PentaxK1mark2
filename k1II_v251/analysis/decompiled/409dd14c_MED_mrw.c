/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mrw(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_10);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (2 < iStack_10)) {
    MED_mread(iStack_10,param_2);
    MED_mwrite(iStack_10,param_2);
    MED_mread(iStack_10,param_2);
    uVar2 = 0;
  }
  else {
    uStack_18 = *(undefined4 *)(iRam409dcb40 + 0x28);
    uStack_14 = *(undefined4 *)(iRam409dcb40 + 0x2c);
    FUN_40679338(*param_2,0x409dd2f8,&uStack_18,2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

