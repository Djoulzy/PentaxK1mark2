/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 cpu_control(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    puVar2 = (undefined4 *)FUN_4067a4cc(&uStack_18);
    *puVar2 = uRam402dc908;
    iVar3 = FUN_4036a5c4();
    FUN_402dbf34(*(undefined4 *)(iVar3 + 0xc),&uStack_18,500,0);
    FUN_4067a4d8(&uStack_18);
  }
  else {
    uStack_18 = *puRam402dc90c;
    FUN_40679338(*param_2,0x402dc910,&uStack_18,1);
  }
  return CONCAT44(uStack_18,0xffffffff);
}

