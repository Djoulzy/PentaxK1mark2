/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SYS_tskrun(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [2];
  short sStack_4e;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  iStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_4000afd8(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (1 < iStack_18) {
      iVar3 = FUN_400f2824(param_2[1],0x400df7c4);
      pcVar1 = pcRam400df7cc;
      if (iVar3 == 0) {
        if (*pcRam400df7cc == '\0') {
          FUN_400d81ac();
          uVar4 = FUN_400dbed0();
          FUN_400dbf00(uVar4,uRam400df81c);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df820,pcVar2,*(undefined4 *)(pcVar1 + 0x18),*(undefined4 *)(pcVar1 + 0x1c))
          ;
          FUN_400d8168();
          *pcVar1 = '\x01';
        }
        else {
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df7f0,pcVar2,*(undefined4 *)(pcVar1 + 0x18),*(undefined4 *)(pcVar1 + 0x1c))
          ;
        }
      }
      else {
        iVar3 = FUN_400f2824(param_2[1],0x400df7d0);
        if (iVar3 != 0) {
          FUN_40009864(uRam400df56c);
          goto LAB_400df664;
        }
        if (*pcVar1 == '\0') {
          pcVar2 = (code *)FUN_400dfae0();
          uVar4 = 0x400df994;
        }
        else {
          FUN_400d8184();
          *pcVar1 = '\0';
          uStack_28 = 0;
          iStack_24 = 0;
          uVar4 = FUN_400dbed0();
          FUN_400dbf00(uVar4,&uStack_28);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df840,pcVar2,uStack_28,iStack_24);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df860,pcVar2,uStack_28 - *(uint *)(pcVar1 + 0x18),
                    iStack_24 -
                    (*(int *)(pcVar1 + 0x1c) + (uint)(uStack_28 < *(uint *)(pcVar1 + 0x18))));
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df818);
          FUN_400dbfd0(0x400df87c);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df88c);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df8bc);
          uVar4 = FUN_400d81a0(0);
          pcVar2 = (code *)FUN_400dfae0();
          (*pcVar2)(0x400df8f4,uVar4);
          iVar3 = 1;
          do {
            iVar5 = FUN_400e6a94((int)(short)iVar3,auStack_50);
            if (iVar5 == 0) {
              uVar4 = FUN_400d81a0(iVar3);
              uVar6 = FUN_400db674(iVar3);
              pcVar2 = (code *)FUN_400dfae0();
              (*pcVar2)(0x400df9b4,iVar3,uVar6,(int)sStack_4e,uVar4);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 6);
          pcVar2 = (code *)FUN_400dfae0();
          uVar4 = 0x400df818;
        }
        (*pcVar2)(uVar4);
      }
      return 0;
    }
    pcVar2 = (code *)FUN_400dfae0();
    (*pcVar2)(uRam400df56c);
  }
LAB_400df664:
  uStack_20 = *(undefined4 *)(iRam400deb48 + 0x24);
  uStack_1c = *(undefined4 *)(iRam400deb48 + 0x28);
  FUN_4000af54(*param_2,0x400df7d8,&uStack_20,2);
  return 0xffffffff;
}

