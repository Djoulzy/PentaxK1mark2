/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 sric_led(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_18 = param_1;
  iStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    bVar3 = *(int *)(param_2 + 4) != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = *(int *)(param_2 + 8);
    }
    if (bVar3 && iVar2 != 0) {
      iVar2 = FUN_4025a8cc();
      iVar2 = *(int *)(iVar2 + 0x28);
      FUN_4067ca30(iVar2 != 0,0x40278ecc,uRam40278b24,0x3bc,uRam40278ec8);
      if (**(char **)(param_2 + 4) == '0') {
        FUN_402786ec(iVar2,**(char **)(param_2 + 8) != '0');
        return 0;
      }
      if (**(char **)(param_2 + 4) == '1') {
        FUN_40278478(iVar2,**(char **)(param_2 + 8) != '0');
        return 0;
      }
    }
  }
  FUN_4067cd44(0x40278ed8);
  FUN_4067cd44(0x40278eec);
  FUN_4067cd44(0x40278f04);
  FUN_4067cd44(0x40278f1c);
  FUN_4067cd44(0x40278f34);
  FUN_4067cd44(0x40278f4c);
  return 0;
}

