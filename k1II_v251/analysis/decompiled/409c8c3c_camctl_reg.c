/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 camctl_reg(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uVar5 = 0xffffffff;
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    iVar3 = FUN_409c8bdc(param_2[1]);
    puVar1 = puRam409c8d14;
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        iVar3 = FUN_404ad394();
        uVar5 = 0x409c8de8;
        *(undefined4 *)(iVar3 + 8) = *puVar1;
        *puVar1 = 0;
      }
      else {
        if (iVar3 != 1) {
          FUN_4067cd44(0x409c8db0);
          goto LAB_409c8c94;
        }
        iVar3 = FUN_404ad394();
        *puVar1 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_404ad394();
        uVar4 = FUN_409c8a30();
        uVar5 = 0x409c8e00;
        *(undefined4 *)(iVar3 + 8) = uVar4;
      }
      FUN_4067c0f4(0,0,uVar5);
      uVar5 = 0;
    }
  }
  else {
    uStack_18 = *puRam409c8dc0;
    FUN_40679338(*param_2,0x409c8dc4,&uStack_18,1);
  }
LAB_409c8c94:
  return CONCAT44(uStack_18,uVar5);
}

