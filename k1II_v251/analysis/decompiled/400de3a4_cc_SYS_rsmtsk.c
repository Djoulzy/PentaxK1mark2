/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_rsmtsk(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_18);
  pcStack_2c = (char *)0x0;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (1 < iStack_18) {
      iVar3 = FUN_400f21f8(param_2[1],&pcStack_2c,0);
      if (*pcStack_2c == '\0') {
        FUN_400db674(iVar3);
      }
      else {
        iVar3 = 1;
        do {
          uVar4 = FUN_400db674(iVar3);
          uVar5 = FUN_400f25d4(param_2[1]);
          iVar6 = FUN_400f25a2(uVar4,param_2[1],uVar5);
          if (iVar6 == 0) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 6);
      }
      if (4 < iVar3 - 1U) {
        pcVar2 = (code *)FUN_400dfae0();
        (*pcVar2)(uRam400de1e0,param_2[1]);
        return 0xffffffff;
      }
      iVar6 = FUN_400e5270((int)(short)iVar3);
      if (iVar6 == 0) {
        return 0;
      }
      pcVar2 = (code *)FUN_400dfae0();
      (*pcVar2)(0x400de4ec,iVar3,iVar6);
      return 0xffffffff;
    }
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400de1c4);
  }
  uStack_28 = *(undefined4 *)(iRam400dd6b0 + 0x14);
  uStack_24 = *(undefined4 *)(iRam400dd6b0 + 0x18);
  FUN_4000af54(*param_2,0x400de4e0,&uStack_28,2);
  return 0xffffffff;
}

