/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 httpr_monitor(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_18 = param_1;
  iStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    iVar2 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),0x403937e0);
    if (iVar2 == 0) {
      FUN_4067cd44(0x40393800);
      FUN_4039336c();
      FUN_4039347c();
    }
    else {
      iVar2 = FUN_4066f1e0(*(undefined4 *)(param_2 + 4),0x403937e8);
      if (iVar2 == 0) {
        FUN_4067cd44(0x40393814);
        iVar2 = FUN_4039336c();
        FUN_403d0710(iVar2 + 0x24);
      }
      else {
        FUN_4067cd44(0x403937f0);
      }
    }
  }
  return 0xffffffff;
}

