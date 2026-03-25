undefined4 FUN_00101640(char *param_1,void *param_2)

{
  byte bVar1;
  size_t sVar2;
  void *__s;
  byte bStack_d7;
  byte bStack_d6;
  byte bStack_d5;
  int iStack_d4;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  char acStack_88 [16];
  byte abStack_78 [16];
  ulong uStack_68;
  char *pcStack_60;
  ulong uStack_58;
  char *pcStack_50;
  byte *pbStack_48;
  size_t sStack_40;
  char acStack_38 [24];
  
  memset(acStack_38,0,0x10);
  memset(acStack_88,0,0x10);
  memset(abStack_78,0,0x10);
  sVar2 = strlen(param_1);
  sStack_40 = sVar2;
  memset(param_2,0,0xd);
  __s = (void *)((long)param_2 + 0xd);
  memset(__s,0xff,0x10);
  pbStack_48 = (byte *)((long)param_2 + 0xc);
  bStack_c7 = 0;
  bStack_c8 = 0;
  iStack_bc = 0;
  uStack_90 = 0x10;
  iStack_d4 = 0x3f2e735a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while (iStack_d4 == 0x4f7e2b3) {
                                    *pcStack_50 = '\x01';
                                    *pcStack_60 = '\x01';
                                    abStack_78[uStack_58] = bStack_cc;
                                    bStack_d6 = bStack_d7 + 1;
                                    *pbStack_48 = bStack_d6;
                                    iStack_d4 = 0x9e4f8b0;
                                    bStack_d5 = bStack_d6;
                                  }
                                  if (iStack_d4 != 0x9e4f8b0) break;
                                  bStack_c7 = bStack_d5;
                                  bStack_c8 = bStack_d6;
                                  uStack_90 = uStack_b0 + 2;
                                  iStack_bc = 1;
                                  iStack_d4 = 0x3f2e735a;
                                }
                                if (iStack_d4 != 0xc060c95) break;
                                bStack_cf = bStack_ca;
                                uStack_68 = uStack_b8 | 1;
                                bStack_cb = bStack_ca;
                                iStack_d4 = 0x21bfef4b;
                                if (acStack_88[uStack_b8 | 1] == '\0') {
                                  iStack_d4 = 0x665c1a83;
                                }
                              }
                              if (iStack_d4 != 0x10e103d7) break;
                              bStack_d5 = bStack_d7;
                              bStack_d6 = bStack_d7;
                              iStack_d4 = 0x9e4f8b0;
                              if (bStack_d7 < 0xc) {
                                iStack_d4 = 0x4f7e2b3;
                              }
                            }
                            if (iStack_d4 != 0x21bfef4b) break;
                            bVar1 = abStack_78[uStack_68];
                            *(byte *)((long)param_2 + (ulong)bStack_cf) = bVar1;
                            *(byte *)((long)__s + (ulong)bVar1) = bStack_cf;
                            bStack_cb = bStack_cf + 1;
                            iStack_d4 = 0x665c1a83;
                          }
                          if (iStack_d4 != 0x2ac870a0) break;
                          iStack_c0 = 1;
                          uStack_98 = 0;
                          uStack_c4 = 0;
                          iStack_d4 = 0x7685ffbe;
                          if (sVar2 != 0 && (sVar2 & 1) == 0) {
                            iStack_d4 = 0x353895ac;
                          }
                        }
                        if (iStack_d4 != 0x30f1c425) break;
                        iStack_d4 = 0x3436f71d;
                        if (uStack_b0 < sStack_40) {
                          iStack_d4 = 0x4f3a6851;
                        }
                      }
                      if (iStack_d4 != 0x3436f71d) break;
                      bStack_c9 = 0;
                      uStack_a0 = 0;
                      uStack_c4 = 0;
                      iStack_d4 = 0x689ec892;
                      if (bStack_cd == 0) {
                        iStack_d4 = 0x7685ffbe;
                      }
                    }
                    if (iStack_d4 != 0x353895ac) break;
                    uStack_b0 = uStack_98;
                    iStack_d4 = 0x30f1c425;
                    if (iStack_c0 == 0) {
                      iStack_d4 = 0x2ac870a0;
                    }
                  }
                  if (iStack_d4 != 0x3e2be881) break;
                  uStack_58 = (ulong)bStack_c6;
                  pcStack_60 = acStack_88 + uStack_58;
                  bStack_d5 = bStack_d7;
                  bStack_d6 = bStack_cd;
                  iStack_d4 = 0x9e4f8b0;
                  if (acStack_88[uStack_58] == '\0') {
                    iStack_d4 = 0x10e103d7;
                  }
                }
                if (iStack_d4 != 0x3f2e735a) break;
                bStack_d7 = bStack_c7;
                bStack_cd = bStack_c8;
                iStack_c0 = iStack_bc;
                uStack_98 = uStack_90;
                iStack_d4 = 0x353895ac;
              }
              if (iStack_d4 != 0x4f3a6851) break;
              bStack_cc = (*(code *)PTR_FUN_00106068)(param_1[uStack_b0]);
              bStack_c6 = (*(code *)PTR_FUN_00106068)(param_1[uStack_b0 + 1]);
              uStack_c4 = 0;
              iStack_d4 = 0x7685ffbe;
              if (bStack_cc != 0xff && bStack_c6 != 0xff) {
                iStack_d4 = 0x61400159;
              }
            }
            if (iStack_d4 != 0x61400159) break;
            pcStack_50 = acStack_38 + bStack_cc;
            bStack_d5 = bStack_d7;
            bStack_d6 = bStack_cd;
            iStack_d4 = 0x9e4f8b0;
            if (acStack_38[bStack_cc] == '\0') {
              iStack_d4 = 0x3e2be881;
            }
          }
          if (iStack_d4 != 0x665c1a83) break;
          bStack_c9 = bStack_cb;
          uStack_a0 = uStack_b8 + 2;
          uStack_c4 = 1;
          iStack_d4 = 0x689ec892;
          if (uStack_a0 == 0x10) {
            iStack_d4 = 0x7685ffbe;
          }
        }
        if (iStack_d4 != 0x689ec892) break;
        bStack_ce = bStack_c9;
        uStack_b8 = uStack_a0;
        bStack_ca = bStack_c9;
        iStack_d4 = 0x6dcda51f;
        if (acStack_88[uStack_a0] == '\0') {
          iStack_d4 = 0xc060c95;
        }
      }
      if (iStack_d4 != 0x6dcda51f) break;
      bVar1 = abStack_78[uStack_b8];
      *(byte *)((long)param_2 + (ulong)bStack_ce) = bVar1;
      *(byte *)((long)__s + (ulong)bVar1) = bStack_ce;
      bStack_ca = bStack_ce + 1;
      iStack_d4 = 0xc060c95;
    }
  } while (iStack_d4 != 0x7685ffbe);
  return uStack_c4;
}

