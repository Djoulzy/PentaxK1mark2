/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_fexist(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_11c [256];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    iVar2 = FUN_4067992c();
    piVar4 = *(int **)(iVar2 + 0x10);
    FUN_4067ca30(piVar4 != (int *)0x0,uRam409e1ee4,uRam409e1ee0,0x380,uRam409e3148);
    FUN_4070412c(auStack_11c,param_2[1],0x100);
    iVar2 = (**(code **)(*piVar4 + 0x14))(piVar4,auStack_11c,1,&uStack_1c);
    if (iVar2 == 0) {
      FUN_40635960(piVar4);
      uVar3 = FUN_409e1684();
      FUN_4067cd44(0x409e315c,uVar3);
      FUN_4067cd44(uRam409e3158,auStack_11c);
    }
    else {
      FUN_4067cd44(0x409e314c);
      FUN_4067cd44(uRam409e3158,auStack_11c);
      (**(code **)(*piVar4 + 0x18))(piVar4,uStack_1c);
    }
    uVar3 = 0;
  }
  else {
    uStack_18 = *(undefined4 *)(iRam409e2c7c + 0x24);
    FUN_40679338(*param_2,0x409e3174,&uStack_18,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

