/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 AUD_test(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = param_1;
  puStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_404bfd38();
  iVar3 = FUN_404bfefc();
  pcVar2 = pcRam409e0000;
  cVar1 = *(char *)(iVar3 + 0x120);
  if (*pcRam409e0000 == '\0') {
    FUN_409a1270();
    FUN_409a1858();
    *pcVar2 = '\x01';
  }
  if ((cVar1 == '\0') && (iVar3 = FUN_409e0084(param_1,param_2), iVar3 == 0)) {
    uStack_28 = *puRam409e036c;
    puStack_24 = (undefined4 *)puRam409e036c[1];
    uStack_20 = puRam409e036c[2];
    uStack_1c = puRam409e036c[3];
    FUN_40679338(*param_2,0x409e0370,&uStack_28,4);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

