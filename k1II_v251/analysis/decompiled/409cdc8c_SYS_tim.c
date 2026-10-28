/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_tim(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_20);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) {
    if (iStack_20 < 2) {
      FUN_409cdc20(0x409cde74);
      FUN_4067cd44(0x409cde7c);
      FUN_4067cd44(0x409cdea0);
      uVar2 = FUN_40677b5c();
      uVar2 = FUN_40677c28(uVar2,0xaa);
      uVar3 = FUN_409d66ac();
      iVar4 = FUN_409d66b8(uVar2);
      if (iVar4 == 0) {
        uVar2 = 0x409cded0;
      }
      else {
        uVar2 = 0x409cdec8;
      }
      FUN_4067cd44(0x409cdee0,0x409cded8,uVar2,uVar3);
      uVar2 = FUN_40677b5c();
      uVar2 = FUN_40677c28(uVar2,0xab);
      uVar3 = FUN_409d6b04();
      iVar4 = FUN_409d6b10(uVar2);
      if (iVar4 == 0) {
        uVar2 = 0x409cded0;
      }
      else {
        uVar2 = 0x409cdec8;
      }
      FUN_4067cd44(0x409cdee0,0x409cdefc,uVar2,uVar3);
      iVar4 = 0xac;
      do {
        uVar2 = FUN_40677b5c();
        uVar2 = FUN_40677c28(uVar2,iVar4);
        uVar3 = FUN_4035db88();
        iVar5 = FUN_4035dba0(uVar2);
        if (iVar5 == 0) {
          uVar2 = 0x409cded0;
        }
        else {
          uVar2 = 0x409cdec8;
        }
        FUN_4067cd44(0x409cdf10,0x409cdf04,iVar4 + -0xac,uVar2,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xb6);
      iVar4 = 0xb6;
      do {
        uVar2 = FUN_40677b5c();
        uVar2 = FUN_40677c28(uVar2,iVar4);
        iVar5 = FUN_4063b138();
        if (iVar5 == 0) {
          for (iVar5 = iVar4; iVar5 <= iVar4 + 3; iVar5 = iVar5 + 1) {
            uVar2 = FUN_40677b5c();
            uVar2 = FUN_40677c28(uVar2,iVar5);
            uVar3 = FUN_4063adf8();
            iVar6 = FUN_4063ade8(uVar2);
            if (iVar6 == 0) {
              uVar2 = 0x409cded0;
            }
            else {
              uVar2 = 0x409cdec8;
            }
            FUN_4067cd44(0x409cdf34,0x409ce19c,iVar5 + -0xb6,uVar2,uVar3);
          }
        }
        else {
          uVar3 = FUN_4063b1b4(uVar2);
          iVar5 = FUN_4063b1a4(uVar2);
          if (iVar5 == 0) {
            uVar2 = 0x409cded0;
          }
          else {
            uVar2 = 0x409cdec8;
          }
          FUN_4067cd44(0x409cdf34,0x409cdf2c,iVar4 + -0xb6,uVar2,uVar3);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xc6);
      FUN_4067cd44(0x409ce1a4);
      return 0;
    }
    FUN_4067cd44(0x409cd98c);
  }
  uStack_24 = *puRam409cde4c;
  FUN_40679338(*param_2,0x409cde50,&uStack_24,1);
  return 0xffffffff;
}

