/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 MED_find(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [256];
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_10);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (2 < iStack_10)) {
    FUN_4070412c(auStack_218,param_2[1],0x100);
    FUN_4067cd44(0x409e3470,auStack_218);
    FUN_4070412c(auStack_118,param_2[2],0x100);
    FUN_4067cd44(0x409e36f0,auStack_118);
    FUN_4067cd44(0x409e3480);
    FUN_4067cd44(0x409e34b4);
    FUN_4067cd44(0x409e3480);
    FUN_409e3224(auStack_218,auStack_118,1);
    FUN_409e3224(auStack_218,auStack_118,0);
    uVar2 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam409e2c7c + 0x2c);
    FUN_40679338(*param_2,0x409e3700,auStack_18,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

