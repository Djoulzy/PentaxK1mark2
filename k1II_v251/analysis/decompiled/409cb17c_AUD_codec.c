/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_codec(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_10);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_4067cd44(0x409cb3bc);
    iVar2 = FUN_409b6e58();
    FUN_40522118(*(undefined4 *)(iVar2 + 0xc));
    uVar3 = 0;
  }
  else {
    auStack_18[0] = *puRam409cb3d8;
    FUN_40679338(*param_2,0x409cb3dc,auStack_18,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

