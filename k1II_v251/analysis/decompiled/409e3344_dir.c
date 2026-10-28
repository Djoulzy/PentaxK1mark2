/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 dir(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined2 auStack_218 [128];
  undefined1 auStack_118 [256];
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 *puStack_c;
  
  iStack_10 = param_1;
  puStack_c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_10);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_10)) {
    FUN_4070412c(auStack_118,param_2[1],0x100);
    FUN_4067cd44(0x409e3470,auStack_118);
    FUN_4067cd44(0x409e3480);
    FUN_4067cd44(0x409e34b4);
    FUN_4067cd44(0x409e3480);
    auStack_218[0] = uRam409e31bc;
    FUN_409e3224(auStack_118,auStack_218,1);
    FUN_40683170(auStack_218,0x409e34e4);
    FUN_409e3224(auStack_118,auStack_218,0);
    uVar2 = 0;
  }
  else {
    auStack_18[0] = *(undefined4 *)(iRam409e2c7c + 0x28);
    FUN_40679338(*param_2,0x409e34e8,auStack_18,1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

