/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4
CAF_SetLensOffsetPulseParam(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_4067c0f4(0,0,0x4061c4f4,param_4,param_4);
  FUN_4067c0f4(0,0,0x4061c51c,param_1);
  iVar1 = iRam4061b578;
  if (param_1 == 2) {
    if (*(int *)(iRam4061b578 + 4) == 0) {
      uVar5 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
      uVar2 = uRam4061c548;
      *(undefined4 *)(iVar1 + 4) = uVar5;
      FUN_4067c0f4(0,0,uVar2,uVar5,param_4);
    }
    else {
      iVar3 = FUN_4020c174(*(undefined4 *)(param_2 + 4),0);
      iVar4 = *(int *)(iVar1 + 4) * iVar3;
      *(int *)(iVar1 + 4) = iVar4;
      FUN_4067c0f4(0,0,0x4061c528,iVar3,iVar4);
    }
  }
  FUN_4067c0f4(0,0,0x4061c54c);
  return 0;
}

