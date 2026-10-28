/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_REG_B2Y(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_10);
  iVar3 = FUN_4049a740();
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == 'r') {
      uVar4 = 1;
    }
    else if (cVar1 == 'w') {
      uVar4 = 0;
    }
    else if (cVar1 == 'c') {
      uVar4 = 2;
    }
    else if (cVar1 == 't') {
      uVar4 = 3;
    }
    else {
      uVar4 = 4;
    }
    FUN_404492a0(*(undefined4 *)(iVar3 + 0x10),uVar4);
  }
  return 0;
}

