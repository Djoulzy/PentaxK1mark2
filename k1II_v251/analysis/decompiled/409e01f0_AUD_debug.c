/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong AUD_debug(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  FUN_404bfd38();
  iVar2 = FUN_404bfefc();
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    uStack_18 = *puRam409e03bc;
    FUN_40679338(*param_2,0x409e03c0,&uStack_18,1);
    return CONCAT44(uStack_18,0xffffffff);
  }
  bVar4 = *(char *)(iVar2 + 0x120) != '\0';
  *(bool *)(iVar2 + 0x120) = !bVar4;
  if (bVar4) {
    uVar3 = 0x409e038c;
  }
  else {
    uVar3 = 0x409e03a4;
  }
  FUN_4067cd44(uVar3);
  return (ulonglong)uStack_18 << 0x20;
}

