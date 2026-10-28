/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_expctrl(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  
  uStack_20 = param_1;
  puStack_1c = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_20);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_409c9670(param_2[1]);
    iVar3 = FUN_409c9670(param_2[2]);
    iVar4 = FUN_409c9670(param_2[3]);
    iStack_38 = FUN_409c9670(param_2[4]);
    if (iVar2 == 0) {
      iVar2 = 0xffff;
    }
    if (iVar3 == 0) {
      iVar3 = 0xffff;
    }
    if (iVar4 == 0) {
      iVar4 = 0xffff;
    }
    if (iStack_38 == 0) {
      iStack_38 = 0xffff;
    }
    FUN_4063a144(auStack_34);
    FUN_4063a274(auStack_28);
    FUN_4063a174(auStack_34,6);
    FUN_4063a184(auStack_34,4);
    FUN_4063a1f4(auStack_34,0,iVar2);
    FUN_4063a1f4(auStack_34,1,iVar3);
    FUN_4063a1f4(auStack_34,2,iVar4);
    FUN_4063a1f4(auStack_34,3,iStack_38);
    iStack_40 = iVar3;
    iStack_3c = iVar4;
    FUN_4067c0f4(0,0,0x409c9840,iVar2);
    FUN_406792e4(uRam409c9804);
    piVar5 = (int *)FUN_404ad394();
    (**(code **)(*piVar5 + 0xc))(piVar5,auStack_34,auStack_28);
    FUN_406792e4(uRam409c9808);
    FUN_4067c0f4(0,0,0x409c9878);
    FUN_4063a284(auStack_28);
    FUN_4063a15c(auStack_34);
  }
  else {
    iStack_40 = *(int *)(iRam409c8dc0 + 0x1c);
    FUN_40679338(*param_2,0x409c988c,&iStack_40,1);
  }
  return 0xffffffff;
}

