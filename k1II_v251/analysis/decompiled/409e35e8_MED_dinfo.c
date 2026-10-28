/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_dinfo(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  FUN_40636018(&uStack_2c);
  uStack_1c = uRam409e3734;
  pcVar1 = (char *)FUN_406793bc(&iStack_14,param_2);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    iVar2 = FUN_4067992c();
    iVar4 = *(int *)(iVar2 + 0x10);
    FUN_4067ca30(iVar4 != 0,uRam409e3450,uRam409e344c,0x430,uRam409e3738);
    uStack_1c = CONCAT31(uStack_1c._1_3_,*(undefined1 *)param_2[1]);
    iVar2 = FUN_406358a4(iVar4,&uStack_1c,&uStack_2c);
    if (iVar2 != 0) {
      FUN_4067cd44(0x409e373c,uStack_1c & 0xff);
      uVar3 = FUN_40636034(&uStack_2c);
      FUN_4067cd44(0x409e375c,uVar3);
      uVar3 = FUN_4063604c(&uStack_2c);
      FUN_4067cd44(0x409e377c,uVar3);
      FUN_4067cd44(0x409e379c,uStack_2c);
      FUN_4067cd44(0x409e37b8,uStack_28);
      FUN_4067cd44(0x409e37d4,uStack_24);
      FUN_40636030(&uStack_2c);
      return 0;
    }
    FUN_40635960(iVar4);
    uVar3 = FUN_409e1684();
    FUN_4067cd44(0x409e3a2c,uStack_1c & 0xff,uVar3);
  }
  else {
    uStack_18 = *(undefined4 *)(iRam409e2c7c + 0x30);
    FUN_40679338(*param_2,0x409e3a50,&uStack_18,1);
  }
  FUN_40636030(&uStack_2c);
  return 0xffffffff;
}

