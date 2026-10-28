/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong AUD_rtime(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_14)) {
    uVar2 = FUN_4066f214(param_2[1]);
    pcVar1 = pcRam409e0000;
    if (0 < (int)uVar2) {
      if (*pcRam409e0000 == '\0') {
        FUN_409a1270();
        FUN_409a1858();
        *pcVar1 = '\x01';
      }
      uVar3 = FUN_409a1270();
      FUN_409a1938(uVar3,uVar2 & 0xffff);
      FUN_4067cd44(0x409e03f0,uVar2 & 0xffff);
      return (ulonglong)uStack_18 << 0x20;
    }
    FUN_4067cd44(0x409e03d4);
  }
  else {
    uStack_18 = *(uint *)(iRam409e03bc + 4);
    FUN_40679338(*param_2,0x409e060c,&uStack_18,1);
  }
  return CONCAT44(uStack_18,0xffffffff);
}

