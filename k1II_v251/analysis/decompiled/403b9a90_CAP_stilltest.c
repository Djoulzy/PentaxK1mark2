/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

undefined4 CAP_stilltest(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_1;
  uStack_10 = param_2;
  pcVar2 = (char *)FUN_406793bc(&uStack_14);
  iVar3 = FUN_402675cc();
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  if (pcVar2 != (char *)0x0) {
    FUN_4067cd44(0x403b9bc8);
    cVar1 = *pcVar2;
    if (cVar1 == 's') {
      FUN_4067cd44(0x403b9fbc);
      FUN_405588a8(uVar4,0);
      FUN_40558680(uVar4);
      FUN_40558698(uVar4);
    }
    else if (cVar1 == 'c') {
      FUN_4067cd44(0x403b9fd4);
      uStack_38 = 0;
      uStack_37 = 0;
      uStack_36 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_40559f3c(uVar4,&uStack_38);
    }
    else if (cVar1 == 'd') {
      uVar4 = FUN_4034e5d4();
      FUN_40350154(uVar4,0,1);
    }
    FUN_4067cd44(0x403b9fe8);
  }
  return 0;
}

