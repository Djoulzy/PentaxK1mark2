/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SW_lcd(void)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_58 [20];
  
  iVar1 = FUN_402698c4();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  FUN_4066f230(aiStack_58);
  FUN_4041abe8(uVar2,aiStack_58);
  FUN_4067c0f4(0,0,0x409eaf0c);
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x27);
  if (iVar1 == 0) {
    uVar2 = 0x409eaf34;
  }
  else {
    uVar2 = 0x409eaf20;
  }
  FUN_4067c0f4(0,0,uVar2);
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x28);
  if (iVar1 == 0) {
    uVar2 = 0x409eaf5c;
  }
  else {
    uVar2 = 0x409eaf48;
  }
  FUN_4067c0f4(0,0,uVar2);
  iVar1 = (**(code **)(aiStack_58[0] + 8))(aiStack_58,0x26);
  if (iVar1 == 0) {
    uVar2 = 0x409eaf84;
  }
  else {
    uVar2 = 0x409eaf70;
  }
  FUN_4067c0f4(0,0,uVar2);
  thunk_FUN_408962b4(aiStack_58);
  return 0;
}

