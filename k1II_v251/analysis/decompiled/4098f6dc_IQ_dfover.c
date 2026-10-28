/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 IQ_dfover(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_5c [64];
  undefined4 uStack_1c;
  
  if (1 < param_1) {
    uStack_1c = 0;
    FUN_40683cc4(auStack_5c,0x40);
    iVar1 = FUN_4098f48c(&uStack_1c,*(undefined4 *)(param_2 + 4));
    if (iVar1 != 0) {
      iVar1 = 0;
      for (iVar4 = 2; iVar4 < param_1; iVar4 = iVar4 + 1) {
        iVar2 = FUN_40211b84(*(undefined4 *)(param_2 + iVar4 * 4),0x4098f838,auStack_5c + iVar1 * 4)
        ;
        if (iVar2 == 0) {
          FUN_4067cd44(0x4098f83c,*(undefined4 *)(param_2 + iVar4 * 4));
        }
        else {
          iVar1 = iVar1 + 1;
        }
        if (0x10 < iVar1) break;
      }
      uVar3 = FUN_4098d8e0();
      FUN_4098ea98(uVar3,1,uStack_1c,auStack_5c,iVar1);
      return 0;
    }
  }
  return 0xffffffff;
}

