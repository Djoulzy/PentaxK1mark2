/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 IQ_acalc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 < 3) {
    uStack_18 = param_3;
    uStack_14 = param_4;
    FUN_4067c0f4(0,0,uRam409909bc);
  }
  else {
    uStack_18 = *(undefined4 *)(iRam409900e0 + 8);
    uStack_14 = *(undefined4 *)(iRam409900e0 + 0xc);
    if (3 < param_1) {
      thunk_FUN_40212290(*(undefined4 *)(param_2 + 0xc),uStack_14);
    }
    uVar2 = FUN_4020f9cc();
    uStack_18 = (undefined4)uVar2;
    if (param_1 < 5) {
      uVar1 = 0;
    }
    else {
      uVar2 = FUN_40212290(*(undefined4 *)(param_2 + 0x10),(int)((ulonglong)uVar2 >> 0x20));
      uVar1 = FUN_4068341c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,uRam409909c8);
    }
    uStack_14 = FUN_4020f9cc(uVar1);
    if (param_1 < 6) {
      uVar1 = FUN_4098d8e0();
      FUN_409906ac(uVar1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),&uStack_18);
      return 0;
    }
  }
  return 0xffffffff;
}

