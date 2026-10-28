/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_memt(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 3) {
      if (iStack_18 == 2) {
        pcStack_1c = (char *)0x0;
        iVar3 = FUN_4020c174(param_2[1],&pcStack_1c,0);
        if (*pcStack_1c == '\0') {
          FUN_40678380(iVar3);
        }
        else {
          iVar3 = 1;
          do {
            uVar4 = FUN_40678380(iVar3);
            uVar5 = FUN_4068312c(param_2[1]);
            iVar6 = FUN_4020fc60(uVar4,param_2[1],uVar5);
            if (iVar6 == 0) break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x10);
        }
        if (0xe < iVar3 - 1U) {
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f03c,param_2[1]);
          return 0xffffffff;
        }
        FUN_4068ad54(0x4068f064);
        FUN_4068ec08(iVar3);
      }
      else {
        FUN_4068ad54(0x4068f07c);
        iVar3 = 1;
        do {
          FUN_4068ec08(iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x10);
      }
      pcVar2 = (code *)FUN_40554324();
      (*pcVar2)(0x4068ee10);
      return 0;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068f010);
  }
  uStack_28 = *(undefined4 *)(iRam4068eb58 + 0xa4);
  uStack_24 = *(undefined4 *)(iRam4068eb58 + 0xa8);
  uStack_20 = *(undefined4 *)(iRam4068eb58 + 0xac);
  FUN_40679338(*param_2,0x4068f014,&uStack_28,3);
  return 0xffffffff;
}

