/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_rlvresoS(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 auStack_30 [3];
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  uStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_409c8bdc(param_2[1]);
    if (iVar2 != -1) {
      FUN_4063a144(auStack_30);
      FUN_4063a274(auStack_24);
      FUN_4063a174(auStack_30,0);
      FUN_4063a184(auStack_30,1);
      FUN_4063a1f4(auStack_30,0,iVar2);
      FUN_406792e4(0x409c90f0);
      piVar3 = (int *)FUN_404ad394();
      (**(code **)(*piVar3 + 0xc))(piVar3,auStack_30,auStack_24);
      FUN_4067b8f0(uRam409c8d24,4,0,*puRam409c9100);
      FUN_4067b888(uRam409c8d24,4);
      FUN_406792e4(0x409c9104);
      FUN_4067c0f4(0,0,0x409c94b4);
      FUN_4063a284(auStack_24);
      FUN_4063a15c(auStack_30);
      return 0xffffffff;
    }
    FUN_4067cd44(uRam409c94c8);
  }
  auStack_30[0] = *(undefined4 *)(iRam409c8dc0 + 0xc);
  FUN_40679338(*param_2,0x409c94cc,auStack_30,1);
  return 0xffffffff;
}

