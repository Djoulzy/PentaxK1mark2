/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_REG_IIP(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_10);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == '1') {
      iVar3 = FUN_40418f58();
      FUN_40304a14(*(undefined4 *)(iVar3 + 8));
    }
    else if (cVar1 == 'a') {
      iVar3 = FUN_40418f58();
      FUN_402e47ac(*(undefined4 *)(iVar3 + 0xc));
    }
    else if (cVar1 == 'b') {
      iVar3 = FUN_40418f58();
      FUN_40304fcc(*(undefined4 *)(iVar3 + 0x10));
    }
    else if (cVar1 == 'f') {
      iVar3 = FUN_40418f58();
      FUN_40350f68(*(undefined4 *)(iVar3 + 0x14));
    }
    else if (cVar1 == 'c') {
      iVar3 = FUN_40418f58();
      FUN_40305450(*(undefined4 *)(iVar3 + 0x18));
    }
    else if (cVar1 == 'r') {
      iVar3 = FUN_40418f58();
      FUN_403062bc(*(undefined4 *)(iVar3 + 0x1c));
    }
    else if (cVar1 == 'g') {
      iVar3 = FUN_40418f58();
      FUN_403070c8(*(undefined4 *)(iVar3 + 0x20));
    }
    else if (cVar1 == 'l') {
      iVar3 = FUN_40418f58();
      FUN_40307924(*(undefined4 *)(iVar3 + 0x24));
    }
    else if (cVar1 == 'm') {
      iVar3 = FUN_40418f58();
      FUN_40307f34(*(undefined4 *)(iVar3 + 0x28));
    }
    else if (cVar1 == 's') {
      iVar3 = FUN_40418f58();
      FUN_403090c8(*(undefined4 *)(iVar3 + 0x2c));
    }
    else if (cVar1 == 'd') {
      iVar3 = FUN_40418f58();
      FUN_402e51e0(*(undefined4 *)(iVar3 + 0x30));
    }
    else {
      iVar3 = FUN_40418f58();
      FUN_40303fa4(*(undefined4 *)(iVar3 + 4));
    }
  }
  return 0;
}

