/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 DPU_DispSwitch(void)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_58 [20];
  
  iVar1 = FUN_402698c4();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  FUN_4066f230(aiStack_58);
  FUN_4041abe8(uVar2,aiStack_58);
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccc78);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,4);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccc80);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,3);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccc88);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,1);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccc90);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,2);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccc98);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x20);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccca0);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x2f);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccca8);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x1b);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409cccb0);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,5);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409cccb8);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,6);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409cccc0);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x12);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409cccc8);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x4c);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409cccd0);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x1f);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409cccd8);
  }
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x1d);
  if (iVar1 != 0) {
    FUN_4067c0f4(0,0,0x409ccd28);
  }
  thunk_FUN_408962b4(aiStack_58);
  return 0;
}

