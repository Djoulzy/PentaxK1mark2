/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_copyinfo(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_10);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_4067d308(param_2[2]);
    FUN_4067cd44(0x408bbf10);
    thunk_FUN_404682a8(param_2[2]);
    FUN_4067cd44(0x408bbf28);
    uVar2 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam408bbeb0 + 0x14);
    FUN_40679338(*param_2,0x408bbf4c,auStack_18,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

