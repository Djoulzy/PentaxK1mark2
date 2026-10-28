/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_setflg(int param_1,undefined4 *param_2)

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
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  pcStack_2c = (char *)0x0;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (2 < iStack_18) {
      iVar3 = FUN_4020c174(param_2[1],&pcStack_2c,0);
      if (*pcStack_2c == '\0') {
        FUN_4067b33c(iVar3);
      }
      else {
        iVar3 = 1;
        do {
          uVar4 = FUN_4067b33c(iVar3);
          uVar5 = FUN_4068312c(param_2[1]);
          iVar6 = FUN_4020fc60(uVar4,param_2[1],uVar5);
          if (iVar6 == 0) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x100);
      }
      if (0xfe < iVar3 - 1U) {
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(uRam4068df6c,param_2[1]);
        return 0xffffffff;
      }
      uVar4 = FUN_4020c174(param_2[2],0);
      iVar6 = FUN_403d15cc((int)(short)iVar3,uVar4);
      if (iVar6 == 0) {
        return 0;
      }
      pcVar2 = (code *)FUN_40554324();
      (*pcVar2)(0x4068df70,iVar3,iVar6);
      return 0xffffffff;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068d074);
  }
  uStack_28 = *(undefined4 *)(iRam4068dab8 + 0x1c);
  uStack_24 = *(undefined4 *)(iRam4068dab8 + 0x20);
  FUN_40679338(*param_2,0x4068df54,&uStack_28,2);
  return 0xffffffff;
}

