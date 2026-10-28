/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 Ui_GetGuiCompStatus(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if (param_1 < 3) {
    uVar2 = 0x4061933c;
  }
  else {
    uVar2 = FUN_4066f214(*(undefined4 *)(param_2 + 4));
    puVar1 = puRam40619344;
    *puRam40619344 = uVar2;
    uVar2 = FUN_4066f214(*(undefined4 *)(param_2 + 8));
    puVar1[1] = uVar2;
    iVar3 = FUN_4067b820(uRam40618e0c,0x100);
    if (iVar3 != 0) {
      uStack_18 = 0;
      FUN_4067ba20(uRam40618e14,0x100,&uStack_18,*puRam40618e04);
      FUN_4067b888(uRam40618e14,uStack_18);
      return 0;
    }
    uVar2 = 0x40619348;
  }
  FUN_4067cd44(uVar2);
  return 0xffffffff;
}

