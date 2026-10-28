/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_PPU_Pwm2(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  int iStack_1c;
  
  uStack_20 = param_1;
  iStack_1c = param_2;
  FUN_406793bc(&uStack_20);
  FUN_4067cd44(0x403c07f0);
  uVar4 = 2000;
  uVar3 = 500;
  uVar1 = 4;
  uVar2 = FUN_40677b5c();
  uVar2 = FUN_40677c28(uVar2,0x135);
  if (*(int *)(param_2 + 4) != 0) {
    uVar4 = FUN_4066f214();
  }
  if (*(int *)(param_2 + 8) != 0) {
    uVar3 = FUN_4066f214();
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar1 = FUN_4066f214();
  }
  FUN_4067c0f4(0,0,0x403c0808,uVar4,uVar3,uVar1);
  FUN_40361588(uVar2,uVar4);
  FUN_403615a4(uVar2,uVar3);
  FUN_40361578(uVar2,uVar1);
  FUN_403621b4(uVar2,0x101);
  FUN_403610f4(uVar2,0x24,0x101);
  return 0;
}

