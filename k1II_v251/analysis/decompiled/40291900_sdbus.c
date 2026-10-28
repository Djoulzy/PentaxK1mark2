/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 sdbus(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uVar5 = 0;
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    uVar5 = 0xffffffff;
    uStack_18 = *puRam402919f4;
    FUN_40679338(*param_2,0x402919f8,&uStack_18,1);
    goto LAB_4029196c;
  }
  if (param_2[1] == 0) {
LAB_4029195c:
    iVar2 = FUN_40291428();
    FUN_4067cd44(0x402919e0,(int)*(char *)(iVar2 + 8));
  }
  else {
    iVar2 = FUN_4066f1e0(param_2[1],0x402919d8);
    if (iVar2 == 0) {
      uVar3 = FUN_40291428();
      uVar4 = 0xe2;
    }
    else {
      iVar2 = FUN_4066f1e0(param_2[1],0x402919dc);
      if (iVar2 != 0) goto LAB_4029195c;
      uVar3 = FUN_40291428();
      uVar4 = 0xe3;
    }
    FUN_40291748(uVar3,uVar4);
  }
LAB_4029196c:
  return CONCAT44(uStack_18,uVar5);
}

