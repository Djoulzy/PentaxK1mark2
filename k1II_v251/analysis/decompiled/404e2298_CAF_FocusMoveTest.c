/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong CAF_FocusMoveTest(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  uint uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_1c);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
LAB_404e2374:
    uStack_20 = *(uint *)(iRam404e1908 + 0x10);
    FUN_40679338(*param_2,uRam404e1e5c,&uStack_20,1);
    return CONCAT44(uStack_20,0xffffffff);
  }
  if (iStack_1c < 3) {
    if (iStack_1c != 2) goto LAB_404e2374;
    iVar2 = FUN_404c0eec();
    iVar5 = *(int *)(iVar2 + 4);
    iVar2 = FUN_4020c174(param_2[1],0);
    FUN_4067cd44(0x404e24e8);
    iVar4 = FUN_404c0eec();
    iVar4 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined1 *)(iVar4 + 0x137);
    *(undefined1 *)(iVar4 + 0x137) = 0;
    FUN_404e2004(iVar5,iVar2 != 0);
  }
  else {
    FUN_4067cd44(0x404e24e8);
    iVar2 = FUN_404c0eec();
    iVar5 = *(int *)(iVar2 + 4);
    uVar3 = FUN_4020c174(param_2[1],0);
    *(undefined4 *)(iVar5 + 0xf800) = uVar3;
    uVar3 = FUN_4020c174(param_2[2],0);
    *(undefined4 *)(iVar5 + 0xf804) = uVar3;
    if (iStack_1c != 4) goto LAB_404e235c;
    FUN_4020c174(param_2[3],0);
    uVar3 = FUN_4020ef18();
    *(undefined4 *)(iVar5 + 0xf808) = uVar3;
    iVar2 = FUN_404c0eec();
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined1 *)(iVar4 + 0x137);
    *(undefined1 *)(iVar4 + 0x137) = 0;
    FUN_404e20d4(iVar5);
  }
  *(short *)(iVar5 + 0xbef8) = (short)*(undefined4 *)(iVar5 + 0xbeec);
  *(undefined1 *)(iVar4 + 0x137) = uVar6;
LAB_404e235c:
  FUN_4067cd44(0x404e2504);
  return (ulonglong)uStack_20 << 0x20;
}

