/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.
 * Automatically reconstructed C; types and names may be approximate.
 * Names from cmd_*.txt are original; obs_* names are analyst labels. */

longlong SYS_rcftb(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  
  iStack_14 = param_1;
  puStack_10 = param_2;
  pcVar1 = (char *)FUN_406793bc(&iStack_14);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'h')) && (3 < iStack_14)) {
    uVar2 = FUN_4020c174(param_2[3],0);
    uVar3 = FUN_4020b80c(param_2[2],0);
    FUN_40678d2c(param_2[1],uVar3,uVar2);
    return (ulonglong)uStack_18 << 0x20;
  }
  uStack_18 = *(uint *)(iRam408bbeb0 + 0x10);
  FUN_40679338(*param_2,0x408bbeec,&uStack_18,1);
  return CONCAT44(uStack_18,0xffffffff);
}

