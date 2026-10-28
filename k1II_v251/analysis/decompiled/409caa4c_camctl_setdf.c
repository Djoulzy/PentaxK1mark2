/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 camctl_setdf(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  uStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_409c8bdc(param_2[1]);
    iVar3 = FUN_409c8bdc(param_2[2]);
    if (iVar2 != -1 && iVar3 != -1) {
      iVar2 = FUN_409ca9d0(0x18,iVar2);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      return 0;
    }
    FUN_4067cd44(uRam409ca684);
  }
  auStack_20[0] = *(undefined4 *)(iRam409c9f9c + 0x6c);
  FUN_40679338(*param_2,0x409cad24,auStack_20,1);
  return 0xffffffff;
}

