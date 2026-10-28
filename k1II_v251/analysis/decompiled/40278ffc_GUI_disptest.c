/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 GUI_disptest(int param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  FUN_406793bc(&iStack_20);
  iVar3 = FUN_40669e34();
  uVar1 = uRam402791e4;
  FUN_4067ca30(iVar3 != 0,0x40279204,0x402791e8,0x35,uRam402791e4);
  bVar2 = 0;
  if (iStack_20 == 2) {
    FUN_4067ca30(param_2 != 0,0x40279214,0x402791e8,0x3b,uVar1);
    bVar2 = FUN_4066f214(*(undefined4 *)(param_2 + 4));
    if (0xe < bVar2) {
      bVar2 = 0;
    }
  }
  FUN_4067cd44(0x4027921c);
  FUN_4066dbac(iVar3,bVar2,0,1);
  return 0;
}

