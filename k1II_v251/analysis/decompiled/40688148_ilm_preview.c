/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ilm_preview(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  uStack_18 = param_1;
  puStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (param_2[1] != 0)) &&
     (iVar2 = FUN_4020c174(param_2[1],0,10), iVar2 != -1)) {
    iVar3 = FUN_402ebbd8();
    if (iVar2 == 0) {
      uVar4 = uRam406881fc;
    }
    else {
      uVar4 = uRam40688200;
    }
    (**(code **)(**(int **)(iVar3 + 8) + 0x24))(*(int **)(iVar3 + 8),uVar4,0);
  }
  else {
    auStack_20[0] = *puRam40688204;
    FUN_40679338(*param_2,0x40688208,auStack_20,1);
    FUN_4067cd44(0x40688230);
    FUN_4067cd44(0x4068824c);
  }
  return 0xffffffff;
}

