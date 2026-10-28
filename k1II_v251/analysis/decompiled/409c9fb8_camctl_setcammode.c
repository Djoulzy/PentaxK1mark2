/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 camctl_setcammode(undefined4 param_1,undefined4 *param_2)

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
    iVar2 = FUN_409c8bdc(param_2[1]);
    if (iVar2 != -1) {
      FUN_409c9f00(0xb);
      goto LAB_409ca02c;
    }
    FUN_4067cd44(uRam409c94c8,0xffffffff);
  }
  uStack_18 = *(undefined4 *)(iRam409c9f9c + 0x34);
  FUN_40679338(*param_2,0x409ca2e8,&uStack_18,1);
LAB_409ca02c:
  return CONCAT44(uStack_18,0xffffffff);
}

