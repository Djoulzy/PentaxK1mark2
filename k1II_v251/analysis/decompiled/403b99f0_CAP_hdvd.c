/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_hdvd(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_18);
  iVar3 = FUN_403ea634();
  uVar5 = *(undefined4 *)(iVar3 + 8);
  FUN_403ea634();
  uVar4 = FUN_40677b5c();
  FUN_40677c28(uVar4,0xaf);
  FUN_402675cc();
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  FUN_4067cd44(0x403b9b64);
  cVar1 = *pcVar2;
  if (cVar1 == 'a') {
    FUN_4067cd44(0x403b9b84);
    uVar4 = 1;
  }
  else if (cVar1 == 'b') {
    FUN_4067cd44(0x403b9b9c);
    uVar4 = 5;
  }
  else {
    if (cVar1 != 'c') goto LAB_403b9a80;
    FUN_4067cd44(0x403b9bb0);
    uVar4 = 2;
  }
  FUN_403e8b34(uVar5,uVar4);
LAB_403b9a80:
  FUN_4067cd44(0x403b9b98);
  return 0;
}

