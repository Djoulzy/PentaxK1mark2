/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_md(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [28];
  int iStack_2c;
  undefined4 *puStack_28;
  
  iStack_2c = param_1;
  puStack_28 = param_2;
  pbVar2 = (byte *)FUN_406793bc(&iStack_2c);
  uVar8 = 0;
  iVar5 = 0x100;
  iVar6 = 0;
  uVar7 = 1;
  iVar4 = 2;
  if (((pbVar2 != (byte *)0x0) && (*pbVar2 == 0x68)) || (iStack_2c < 2)) {
    FUN_406833b0(auStack_48,uRam408bb284,0x18);
    FUN_40679338(*param_2,0x408bb288,auStack_48,6);
    return 0xffffffff;
  }
  iVar3 = FUN_4020b80c(param_2[1],0);
  if (2 < iStack_2c) {
    while (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      if (bVar1 == 0x66) {
        iVar6 = param_2[iVar4];
      }
      else if (bVar1 < 0x67) {
        if (bVar1 == 0x61) {
          uVar8 = 1;
        }
        else if (bVar1 == 0x65) {
          iVar5 = FUN_4020b80c(param_2[iVar4],0);
          iVar5 = (iVar5 - iVar3) + 1;
        }
      }
      else if (bVar1 == 0x70) {
        uVar7 = FUN_4020b80c(param_2[iVar4],0);
      }
      else if (bVar1 == 0x73) {
        iVar5 = FUN_4020b80c(param_2[iVar4],0);
      }
      iVar4 = iVar4 + 1;
      pbVar2 = (byte *)FUN_406793bc(&iStack_2c,param_2);
    }
    if (iVar6 != 0) {
      FUN_40679730(iVar6,iVar3,iVar5);
      uVar7 = FUN_406798ac();
      FUN_4067cd44(0x408bb26c,iVar6,uVar7);
      return 0;
    }
  }
  FUN_4067944c(iVar3,iVar5,uVar7,uVar8);
  return 0;
}

