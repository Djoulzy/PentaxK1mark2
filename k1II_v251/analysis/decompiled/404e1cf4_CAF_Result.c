/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong CAF_Result(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  iVar2 = FUN_404c0eec();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_404e15f8(*(undefined4 *)(iVar2 + 4));
    return (ulonglong)uStack_18 << 0x20;
  }
  uStack_18 = *(uint *)(iRam404e1908 + 4);
  FUN_40679338(*param_2,uRam404e1e5c,&uStack_18,1);
  return CONCAT44(uStack_18,0xffffffff);
}

