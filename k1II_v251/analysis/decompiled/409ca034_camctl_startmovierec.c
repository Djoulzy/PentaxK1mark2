/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_startmovierec(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 auStack_28 [3];
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_4063a144(auStack_28);
    FUN_4063a274(auStack_1c);
    FUN_4063a174(auStack_28,8);
    FUN_406792e4(uRam409c9804);
    piVar2 = (int *)FUN_404ad394();
    (**(code **)(*piVar2 + 0xc))(piVar2,auStack_28,auStack_1c);
    FUN_4067b8f0(uRam409ca2fc,0x40,0,*puRam409c9100);
    FUN_4067b888(uRam409ca2fc,0x40);
    FUN_406792e4(uRam409c9808);
    FUN_4067c0f4(0,0,0x409ca300);
    FUN_4063a284(auStack_1c);
    FUN_4063a15c(auStack_28);
  }
  else {
    auStack_28[0] = *(undefined4 *)(iRam409c9f9c + 0x38);
    FUN_40679338(*param_2,0x409ca318,auStack_28,1);
  }
  return 0xffffffff;
}

