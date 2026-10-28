/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_stbeep(undefined4 param_1,undefined4 *param_2)

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
    FUN_404bfd38();
    FUN_404bfefc();
    FUN_40505de4();
    uVar2 = 0;
  }
  else {
    auStack_18[0] = *puRam409dfcf4;
    FUN_40679338(*param_2,0x409dfcf8,auStack_18,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

