/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_tskrun(int param_1,undefined4 *param_2)

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
  pcVar1 = (char *)FUN_406793bc(&iStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (1 < iStack_18) {
      iVar3 = FUN_40683ba0(param_2[1],0x4068f320);
      pcVar1 = pcRam4068f328;
      if (iVar3 == 0) {
        if (*pcRam4068f328 == '\0') {
          FUN_4041c6cc();
          uVar4 = FUN_4041ccf8();
          FUN_4041cd28(uVar4,uRam4068f378);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f37c,pcVar2,*(undefined4 *)(pcVar1 + 0x18),*(undefined4 *)(pcVar1 + 0x1c))
          ;
          FUN_4041c688();
          *pcVar1 = '\x01';
        }
        else {
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f34c,pcVar2,*(undefined4 *)(pcVar1 + 0x18),*(undefined4 *)(pcVar1 + 0x1c))
          ;
        }
      }
      else {
        iVar3 = FUN_40683ba0(param_2[1],0x4068f32c);
        if (iVar3 != 0) {
          FUN_4067cd44(uRam4068f010);
          goto LAB_4068f1c0;
        }
        if (*pcVar1 == '\0') {
          pcVar2 = (code *)FUN_40554324();
          uVar4 = 0x4068f4f0;
        }
        else {
          FUN_4041c6a4();
          *pcVar1 = '\0';
          uStack_28 = 0;
          iStack_24 = 0;
          uVar4 = FUN_4041ccf8();
          FUN_4041cd28(uVar4,&uStack_28);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f39c,pcVar2,uStack_28,iStack_24);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f3bc,pcVar2,uStack_28 - *(uint *)(pcVar1 + 0x18),
                    iStack_24 -
                    (*(int *)(pcVar1 + 0x1c) + (uint)(uStack_28 < *(uint *)(pcVar1 + 0x18))));
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f374);
          FUN_4068ad54(0x4068f3d8);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f3e8);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f418);
          uVar4 = FUN_4041c6c0(0);
          pcVar2 = (code *)FUN_40554324();
          (*pcVar2)(0x4068f450,uVar4);
          iVar3 = 1;
          do {
            iVar5 = FUN_403d1b94((int)(short)iVar3,auStack_50);
            if (iVar5 == 0) {
              uVar4 = FUN_4041c6c0(iVar3);
              uVar6 = FUN_4067aae8(iVar3);
              pcVar2 = (code *)FUN_40554324();
              (*pcVar2)(0x4068f510,iVar3,uVar6,(int)sStack_4e,uVar4);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x97);
          pcVar2 = (code *)FUN_40554324();
          uVar4 = 0x4068f374;
        }
        (*pcVar2)(uVar4);
      }
      return 0;
    }
    pcVar2 = (code *)FUN_40554324();
    (*pcVar2)(uRam4068f010);
  }
LAB_4068f1c0:
  uStack_20 = *(undefined4 *)(iRam4068eb58 + 0x24);
  uStack_1c = *(undefined4 *)(iRam4068eb58 + 0x28);
  FUN_40679338(*param_2,0x4068f334,&uStack_20,2);
  return 0xffffffff;
}

