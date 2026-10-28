/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 camctl_setmovieF(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uVar3 = 0xffffffff;
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_409c8bdc(param_2[1]);
    if (iVar2 != -1) {
      iVar2 = FUN_409c9f00(0x17);
      uVar3 = 0xffffffff;
      if (iVar2 != 0) {
        uVar3 = 0;
      }
      goto LAB_409ca96c;
    }
    FUN_4067cd44(uRam409ca684,0xffffffff);
  }
  uStack_18 = *(undefined4 *)(iRam409c9f9c + 0x68);
  FUN_40679338(*param_2,0x409ca9b8,&uStack_18,1);
LAB_409ca96c:
  return CONCAT44(uStack_18,uVar3);
}

