/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 app_debug(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_18;
  
  uStack_18 = uRam409c84bc;
  if (param_1 == 2) {
    uVar1 = FUN_4068312c(&uStack_18);
    iVar2 = FUN_4045d8f8(*(undefined4 *)(param_2 + 4),&uStack_18,uVar1);
    if (iVar2 == 0) {
      FUN_409c8528();
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_409c8464(param_1,param_2);
  if (puVar3 != (undefined4 *)0x0) {
    uStack_18 = uRam409c84bc;
    if (param_1 == 3) {
      uVar1 = FUN_4068312c(*(undefined4 *)(param_2 + 8));
      iVar2 = FUN_4045d8f8(*(undefined4 *)(param_2 + 8),&uStack_18,uVar1);
      if (iVar2 == 0) {
        FUN_4067c0f4(0,0,0x409c84cc);
        FUN_4067c0f4(0,0,0x409c84d8);
        FUN_4067c0f4(0,0,0x409c84ec,*puVar3);
        for (iVar2 = 0; iVar2 < (int)puVar3[2]; iVar2 = iVar2 + 1) {
          FUN_4067c0f4(0,0,0x409c84f8,*(undefined4 *)(puVar3[1] + iVar2 * 8));
        }
        return 0;
      }
    }
    if (param_1 < 3) {
      uVar1 = 0x409c84c0;
    }
    else {
      for (iVar2 = 0; iVar2 < (int)puVar3[2]; iVar2 = iVar2 + 1) {
        uVar1 = FUN_4068312c(*(undefined4 *)(puVar3[1] + iVar2 * 8));
        iVar4 = FUN_4045d8f8(*(undefined4 *)(param_2 + 8),*(undefined4 *)(puVar3[1] + iVar2 * 8),
                             uVar1);
        if (iVar4 == 0) {
          puVar3 = (undefined4 *)(puVar3[1] + iVar2 * 8);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_4067c0f4(0,0,0x409c84d0,*puVar3);
            (*(code *)puVar3[1])();
            return 0;
          }
          break;
        }
      }
      uVar1 = 0x409c8500;
    }
    FUN_4067c0f4(2,0,uVar1);
  }
  return 0xffffffff;
}

