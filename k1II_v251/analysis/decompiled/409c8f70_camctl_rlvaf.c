/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_rlvaf(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 auStack_38 [3];
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  undefined4 *puStack_20;
  
  uStack_24 = param_1;
  puStack_20 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_24);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_409c8bdc(param_2[1]);
    iVar3 = FUN_409c8bdc(param_2[2]);
    iVar4 = FUN_409c8bdc(param_2[3]);
    iVar5 = FUN_409c8bdc(param_2[4]);
    if ((iVar2 != -1 && iVar3 != -1) && (iVar4 != -1 && iVar5 != -1)) {
      FUN_4063a144(auStack_38);
      FUN_4063a274(auStack_2c);
      FUN_4063a174(auStack_38,5);
      FUN_4063a184(auStack_38,4);
      FUN_4063a1f4(auStack_38,0,iVar2);
      FUN_4063a1f4(auStack_38,1,iVar3);
      FUN_4063a1f4(auStack_38,2,iVar4);
      FUN_4063a1f4(auStack_38,3,iVar5);
      FUN_406792e4(0x409c90f0);
      piVar6 = (int *)FUN_404ad394();
      (**(code **)(*piVar6 + 0xc))(piVar6,auStack_38,auStack_2c);
      FUN_4067b8f0(uRam409c8d24,1,0,*puRam409c9100);
      FUN_4067b888(uRam409c8d24,1);
      FUN_406792e4(0x409c9104);
      FUN_4067c0f4(0,0,0x409c913c);
      FUN_4063a284(auStack_2c);
      FUN_4063a15c(auStack_38);
      return 0xffffffff;
    }
    FUN_4067cd44(0x409c8db0);
  }
  auStack_38[0] = *(undefined4 *)(iRam409c8dc0 + 8);
  FUN_40679338(*param_2,0x409c914c,auStack_38,1);
  return 0xffffffff;
}

