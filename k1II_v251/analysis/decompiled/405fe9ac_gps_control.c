/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 gps_control(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_1c);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_405fed2c(param_2[1],0);
    iVar3 = FUN_405fed2c(param_2[2],0);
    if (iVar2 != -1 && iVar3 != -1) {
      uVar4 = FUN_4063e044();
      uStack_20 = 1;
      FUN_4064ea04(uVar4,3,iVar2 == 1,iVar3 == 1);
      goto LAB_405fea74;
    }
  }
  uStack_20 = *(undefined4 *)(iRam405febf4 + 0x20);
  FUN_40679338(*param_2,0x405febf8,&uStack_20,1);
  FUN_4067cd44(0x405fec10);
  FUN_4067cd44(0x405fec28);
  FUN_4067cd44(0x405fec40);
  FUN_4067cd44(0x405fec28);
LAB_405fea74:
  return CONCAT44(uStack_20,0xffffffff);
}

