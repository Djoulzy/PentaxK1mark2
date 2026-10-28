/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 VIEW_Store(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_402675cc();
  iVar2 = FUN_40449e00();
  iVar2 = *(int *)(iVar2 + 0x14);
  pcVar3 = (char *)FUN_406793bc(&uStack_18,param_2);
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0x403bd0f8;
    bVar5 = false;
  }
  else {
    cVar1 = *pcVar3;
    if (cVar1 == 'b') {
      bVar5 = *(char *)(iVar2 + 4) == '\0';
      *(bool *)(iVar2 + 4) = bVar5;
      uVar4 = 0x403bd19c;
    }
    else if (cVar1 == 'y') {
      bVar5 = *(char *)(iVar2 + 5) == '\0';
      *(bool *)(iVar2 + 5) = bVar5;
      uVar4 = 0x403bd1b8;
    }
    else if (cVar1 == 's') {
      bVar5 = *(char *)(iVar2 + 6) == '\0';
      *(bool *)(iVar2 + 6) = bVar5;
      uVar4 = 0x403bd1d4;
    }
    else if (cVar1 == 'v') {
      bVar5 = *(char *)(iVar2 + 8) == '\0';
      *(bool *)(iVar2 + 8) = bVar5;
      uVar4 = 0x403bd310;
    }
    else if (cVar1 == 'j') {
      bVar5 = *(char *)(iVar2 + 9) == '\0';
      *(bool *)(iVar2 + 9) = bVar5;
      uVar4 = 0x403bd328;
    }
    else if (cVar1 == 'w') {
      bVar5 = *(char *)(iVar2 + 10) == '\0';
      *(bool *)(iVar2 + 10) = bVar5;
      uVar4 = 0x403bd340;
    }
    else {
      if (cVar1 != 'm') {
        FUN_4067cd44(0x403bd108);
        return 0;
      }
      bVar5 = *(char *)(iVar2 + 0xb) == '\0';
      *(bool *)(iVar2 + 0xb) = bVar5;
      uVar4 = 0x403bd360;
    }
  }
  FUN_4067cd44(uVar4,bVar5);
  return 0;
}

