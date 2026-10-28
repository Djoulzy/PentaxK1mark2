/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_cyct(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  short asStack_20 [2];
  char *pcStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 3) {
      if (iStack_18 != 2) {
        FUN_400dbfd0(0x400dd6f8);
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(0x400dd700);
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(0x400dd738);
        iVar6 = 1;
        do {
          iVar5 = FUN_400e5e04((int)(short)iVar6,asStack_20);
          if (iVar5 == 0) {
            uVar3 = FUN_400d928c(iVar6);
            pcStack_30 = (char *)0x0;
            if (asStack_20[0] != 0) {
              pcStack_30 = pcStack_1c;
            }
            pcVar2 = (code *)FUN_400dfae0();
            if (asStack_20[0] == 0) {
              uVar4 = 0x400dd778;
            }
            else {
              uVar4 = 0x400dd770;
            }
            (*pcVar2)(0x400dd780,iVar6,uVar3,uVar4);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 6);
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(0x400dd4fc);
        return 0;
      }
      pcStack_30 = (char *)0x0;
      FUN_400f21f8(param_2[1],&pcStack_30,0);
      if (*pcStack_30 == '\0') {
        FUN_400d928c();
      }
      else {
        iVar6 = 1;
        do {
          uVar3 = FUN_400d928c(iVar6);
          uVar4 = FUN_400f25d4(param_2[1]);
          iVar5 = FUN_400f25a2(uVar3,param_2[1],uVar4);
          if (iVar5 == 0) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 6);
      }
      pcVar2 = (code *)FUN_400dfae0();
      (*pcVar2)(0x400dd6d0,param_2[1]);
      return 0xffffffff;
    }
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400dccc4);
  }
  uStack_2c = *(undefined4 *)(iRam400dd6b0 + 0x5c);
  uStack_28 = *(undefined4 *)(iRam400dd6b0 + 0x60);
  uStack_24 = *(undefined4 *)(iRam400dd6b0 + 100);
  FUN_4000af54(*param_2,0x400dd6b4,&uStack_2c,3);
  return 0xffffffff;
}

