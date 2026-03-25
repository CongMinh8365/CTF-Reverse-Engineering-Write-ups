uint FUN_001011c0(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ulong uVar4;
  int iStack_354;
  uint uStack_350;
  uint uStack_34c;
  FILE *pFStack_348;
  char *pcStack_340;
  undefined1 auStack_335 [29];
  char acStack_318 [512];
  char acStack_118 [264];
  
  setvbuf(_stdin,(char *)0x0,2,0);
  setvbuf(_stdout,(char *)0x0,2,0);
  setvbuf(_stderr,(char *)0x0,2,0);
  printf("we await your offering> ");
  pcVar2 = fgets(acStack_318,0x200,_stdin);
  iStack_354 = 0x2a88a9e0;
  if (pcVar2 == (char *)0x0) {
    iStack_354 = 0xc805e1d;
  }
  while (iStack_354 != 0x57821dd) {
    if (iStack_354 == 0xa586c9f) {
      uStack_350 = uStack_34c;
      puts(pcStack_340);
      iStack_354 = 0x57821dd;
    }
    else if (iStack_354 == 0xc805e1d) {
      puts("ritual rejected");
      uStack_350 = 1;
      iStack_354 = 0x57821dd;
    }
    else if (iStack_354 == 0xcdcde1e) {
      pcVar2 = fgets(acStack_118,0x100,pFStack_348);
      fclose(pFStack_348);
      pcStack_340 = acStack_118;
      if (pcVar2 == (char *)0x0) {
        pcStack_340 = "flag missing; contact admin";
      }
      uStack_34c = (uint)(pcVar2 == (char *)0x0);
      iStack_354 = 0xa586c9f;
    }
    else if (iStack_354 == 0x2a88a9e0) {
      sVar3 = strcspn(acStack_318,"\r\n");
      acStack_318[sVar3] = '\0';
      iVar1 = (*(code *)PTR_FUN_00106058)(acStack_318,auStack_335);
      iStack_354 = 0x6af069a0;
      if (iVar1 == 0) {
        iStack_354 = 0x2dfe53cd;
      }
    }
    else if (iStack_354 == 0x2dfe53cd) {
      puts("ritual rejected");
      uStack_350 = 1;
      iStack_354 = 0x57821dd;
    }
    else if (iStack_354 == 0x4a0c9460) {
      puts("the altar remains dark");
      uStack_350 = 1;
      iStack_354 = 0x57821dd;
    }
    else if (iStack_354 == 0x6af069a0) {
      uVar4 = (*(code *)PTR_FUN_00106060)(auStack_335);
      iStack_354 = 0x77269892;
      if (0x341c6e < uVar4) {
        iStack_354 = 0x4a0c9460;
      }
    }
    else if (iStack_354 == 0x77269892) {
      pFStack_348 = fopen("flag.txt","r");
      pcStack_340 = "flag missing; contact admin";
      uStack_34c = 1;
      iStack_354 = 0xcdcde1e;
      if (pFStack_348 == (FILE *)0x0) {
        iStack_354 = 0xa586c9f;
      }
    }
  }
  return uStack_350;
}

