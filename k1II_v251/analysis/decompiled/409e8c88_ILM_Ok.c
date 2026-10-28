/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 ILM_Ok(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    uVar3 = 0;
    iVar2 = FUN_4066f1e0(param_2[1],0x409e8be0);
    if (iVar2 != 0) {
      iVar2 = FUN_4066f1e0(param_2[1],0x409e8be4);
      if (iVar2 == 0) {
        uVar3 = 4;
      }
      else {
        iVar2 = FUN_4066f1e0(param_2[2],0x409e8be8);
        if (iVar2 != 0) {
          FUN_4067cd44(0x409e8bc8,param_2[1]);
          goto LAB_409e8cbc;
        }
        uVar3 = 8;
      }
    }
    iVar2 = FUN_402ebbd8();
    iVar2 = FUN_4026aea4(*(undefined4 *)(iVar2 + 4),uVar3);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
LAB_409e8cbc:
    uVar3 = 0xffffffff;
    uStack_18 = *(undefined4 *)(iRam409e8c08 + 4);
    FUN_40679338(*param_2,0x409e8eb8,&uStack_18,1);
  }
  return CONCAT44(uStack_18,uVar3);
}

