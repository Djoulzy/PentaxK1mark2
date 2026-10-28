/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 ec_control(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) &&
     (iVar2 = FUN_405fed2c(param_2[1],0), iVar2 != -1)) {
    iVar3 = FUN_406765c4();
    FUN_405fc574(*(undefined4 *)(iVar3 + 0x70),iVar2 == 1,0);
  }
  else {
    uStack_18 = *(undefined4 *)(iRam405febf4 + 0x24);
    FUN_40679338(*param_2,0x405fec58,&uStack_18,1);
    FUN_4067cd44(0x405fec10);
    FUN_4067cd44(0x405fec28);
  }
  return CONCAT44(uStack_18,0xffffffff);
}

