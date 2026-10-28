/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_CPU_led(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_10;
  
  iStack_10 = param_4;
  if (param_1 < 2) {
    FUN_40009c8c(0,0,0x400c1bac);
    return 1;
  }
  iVar1 = FUN_400f2070(*(undefined4 *)(param_2 + 4),0x400c1bbc,&iStack_10);
  if ((iVar1 == 1) && (iStack_10 < 5)) {
    uVar2 = FUN_40006df0();
    FUN_40006ea4(uVar2,0x129);
    uVar3 = FUN_40006ea4(uVar2,0x48);
    uVar2 = FUN_40006ea4(uVar2,0xc0);
    FUN_400149bc(uVar3);
    FUN_40014a58(uVar3);
    FUN_40014adc(uVar3);
    FUN_40019300(uVar2);
    FUN_400192ac(uVar2,0xc00,100,0x19);
    FUN_40009c8c(0,0,0x400c1bd0);
    FUN_400149bc(uVar3);
    thunk_FUN_40019384(uVar2);
    return 0;
  }
  FUN_40009c8c(0,0,0x400c1bc0,*(undefined4 *)(param_2 + 4));
  return 2;
}

