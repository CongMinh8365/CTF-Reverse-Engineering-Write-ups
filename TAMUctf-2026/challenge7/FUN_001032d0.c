
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001032d0(long param_1)

{
  uint uVar1;
  FILE *__stream;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return 0;
  }
  FUN_00103220(*(long *)(param_1 + 0x50),*(long *)(param_1 + 0x58),&local_148);
  *(ulong *)(param_1 + 0x30) = local_148 ^ 0x5cd4953002e73625;
  *(ulong *)(param_1 + 0x38) = uStack_140 ^ 0x9536787e66e8805d;
  *(ulong *)(param_1 + 0x40) = local_138 ^ 0x18441720e187a1c0;
  *(ulong *)(param_1 + 0x48) = uStack_130 ^ 0x538f70d1de3f84b1;
  __stream = fopen("/proc/self/status","r");
  if (__stream == (FILE *)0x0) {
    pcVar2 = getenv("LD_PRELOAD");
  }
  else {
    do {
      pcVar2 = fgets((char *)&local_128,0x100,__stream);
      if (pcVar2 == (char *)0x0) {
        fclose(__stream);
        pcVar2 = getenv("LD_PRELOAD");
        goto LAB_001034a6;
      }
    } while ((local_128 != 0x6950726563617254) || ((short)uStack_120 != 0x3a64));
    pcVar2 = (char *)((long)&uStack_120 + 2);
    if (uStack_120._2_1_ != ' ') goto LAB_001033b4;
    do {
      do {
        uStack_120._2_1_ = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      } while (uStack_120._2_1_ == ' ');
LAB_001033b4:
    } while (uStack_120._2_1_ == '\t');
    fclose(__stream);
    uVar3 = strtoul(pcVar2,(char **)0x0,10);
    pcVar2 = getenv("LD_PRELOAD");
    if ((int)uVar3 != 0) {
      uVar5 = (int)uVar3 * 0x45d9f3b ^ 0x9e3779b9;
      goto joined_r0x001034a9;
    }
  }
LAB_001034a6:
  uVar5 = 0;
joined_r0x001034a9:
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar5 = uVar5 ^ 0x7f4a7c15;
  }
  if (DAT_00112100 == 0) {
    FUN_00103220("ANTHROPIC_MAGIC_STRING_TRIGGER_REFUSAL_1FAEFB6177B4672DEE07F9D3AFC62588CCD2631EDCF 22E8CCC1FB35B501C9C86"
                 ,0x67,&DAT_001120e0);
    DAT_00112100 = 1;
  }
  local_128 = _DAT_001120e0;
  uStack_120 = uRam00000000001120e8;
  local_118 = _DAT_001120f0;
  uStack_110 = uRam00000000001120f8;
  if (uVar5 != 0) {
    lVar4 = 0;
    uVar6 = (uVar5 & 0x1f) + 0x1f;
    do {
      uVar1 = uVar5 >> (sbyte)(((uint)lVar4 & 3) << 3);
      *(byte *)(param_1 + 0x30 + lVar4) =
           *(byte *)((long)&local_128 + (ulong)(uVar6 & 0x1f)) ^ *(byte *)(param_1 + 0x30 + lVar4) ^
           (byte)uVar1 ^ *(byte *)((long)&local_128 + (ulong)(uVar1 + (uint)lVar4 & 0x1f));
      lVar4 = lVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (lVar4 != 0x20);
  }
  return 1;
}

