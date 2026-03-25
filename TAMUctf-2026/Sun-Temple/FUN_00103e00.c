byte FUN_00103e00(char param_1)

{
  byte bStack_5;
  int iStack_4;
  
  bStack_5 = param_1 - 0x30;
  iStack_4 = 0x1d49a878;
  if (bStack_5 < 10) {
    iStack_4 = 0x701972e9;
  }
  do {
    while( true ) {
      while( true ) {
        while (iStack_4 == 0x74bfebb) {
          bStack_5 = param_1 + 0xa9;
          iStack_4 = 0x701972e9;
        }
        if (iStack_4 != 0x178c5d20) break;
        bStack_5 = param_1 - 0x37;
        if (5 < (byte)(param_1 + 0xbfU)) {
          bStack_5 = 0xff;
        }
        iStack_4 = 0x701972e9;
      }
      if (iStack_4 != 0x1d49a878) break;
      iStack_4 = 0x178c5d20;
      if ((byte)(param_1 + 0x9fU) < 6) {
        iStack_4 = 0x74bfebb;
      }
    }
  } while (iStack_4 != 0x701972e9);
  return bStack_5;
}

