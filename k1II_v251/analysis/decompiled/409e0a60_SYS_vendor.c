/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_vendor(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  int iStack_28;
  undefined4 *puStack_24;
  
  iStack_28 = param_1;
  puStack_24 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_28);
  uStack_34 = 0;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (3 < iStack_28) {
      uVar2 = FUN_409e072c();
      uVar3 = FUN_4020c174(param_2[1],&uStack_34,0);
      uVar4 = FUN_4020c174(param_2[2],&uStack_34,0);
      uVar5 = FUN_4020c174(param_2[3],&uStack_34,0);
      iVar6 = FUN_406832d8(uVar5 * 4 + 4);
      if (iVar6 != 0) {
        for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
          uVar7 = FUN_4020c174(param_2[uVar8 + 4],&uStack_34,0);
          *(undefined4 *)(iVar6 + uVar8 * 4) = uVar7;
        }
        FUN_409e0974(uVar2,uVar3,uVar4,uVar5,iVar6);
        FUN_40683358(iVar6);
      }
      return 0;
    }
    FUN_4067cd44(0x409e0bc4);
  }
  auStack_30[0] = *puRam409e0bd8;
  FUN_40679338(*param_2,0x409e0bdc,auStack_30,1);
  return 0xffffffff;
}

