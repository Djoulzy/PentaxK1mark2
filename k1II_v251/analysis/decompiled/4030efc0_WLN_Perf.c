/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 WLN_Perf(void)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_402bfe00();
  piVar1 = (int *)FUN_402c02c4();
  (**(code **)(*piVar1 + 0x48))(piVar1,&uStack_28,&uStack_30,&uStack_20);
  uVar2 = FUN_4020fa2e(uStack_28,uStack_24,0xfffffff6);
  uVar3 = FUN_4020fa2e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0xfffffff6);
  FUN_4067cd44(0x4030f190,uStack_2c,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar2,uStack_30,
               uStack_2c,uStack_20,uStack_1c);
  return 0;
}

