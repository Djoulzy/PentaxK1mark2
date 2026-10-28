/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_getthum(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_10);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_409f340c(uStack_10,param_2);
    FUN_4067cd44(0x409f3ad8);
    FUN_409f3298(2,0,*(undefined4 *)(iRam409f35b4 + 4));
    uVar2 = 0;
  }
  else {
    uStack_20 = uRam409f3ae8;
    uStack_1c = uRam409f3aec;
    uStack_18 = uRam409f3af0;
    uStack_14 = uRam409f3af4;
    FUN_409f325c(*param_2,&uStack_20);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

