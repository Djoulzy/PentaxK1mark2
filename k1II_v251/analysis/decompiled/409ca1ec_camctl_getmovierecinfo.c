/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_getmovierecinfo(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  uStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_4063a144(auStack_28);
    FUN_4063a274(auStack_30);
    FUN_4063a174(auStack_28,10);
    piVar2 = (int *)FUN_404ad394();
    (**(code **)(*piVar2 + 0xc))(piVar2,auStack_28,auStack_30);
    iVar3 = FUN_4063a348(auStack_30,3);
    if (iVar3 == 0) {
      uVar4 = 0x409ca34c;
    }
    else {
      uVar4 = 0x409ca364;
    }
    FUN_4067cd44(uVar4);
    uVar4 = FUN_4063a348(auStack_30,2);
    uVar5 = FUN_4063a348(auStack_30,1);
    uVar6 = FUN_4063a348(auStack_30,0);
    FUN_4067cd44(0x409ca378,uVar6,uVar5,uVar4);
    FUN_4063a284(auStack_30);
    FUN_4063a15c(auStack_28);
  }
  else {
    auStack_30[0] = *(undefined4 *)(iRam409c9f9c + 0x40);
    FUN_40679338(*param_2,0x409ca390,auStack_30,1);
  }
  return 0xffffffff;
}

