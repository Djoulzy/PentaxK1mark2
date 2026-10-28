/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 SYS_relc(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [20];
  int iStack_2c;
  int iStack_1c;
  undefined4 *puStack_18;
  
  uVar7 = 0xffffffff;
  iStack_1c = param_1;
  puStack_18 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_1c);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (1 < iStack_1c)) {
    iVar2 = FUN_4067992c();
    uVar5 = uRam4099a2e4;
    piVar6 = *(int **)(iVar2 + 0x10);
    uStack_48 = uRam4099a2e4;
    FUN_4067ca30(piVar6 != (int *)0x0,0x4099a2f4,0x4099a2e8,0xab);
    uStack_44 = 0;
    iVar2 = (**(code **)(*piVar6 + 0x14))(piVar6,param_2[1],1,&uStack_44);
    if (iVar2 == 0) {
      FUN_4067cd44(0x4099a314,param_2[1]);
    }
    else {
      FUN_40677f14(auStack_40);
      FUN_40635378(piVar6,uStack_44,auStack_40);
      iVar2 = iStack_2c;
      uVar7 = FUN_4067825c();
      iVar2 = FUN_40678400(uVar7,iVar2,0);
      uStack_48 = uVar5;
      FUN_4067ca30(iVar2 != 0,0x4099a304,0x4099a2e8,0xb4);
      (**(code **)(*piVar6 + 0x1c))(piVar6,uStack_44,iVar2,iStack_2c);
      (**(code **)(*piVar6 + 0x18))(piVar6,uStack_44);
      uVar7 = FUN_4067825c();
      iVar3 = FUN_40678400(uVar7,iStack_2c * 10,0);
      uStack_48 = uVar5;
      FUN_4067ca30(iVar3 != 0,0x4099a30c,0x4099a2e8,0xbb);
      uVar7 = FUN_40999f7c();
      iVar4 = FUN_4099a0b4(uVar7,iVar2,iVar3);
      if (iVar4 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 0;
      }
      uVar5 = FUN_4067825c();
      FUN_40678550(uVar5,iVar2,0xffffffff,0);
      uVar5 = FUN_4067825c();
      FUN_40678550(uVar5,iVar3,0xffffffff,0);
      FUN_40677f78(auStack_40);
    }
  }
  else {
    uStack_48 = *puRam4099a2cc;
    FUN_40679338(*param_2,0x4099a2d0,&uStack_48,1);
  }
  return uVar7;
}

