/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

int ILM_Selfee(int param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 auStack_28 [2];
  int iStack_20;
  undefined4 *puStack_1c;
  
  iVar4 = 0;
  bVar1 = false;
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar2 = (char *)FUN_406793bc(&iStack_20);
  if (((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) && (2 < iStack_20)) {
    uVar5 = 5;
    iVar3 = FUN_4066f1e0(param_2[1],0x409e8bb4);
    if (iVar3 != 0) {
      iVar3 = FUN_4066f1e0(param_2[1],0x409e8bbc);
      if (iVar3 == 0) {
        uVar5 = 6;
      }
      else {
        iVar3 = FUN_4066f1e0(param_2[1],0x409e8bc4);
        if (iVar3 == 0) {
          uVar5 = 7;
        }
        else {
          FUN_4067cd44(0x409e8bc8,param_2[1]);
          iVar4 = -1;
          bVar1 = true;
        }
      }
    }
    uVar6 = 0;
    iVar3 = FUN_4066f1e0(param_2[2],0x409e8be0);
    if (iVar3 != 0) {
      iVar3 = FUN_4066f1e0(param_2[2],0x409e8be4);
      if (iVar3 != 0) {
        FUN_4067cd44(0x409e8bf0,param_2[2]);
        goto LAB_409e8f34;
      }
      uVar6 = 4;
    }
    if (iVar4 == 0) {
      iVar4 = FUN_402ebbd8();
      iVar4 = FUN_4026aeac(*(undefined4 *)(iVar4 + 4),uVar5,uVar6);
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = 0;
      }
    }
    if (!bVar1) {
      return iVar4;
    }
  }
  else {
LAB_409e8f34:
    iVar4 = -1;
  }
  auStack_28[0] = *(undefined4 *)(iRam409e8c08 + 0xc);
  FUN_40679338(*param_2,0x409e8c0c,auStack_28,1);
  return iVar4;
}

