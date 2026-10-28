/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cc_SW_Dump(void)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_50 [18];
  
  iVar1 = FUN_400bd460();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  FUN_400bf78c(aiStack_50);
  FUN_400be02c(uVar2,aiStack_50);
  FUN_40009c8c(0,0,0x400c18ac);
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,0x28);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c18c0);
  }
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,0x27);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c18d4);
  }
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,9);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c18e8);
  }
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,0x1e);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c18fc);
  }
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,0x19);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c1910);
  }
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,0x21);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c1924);
  }
  iVar1 = (**(code **)(aiStack_50[0] + 8))(aiStack_50,0x20);
  if (iVar1 != 0) {
    FUN_40009c8c(0,0,0x400c1938);
  }
  thunk_FUN_400079f4(aiStack_50);
  return 0;
}

