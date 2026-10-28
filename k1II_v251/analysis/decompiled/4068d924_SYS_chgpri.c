/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_chgpri(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *apcStack_20 [2];
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  apcStack_20[0] = (char *)0x0;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (1 < iStack_18) {
      uVar3 = FUN_4020c174(param_2[1],apcStack_20,0);
      if (*apcStack_20[0] == '\0') {
        FUN_4067aae8(uVar3);
      }
      else {
        uVar3 = 1;
        do {
          uVar4 = FUN_4067aae8(uVar3);
          uVar5 = FUN_4068312c(param_2[1]);
          iVar6 = FUN_4020fc60(uVar4,param_2[1],uVar5);
          if (iVar6 == 0) break;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x97);
      }
      if (0x95 < uVar3 - 1) {
        pcVar2 = (code *)FUN_40554324();
        (*pcVar2)(uRam4068dad4,param_2[1]);
        return 0xffffffff;
      }
      iVar6 = FUN_4067aa84(uVar3);
      if (iVar6 == 0) {
        pcVar2 = (code *)FUN_40554324();
        uVar4 = 0x4068db04;
      }
      else {
        if (iStack_18 < 3) {
          FUN_4067b03c(iVar6);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068dad8);
          return 0;
        }
        uVar3 = FUN_4020c174(param_2[2],0);
        uVar3 = uVar3 & 0xff;
        FUN_4067afc8(iVar6,uVar3);
        pcVar2 = (code *)FUN_40554324();
        uVar4 = 0x4068daec;
      }
      (*pcVar2)(uVar4,uVar3);
      return 0;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068d074);
  }
  uStack_28 = *(undefined4 *)(iRam4068dab8 + 4);
  uStack_24 = *(undefined4 *)(iRam4068dab8 + 8);
  FUN_40679338(*param_2,0x4068dabc,&uStack_28,2);
  return 0xffffffff;
}

