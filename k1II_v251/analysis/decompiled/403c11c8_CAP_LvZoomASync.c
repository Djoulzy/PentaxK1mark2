/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_LvZoomASync(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  uStack_24 = param_1;
  iStack_20 = param_2;
  pcVar3 = (char *)FUN_406793bc(&uStack_24);
  if (pcVar3 != (char *)0x0) {
    iVar4 = FUN_40449e00();
    iVar4 = *(int *)(iVar4 + 4);
    iStack_30 = iRam403c1490;
    FUN_4067ca30(iVar4 != 0,uRam403c1494,uRam403c11b4,0x1098);
    cVar1 = *pcVar3;
    if (cVar1 == 's') {
      FUN_405ba328(iVar4);
    }
    else {
      iVar7 = 0;
      iVar6 = 0;
      if (*(int *)(param_2 + 4) != 0) {
        iVar5 = FUN_4066f214();
        cVar2 = *pcVar3;
        if (cVar2 == 'r') {
          iVar7 = iVar5;
        }
        else if (cVar2 == 'l') {
          iVar7 = -iVar5;
        }
        else if (cVar2 == 'd') {
          iVar6 = iVar5;
        }
        else if (cVar2 == 'u') {
          iVar6 = -iVar5;
        }
      }
      iStack_30 = iVar7 << 0xc;
      iStack_2c = iVar6 << 0xc;
      uStack_28 = cVar1 == 'c';
      FUN_405ba234(iVar4,&iStack_30);
    }
  }
  return 0;
}

