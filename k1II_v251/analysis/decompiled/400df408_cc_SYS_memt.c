/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_memt(int param_1,undefined4 *param_2)

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
  pcVar1 = (char *)FUN_4000afd8(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_18 < 3) {
      if (iStack_18 == 2) {
        pcStack_1c = (char *)0x0;
        iVar3 = FUN_400f21f8(param_2[1],&pcStack_1c,0);
        if (*pcStack_1c == '\0') {
          FUN_400da264(iVar3);
        }
        else {
          iVar3 = 1;
          do {
            uVar4 = FUN_400da264(iVar3);
            uVar5 = FUN_400f25d4(param_2[1]);
            iVar6 = FUN_400f25a2(uVar4,param_2[1],uVar5);
            if (iVar6 == 0) break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 6);
        }
        if (4 < iVar3 - 1U) {
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df598,param_2[1]);
          return 0xffffffff;
        }
        FUN_400dbfd0(0x400df5c0);
        FUN_400df164(iVar3);
      }
      else {
        FUN_400dbfd0(0x400df5d8);
        iVar3 = 1;
        do {
          FUN_400df164(iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 6);
      }
      pcVar2 = (code *)FUN_400dfae0();
      (*pcVar2)(0x400df36c);
      return 0;
    }
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400df56c);
  }
  uStack_28 = *(undefined4 *)(iRam400deb48 + 0x8c);
  uStack_24 = *(undefined4 *)(iRam400deb48 + 0x90);
  uStack_20 = *(undefined4 *)(iRam400deb48 + 0x94);
  FUN_4000af54(*param_2,0x400df570,&uStack_28,3);
  return 0xffffffff;
}

