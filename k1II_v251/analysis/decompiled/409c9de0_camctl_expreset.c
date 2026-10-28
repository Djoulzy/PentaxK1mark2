/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_expreset(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 auStack_30 [3];
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_1c);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    uVar2 = FUN_409c9dc0(param_2[1]);
    uVar3 = FUN_409c9dc0(param_2[2]);
    uVar4 = FUN_409c9dc0(param_2[3]);
    FUN_4063a144(auStack_30);
    FUN_4063a274(auStack_24);
    FUN_4063a174(auStack_30,7);
    FUN_4063a184(auStack_30,3);
    FUN_4063a1f4(auStack_30,0,uVar2);
    FUN_4063a1f4(auStack_30,1,uVar3);
    FUN_4063a1f4(auStack_30,2,uVar4);
    FUN_406792e4(uRam409c9804);
    piVar5 = (int *)FUN_404ad394();
    (**(code **)(*piVar5 + 0xc))(piVar5,auStack_30,auStack_24);
    FUN_406792e4(uRam409c9808);
    FUN_4067c0f4(0,0,0x409c9f88);
    FUN_4063a284(auStack_24);
    FUN_4063a15c(auStack_30);
  }
  else {
    auStack_30[0] = *(undefined4 *)(iRam409c9f9c + 0x30);
    FUN_40679338(*param_2,0x409c9fa0,auStack_30,1);
  }
  return 0xffffffff;
}

