/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined8 cpu_led(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  uStack_1c = param_1;
  iStack_18 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_1c);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != 'h')) {
    bVar5 = *(int *)(param_2 + 4) != 0;
    iVar3 = 0;
    if (bVar5) {
      iVar3 = *(int *)(param_2 + 8);
    }
    if (bVar5 && iVar3 != 0) {
      iVar3 = FUN_4036a5c4();
      iVar3 = *(int *)(iVar3 + 0x20);
      uStack_20 = uRam402fbb4c;
      FUN_4067ca30(iVar3 != 0,0x402fbb54,uRam402fbb50,0x227);
      uVar4 = FUN_4020b80c(*(undefined4 *)(param_2 + 4),0,10);
      uVar1 = FUN_4020c174(*(undefined4 *)(param_2 + 8),0,10);
      switch(uVar4) {
      case 0:
        func_0x402fb630(iVar3);
        break;
      case 1:
        func_0x402fb640(iVar3,uVar1,1);
        break;
      case 2:
        func_0x402fb650(iVar3,uVar1,2);
        break;
      case 3:
        func_0x402fb660(iVar3,uVar1,2);
        break;
      case 4:
        func_0x402fb7dc(iVar3,uVar1,0);
        break;
      default:
        goto LAB_402fbb40;
      }
      func_0x402fb75c(iVar3);
      goto LAB_402fbb40;
    }
    FUN_4067cd44(0x402fbb60);
  }
  FUN_4067cd44(0x402fbb74);
  FUN_4067cd44(0x402fbb88);
  FUN_4067cd44(0x402fbba0);
  FUN_4067cd44(0x402fbbbc);
  FUN_4067cd44(0x402fbbd4);
  FUN_4067cd44(0x402fbbf0);
  FUN_4067cd44(0x402fbc08);
  FUN_4067cd44(0x402fbc20);
  FUN_4067cd44(0x402fbc38);
  FUN_4067cd44(0x402fbc50);
LAB_402fbb40:
  return CONCAT44(uStack_20,0xffffffff);
}

