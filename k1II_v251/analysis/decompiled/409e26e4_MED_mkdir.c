/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_mkdir(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_114 [256];
  undefined4 uStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_10);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_10)) {
    auStack_114[0] = 0;
    FUN_40683170(auStack_114,param_2[1]);
    iVar2 = FUN_4067992c();
    iVar4 = *(int *)(iVar2 + 0x10);
    FUN_4067ca30(iVar4 != 0,uRam409e1ee4,uRam409e1ee0,0x27d,uRam409e28d8);
    iVar2 = FUN_40635574(iVar4,auStack_114);
    if (iVar2 == 0) {
      FUN_40635960(iVar4);
      uVar3 = FUN_409e1684();
      FUN_4067cd44(0x409e28f8,uVar3);
    }
    else {
      FUN_4067cd44(0x409e28dc);
    }
    FUN_4067cd44(0x409e2918,auStack_114);
    uVar3 = 0;
  }
  else {
    uStack_14 = *(undefined4 *)(iRam409e17d4 + 0x18);
    FUN_40679338(*param_2,0x409e2930,&uStack_14,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

