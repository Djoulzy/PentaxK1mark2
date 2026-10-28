/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 NET_ifsize(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  uStack_18 = 0;
  uVar3 = 0;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    FUN_4067cd44(0x409f4160);
    if (1 < iStack_14) {
      uVar3 = FUN_4066f214(param_2[1]);
    }
    uVar2 = FUN_409f459c();
    FUN_409f4d58(uVar2,&uStack_18,uVar3);
    FUN_4067cd44(0x409f4174,uStack_18);
    uVar3 = 0;
  }
  else {
    uStack_20 = *(undefined4 *)(iRam409f3f30 + 4);
    uStack_1c = *(undefined4 *)(iRam409f3f30 + 8);
    FUN_40679338(*param_2,0x409f4190,&uStack_20,2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

