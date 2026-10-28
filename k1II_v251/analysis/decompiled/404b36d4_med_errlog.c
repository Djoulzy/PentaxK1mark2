/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 med_errlog(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  uStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_10);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_402530e8();
    uVar4 = *(undefined4 *)(iVar2 + 0x28);
    uVar3 = FUN_4038e954(uVar4,0x13);
    FUN_4067cd44(0x404b37ac,uVar3);
    uVar3 = FUN_4038e954(uVar4,0x14);
    FUN_4067cd44(0x404b37bc,uVar3);
  }
  else {
    auStack_18[0] = *puRam404b37cc;
    FUN_40679338(*param_2,0x404b37d0,auStack_18,1);
  }
  return 0;
}

