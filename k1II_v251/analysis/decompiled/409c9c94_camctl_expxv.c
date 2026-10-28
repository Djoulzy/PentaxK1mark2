/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_expxv(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 auStack_28 [3];
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    uVar2 = FUN_409c9670(param_2[1]);
    FUN_4063a144(auStack_28);
    FUN_4063a274(auStack_1c);
    FUN_4063a174(auStack_28,6);
    FUN_4063a184(auStack_28,4);
    FUN_4063a1f4(auStack_28,0,0xffff);
    FUN_4063a1f4(auStack_28,1,0xffff);
    FUN_4063a1f4(auStack_28,2,0xffff);
    FUN_4063a1f4(auStack_28,3,uVar2);
    FUN_4067c0f4(0,0,0x409c9f68,uVar2);
    FUN_406792e4(uRam409c9804);
    piVar3 = (int *)FUN_404ad394();
    (**(code **)(*piVar3 + 0xc))(piVar3,auStack_28,auStack_1c);
    FUN_406792e4(uRam409c9808);
    FUN_4067c0f4(0,0,0x409c9c3c);
    FUN_4063a284(auStack_1c);
    FUN_4063a15c(auStack_28);
  }
  else {
    auStack_28[0] = *(undefined4 *)(iRam409c8dc0 + 0x2c);
    FUN_40679338(*param_2,0x409c9f80,auStack_28,1);
  }
  return 0xffffffff;
}

