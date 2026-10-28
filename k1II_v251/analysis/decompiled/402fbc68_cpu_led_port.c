/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 cpu_led_port(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_18 = param_1;
  iStack_14 = param_2;
  pcVar1 = (char *)FUN_406793bc(&uStack_18);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (*(int *)(param_2 + 4) != 0) {
      iVar2 = FUN_4036a5c4();
      iVar4 = *(int *)(iVar2 + 0x20);
      FUN_4067ca30(iVar4 != 0,0x402fbb54,uRam402fbb50,0x261,uRam402fbd30);
      iVar2 = FUN_4020b80c(*(undefined4 *)(param_2 + 4),0,10);
      if (iVar2 == 0) {
        uVar3 = 0;
LAB_402fbd24:
        FUN_402fb864(iVar4,uVar3);
        return 0xffffffff;
      }
      if (iVar2 == 1) {
        uVar3 = 1;
        goto LAB_402fbd24;
      }
    }
    FUN_4067cd44(0x402fbb60);
  }
  FUN_4067cd44(0x402fbd34);
  FUN_4067cd44(0x402fbd4c);
  FUN_4067cd44(0x402fbd60);
  FUN_4067cd44(0x402fbd78);
  return 0xffffffff;
}

