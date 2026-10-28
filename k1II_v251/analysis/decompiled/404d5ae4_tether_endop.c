/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 tether_endop(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_404d4ec4();
    FUN_404095ac(*(undefined4 *)(*(int *)(iVar2 + 4) + 0xc));
  }
  else {
    uStack_18 = *(undefined4 *)(iRam404d5a18 + 8);
    FUN_40679338(*param_2,0x404d5b74,&uStack_18,1);
  }
  return CONCAT44(uStack_18,0xffffffff);
}

