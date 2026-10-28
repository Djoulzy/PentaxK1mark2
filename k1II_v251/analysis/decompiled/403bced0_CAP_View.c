/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_View(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  iVar3 = FUN_402675cc();
  piVar7 = *(int **)(iVar3 + 0x10);
  iVar3 = FUN_40449e00();
  iVar6 = *(int *)(iVar3 + 0x14);
  pcVar4 = (char *)FUN_406793bc(&uStack_18,param_2);
  iVar3 = iRam403bc3c4;
  if (pcVar4 == (char *)0x0) {
    uVar5 = 0x403bd0f8;
    bVar8 = false;
LAB_403bcff8:
    FUN_4067cd44(uVar5,bVar8);
  }
  else {
    cVar1 = *pcVar4;
    if (cVar1 == 's') {
      if (*(char *)(iRam403bc3c4 + 0xc) != '\0') {
        return 0;
      }
      FUN_4067cd44(0x403bd11c);
      (**(code **)(*piVar7 + 0x20))(piVar7,uRam403bd12c,0);
      uVar2 = 1;
    }
    else {
      if (cVar1 != 'e') {
        if (cVar1 == 'd') {
          FUN_4067cd44(0x403bd144);
          FUN_404116b8(iVar6);
          return 0;
        }
        if (cVar1 == 'p') {
          bVar8 = *(char *)(iVar6 + 0xc) == '\0';
          *(bool *)(iVar6 + 0xc) = bVar8;
          uVar5 = 0x403bd164;
        }
        else {
          if (cVar1 != 'r') {
            FUN_4067cd44(0x403bd108);
            return 0;
          }
          bVar8 = *(char *)(iVar6 + 0xd) == '\0';
          *(bool *)(iVar6 + 0xd) = bVar8;
          uVar5 = 0x403bd180;
        }
        goto LAB_403bcff8;
      }
      if (*(char *)(iRam403bc3c4 + 0xc) == '\0') {
        return 0;
      }
      FUN_4067cd44(0x403bd130);
      (**(code **)(*piVar7 + 0x20))(piVar7,uRam403bd140,0);
      uVar2 = 0;
    }
    *(undefined1 *)(iVar3 + 0xc) = uVar2;
  }
  return 0;
}

