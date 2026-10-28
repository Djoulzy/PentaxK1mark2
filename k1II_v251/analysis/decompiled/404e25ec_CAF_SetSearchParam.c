/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong CAF_SetSearchParam(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_1c);
  iVar2 = FUN_404c0eec();
  iVar2 = *(int *)(iVar2 + 4);
  uVar3 = FUN_40619bf4();
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'h')) {
    uStack_20 = *(uint *)(iRam404e1908 + 0x14);
    FUN_40679338(*param_2,uRam404e1e5c,&uStack_20,1);
    return CONCAT44(uStack_20,0xffffffff);
  }
  if (iStack_1c == 2) {
    uVar3 = FUN_4020c174(param_2[1],0);
    *(undefined4 *)(iVar2 + 0xf804) = uVar3;
  }
  else if (iStack_1c == 3) {
    uVar4 = FUN_4020c174(param_2[1],0);
    *(undefined4 *)(iVar2 + 0xf804) = uVar4;
    uVar4 = FUN_404e2540(iVar2);
    uVar4 = FUN_40683b6c(uVar4,3);
    FUN_4061c08c(uVar3,uVar4);
  }
  return (ulonglong)uStack_20 << 0x20;
}

