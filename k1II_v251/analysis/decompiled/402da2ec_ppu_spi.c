/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 ppu_spi(int param_1,undefined4 *param_2)

{
  short sVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  ushort auStack_24 [2];
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar3 = (char *)FUN_406793bc(&iStack_1c);
  sVar1 = 0;
  auStack_24[0] = 0;
  iVar4 = FUN_402d97cc();
  iVar4 = *(int *)(iVar4 + 0x30);
  if (iVar4 == 0) {
    FUN_4067cd44(uRam402da5fc);
  }
  else {
    if (((pcVar3 == (char *)0x0) || (*pcVar3 != 'h')) && (iStack_1c < 2)) {
      uVar7 = 0;
      do {
        if ((uVar7 & 0x80000003) != 3) {
          FUN_402f9338(iVar4,sVar1,uVar7 & 0xffff);
        }
        sVar1 = sVar1 + 1;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 200);
      FUN_402f98d4(iVar4,0x101);
      FUN_402fa1b0(iVar4,1);
      uVar8 = 0;
      uVar7 = 0;
      do {
        FUN_402f98b8(iVar4,auStack_24,uVar7 & 0xffff);
        if ((uint)((int)uVar7 % 4) < 2) {
          uVar2 = uVar8 & 0x3ff;
          uVar6 = auStack_24[0] & 0x3ff;
LAB_402da424:
          FUN_4067cd44(0x402da62c,uVar7,uVar8);
          if (uVar6 != uVar2) break;
        }
        else if ((int)uVar7 % 4 == 2) {
          uVar2 = uVar8 & 7;
          uVar6 = auStack_24[0] & 7;
          goto LAB_402da424;
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 200);
      if (uVar8 < 200) {
        uVar5 = 0x402da600;
      }
      else {
        uVar5 = 0x402da614;
      }
      FUN_4067cd44(uVar5);
      FUN_4067cd44(0x402da610);
      return 0;
    }
    uStack_20 = *(undefined4 *)(iRam402d9ee0 + 0x10);
    FUN_40679338(*param_2,0x402da664,&uStack_20,1);
  }
  return 0xffffffff;
}

