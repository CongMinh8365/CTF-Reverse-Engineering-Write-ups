long FUN_001020f0(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iStack_14c;
  byte bStack_147;
  byte bStack_146;
  byte bStack_145;
  byte bStack_144;
  byte bStack_143;
  byte bStack_142;
  byte bStack_141;
  byte bStack_140;
  byte bStack_13f;
  byte bStack_13e;
  uint uStack_13c;
  byte bStack_136;
  byte bStack_135;
  byte bStack_134;
  byte bStack_133;
  byte bStack_132;
  byte bStack_131;
  byte bStack_130;
  byte bStack_12f;
  byte bStack_12e;
  byte bStack_12d;
  byte bStack_12c;
  byte bStack_12b;
  byte bStack_12a;
  byte bStack_129;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  byte *pbStack_c8;
  long lStack_c0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  bVar1 = true;
  uStack_d4 = 0;
  lStack_78 = 0;
  iStack_14c = 0x35785628;
code_r0x00103a87:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iStack_14c == 0x1832889) {
              uStack_58 = (ulong)bStack_146;
              uStack_cc = 1 << (bStack_146 & 0x1f);
              uStack_60 = (ulong)bStack_12b;
              uStack_80 = 0;
              uStack_d8 = 1000;
              iStack_14c = 0x41a8bcac;
            }
            if (iStack_14c != 0x26c5365) break;
            bStack_144 = *(byte *)(param_1 + 0x14);
            iStack_14c = 0x49f3f022;
            if (bStack_144 == 0xff) {
              iStack_14c = 0x441d7eae;
            }
          }
          if (iStack_14c != 0x8f3b67c) break;
          uStack_13c = (uStack_128 * 0x424) / 1000;
          iStack_14c = 0x1246c07c;
        }
        if (iStack_14c != 0xbbe3ec7) break;
        bStack_12f = *(byte *)(param_1 + 0x1c);
        uStack_fc = uStack_f0;
        iStack_14c = 0x6541d748;
        if (bStack_12f == 0xff) {
          iStack_14c = 0x5ecf202c;
        }
      }
      if (iStack_14c != 0xbe1e24b) break;
      uStack_13c = uStack_128;
      if (((bStack_146 == 3) || (bStack_146 == 6)) || (bStack_146 == 0xc)) {
code_r0x001036e9:
        uStack_13c = (uStack_128 * 0x2c6) / 1000;
        iStack_14c = 0x1246c07c;
      }
      else {
code_r0x001038c4:
        uVar2 = 0xb4;
        if (0xb4 < uStack_13c) {
          uVar2 = uStack_13c;
        }
        uVar3 = 1000;
        if (uVar2 < 1000) {
          uVar3 = uVar2;
        }
        lStack_78 = ((ulong)(((bStack_12a & 3) + (bStack_129 & 3)) * 7 +
                             (uint)*(ushort *)
                                    (&UNK_00104bc0 + (ulong)((bStack_12a ^ bStack_129) & 0xf) * 2) +
                            (uint)*(ushort *)(&UNK_00104ba0 + (ulong)bStack_146 * 2) *
                            (uint)*(ushort *)(&UNK_00104b20 + (ulong)bStack_147 * 2)) * (ulong)uVar3
                    ) / 1000 + lStack_c0;
        uStack_d4 = uStack_e4 + 1;
        bVar1 = false;
        iStack_14c = 0x35785628;
      }
    }
    if (iStack_14c != 0xc905ef6) {
      if (iStack_14c == 0xdfa86ea) {
        uVar2 = 0x1cc;
        if (uStack_d0 < 0x1cc) {
          uVar2 = uStack_d0;
        }
        uStack_e8 = ((1000 - uVar2) * uStack_ec) / 1000;
        iStack_14c = 0x2386e4e6;
      }
      else if (iStack_14c == 0x103db556) {
        bStack_134 = *(byte *)(param_1 + 0x14);
        uStack_118 = uStack_10c;
        iStack_14c = 0x7dd3cf27;
        if (bStack_134 == 0xff) {
          iStack_14c = 0x5d733b35;
        }
      }
      else if (iStack_14c == 0x10449324) {
        uStack_118 = (uStack_10c * 0x42e) / 1000;
        iStack_14c = 0x5d733b35;
      }
      else {
        if (iStack_14c == 0x1246c07c) goto code_r0x001038c4;
        if (iStack_14c == 0x1488e86a) goto code_r0x001036e9;
        if (iStack_14c == 0x183bb7c2) {
          puStack_88 = &UNK_00104c00;
          puStack_90 = &UNK_00104c30;
          lStack_98 = 4;
          iStack_dc = 0x10;
          uStack_e8 = uStack_ec;
          iStack_14c = 0x2386e4e6;
          if (pbStack_c8[1] != 0 && bStack_147 == pbStack_c8[1]) {
            iStack_14c = 0x70d7aa37;
          }
        }
        else if (iStack_14c == 0x1bb78785) {
          bStack_131 = *(byte *)(param_1 + 0x13);
          uStack_100 = uStack_f4;
          iStack_14c = 0x7c285e36;
          if (bStack_131 == 0xff) {
            iStack_14c = 0x6e2724f7;
          }
        }
        else if (iStack_14c == 0x2386e4e6) {
          uStack_e0 = uStack_e8;
          uStack_80 = uStack_68 + 1;
          iStack_14c = 0x41a8bcac;
          uStack_d8 = uStack_e0;
          if (uStack_80 == uStack_60) {
            iStack_14c = 0x679a7ffb;
          }
        }
        else if (iStack_14c == 0x288ee366) {
          uStack_114 = uStack_108;
          iStack_14c = 0x59a403c9;
          if (bStack_146 == 7 || (bStack_145 & 7) == 2) {
            iStack_14c = 0x5030eba8;
          }
        }
        else if (iStack_14c == 0x2c974610) {
          iStack_14c = 0x441d7eae;
          if (bStack_147 == 7 && bStack_144 < bStack_136) {
            iStack_14c = 0xbe1e24b;
          }
        }
        else if (iStack_14c == 0x335c07c6) {
          uStack_13c = uStack_128;
          iStack_14c = 0x1246c07c;
          if (bStack_144 != 0xff && bStack_142 < bStack_144) {
            iStack_14c = 0x5514c603;
          }
        }
        else if (iStack_14c == 0x35785628) {
          lStack_c0 = lStack_78;
          uStack_e4 = uStack_d4;
          if (bVar1) {
            uStack_e4 = 0;
          }
          iStack_14c = 0x619258d6;
          if (0x38f < uStack_e4) {
            iStack_14c = 0x407d43f2;
          }
        }
        else if (iStack_14c == 0x39a4bbdd) {
          uStack_114 = uStack_108;
          iStack_14c = 0x59a403c9;
          if (bStack_147 == 1 && bStack_13e < bStack_12d) {
            iStack_14c = 0x288ee366;
          }
        }
        else if (iStack_14c == 0x3a49cded) {
          uStack_104 = (uStack_f8 * 0x424) / 1000;
          iStack_14c = 0x73ed35b5;
        }
        else if (iStack_14c == 0x3d280dfb) {
          bStack_141 = *(byte *)(param_1 + 0x12);
          uStack_124 = uStack_120;
          iStack_14c = 0x7ea0352e;
          if (bStack_141 == 0xff) {
            iStack_14c = 0x3e4952ec;
          }
        }
        else if (iStack_14c == 0x3e4952ec) {
          uStack_128 = uStack_124;
          bStack_142 = *(byte *)(param_1 + 0x11);
          uStack_13c = uStack_124;
          iStack_14c = 0x26c5365;
          if (bStack_142 == 0xff) {
            iStack_14c = 0x1246c07c;
          }
        }
        else {
          if (iStack_14c == 0x407d43f2) {
            return lStack_c0;
          }
          if (iStack_14c == 0x41a8bcac) {
            uStack_68 = uStack_80;
            uStack_ec = uStack_d8;
            uStack_70 = (ulong)*(byte *)(param_1 + uStack_80);
            pbStack_c8 = &UNK_00104b40 + uStack_70 * 6;
            puStack_88 = &UNK_00104be0;
            puStack_90 = &UNK_00104c20;
            lStack_98 = 2;
            iStack_dc = 0x16;
            iStack_14c = 0x183bb7c2;
            if (bStack_147 == *pbStack_c8) {
              iStack_14c = 0x70d7aa37;
            }
          }
          else if (iStack_14c == 0x42118aed) {
            uStack_11c = uStack_110;
            iStack_14c = 0xc905ef6;
            if ((bStack_145 & 7) == 1 && (bStack_147 == 5 && bStack_140 < bStack_143)) {
              iStack_14c = 0x475c9de6;
            }
          }
          else if (iStack_14c == 0x44031262) {
            bStack_140 = *(byte *)(param_1 + 0x1c);
            uStack_11c = uStack_110;
            iStack_14c = 0x5b49263a;
            if (bStack_140 == 0xff) {
              iStack_14c = 0xc905ef6;
            }
          }
          else if (iStack_14c == 0x441d7eae) {
            uStack_13c = uStack_128;
            iStack_14c = 0x1246c07c;
            if (bStack_147 == 7) {
              iStack_14c = 0x335c07c6;
            }
          }
          else if (iStack_14c == 0x475c9de6) {
            uStack_11c = (uStack_110 * 0x30c) / 1000;
            iStack_14c = 0xc905ef6;
          }
          else if (iStack_14c == 0x49f3f022) {
            bStack_136 = *(byte *)(param_1 + 0x16);
            iStack_14c = 0x441d7eae;
            if (bStack_142 < bStack_144 && bStack_136 != 0xff) {
              iStack_14c = 0x2c974610;
            }
          }
          else if (iStack_14c == 0x4ad16d5d) {
            bStack_133 = *(byte *)(param_1 + 0x15);
            uStack_104 = uStack_f8;
            iStack_14c = 0x76c047b5;
            if (bStack_133 == 0xff) {
              iStack_14c = 0x73ed35b5;
            }
          }
          else if (iStack_14c == 0x4ee0ea84) {
            uStack_118 = uStack_10c;
            iStack_14c = 0x5d733b35;
            if (bStack_146 == 2 || (bStack_145 & 0xd) == 9) {
              iStack_14c = 0x10449324;
            }
          }
          else if (iStack_14c == 0x5030eba8) {
            uStack_114 = (uStack_108 * 0x35c) / 1000;
            iStack_14c = 0x59a403c9;
          }
          else if (iStack_14c == 0x5514c603) {
            uStack_13c = uStack_128;
            iStack_14c = 0x1246c07c;
            if (*(byte *)(param_1 + 0x16) == 0xff) {
              iStack_14c = 0x8f3b67c;
            }
          }
          else if (iStack_14c == 0x59a403c9) {
            uStack_f0 = uStack_114;
            bStack_13f = *(byte *)(param_1 + 0xe);
            bStack_12e = bStack_13f == 0xff;
            uStack_fc = uStack_114;
            iStack_14c = 0xbbe3ec7;
            if (bStack_13f == 0xff) {
              iStack_14c = 0x5ecf202c;
            }
          }
          else if (iStack_14c == 0x5b49263a) {
            uStack_11c = uStack_110;
            iStack_14c = 0xc905ef6;
            if (bStack_143 != 0xff && bStack_13f < bStack_140) {
              iStack_14c = 0x42118aed;
            }
          }
          else if (iStack_14c == 0x5d733b35) {
            uStack_11c = uStack_118;
            iStack_14c = 0x44031262;
            uStack_110 = uStack_11c;
            if ((bStack_12e & 1) != 0) {
              iStack_14c = 0xc905ef6;
            }
          }
          else if (iStack_14c == 0x5ecf202c) {
            uStack_f4 = uStack_fc;
            bStack_130 = *(byte *)(param_1 + 0xf);
            uStack_100 = uStack_fc;
            iStack_14c = 0x1bb78785;
            if (bStack_130 == 0xff) {
              iStack_14c = 0x6e2724f7;
            }
          }
          else if (iStack_14c == 0x6091fa3d) {
            uStack_124 = uStack_120;
            iStack_14c = 0x3e4952ec;
            if (bStack_147 == 1 && bStack_141 < bStack_135) {
              iStack_14c = 0x712c71f6;
            }
          }
          else if (iStack_14c == 0x619258d6) {
            uVar2 = uStack_e4 * 3;
            bStack_145 = (&UNK_00104070)[uVar2];
            bStack_129 = (&UNK_00104070)[uVar2 + 1];
            bStack_12a = (&UNK_00104070)[uVar2 + 2];
            bStack_147 = bStack_145 >> 4;
            bStack_146 = bStack_145 & 0xf;
            bStack_12b = *(byte *)(param_1 + 0xc);
            uStack_e0 = 1000;
            iStack_14c = 0x1832889;
            if (bStack_12b == 0) {
              iStack_14c = 0x679a7ffb;
            }
          }
          else if (iStack_14c == 0x6541d748) {
            uStack_fc = uStack_f0;
            iStack_14c = 0x5ecf202c;
            if ((bStack_145 & 7) == 1 && (bStack_147 == 5 && bStack_13f < bStack_12f)) {
              iStack_14c = 0x7ea02f81;
            }
          }
          else if (iStack_14c == 0x679a7ffb) {
            uStack_108 = uStack_e0;
            bStack_13e = *(byte *)(param_1 + 0xd);
            bStack_12c = bStack_13e == 0xff;
            uStack_114 = uStack_e0;
            iStack_14c = 0x70c07c3a;
            if (bStack_13e == 0xff) {
              iStack_14c = 0x59a403c9;
            }
          }
          else if (iStack_14c == 0x687740c0) {
            uStack_124 = (uStack_120 * 800) / 1000;
            iStack_14c = 0x3e4952ec;
          }
          else if (iStack_14c == 0x6e2724f7) {
            uStack_f8 = uStack_100;
            bStack_132 = *(byte *)(param_1 + 0x10);
            uStack_104 = uStack_100;
            iStack_14c = 0x4ad16d5d;
            if (bStack_132 == 0xff) {
              iStack_14c = 0x73ed35b5;
            }
          }
          else if (iStack_14c == 0x6e9cae68) {
            uStack_100 = (uStack_f4 * 0x438) / 1000;
            iStack_14c = 0x6e2724f7;
          }
          else if (iStack_14c == 0x70c07c3a) {
            bStack_12d = *(byte *)(param_1 + 0x12);
            uStack_114 = uStack_108;
            iStack_14c = 0x39a4bbdd;
            if (bStack_12d == 0xff) {
              iStack_14c = 0x59a403c9;
            }
          }
          else if (iStack_14c == 0x70d7aa37) {
            iVar4 = iStack_dc;
            if ((*(ushort *)(pbStack_c8 + lStack_98) & uStack_cc) == 0) {
              iVar4 = 0;
            }
            uStack_d0 = (int)(char)puStack_90[uStack_58] +
                        (uint)*(ushort *)(puStack_88 + uStack_70 * 2) + iVar4;
            uStack_e8 = uStack_ec;
            iStack_14c = 0xdfa86ea;
            if ((int)uStack_d0 < 1) {
              iStack_14c = 0x2386e4e6;
            }
          }
          else if (iStack_14c == 0x712c71f6) {
            uStack_124 = uStack_120;
            iStack_14c = 0x3e4952ec;
            if (bStack_146 == 7 || (bStack_145 & 7) == 2) {
              iStack_14c = 0x687740c0;
            }
          }
          else if (iStack_14c == 0x73ed35b5) {
            uStack_10c = uStack_104;
            bStack_143 = *(byte *)(param_1 + 0x19);
            uStack_118 = uStack_104;
            iStack_14c = 0x103db556;
            if (bStack_143 == 0xff) {
              iStack_14c = 0x5d733b35;
            }
          }
          else if (iStack_14c == 0x76c047b5) {
            uStack_104 = uStack_f8;
            iStack_14c = 0x73ed35b5;
            if (bStack_147 == 4 && bStack_132 < bStack_133) {
              iStack_14c = 0x3a49cded;
            }
          }
          else if (iStack_14c == 0x7c285e36) {
            uStack_100 = uStack_f4;
            iStack_14c = 0x6e2724f7;
            if (bStack_147 == 2 && bStack_130 < bStack_131) {
              iStack_14c = 0x6e9cae68;
            }
          }
          else if (iStack_14c == 0x7dd3cf27) {
            uStack_118 = uStack_10c;
            iStack_14c = 0x5d733b35;
            if (bStack_147 == 5 && bStack_143 < bStack_134) {
              iStack_14c = 0x4ee0ea84;
            }
          }
          else if (iStack_14c == 0x7ea02f81) {
            uStack_fc = (uStack_f0 * 900) / 1000;
            iStack_14c = 0x5ecf202c;
          }
          else if (iStack_14c == 0x7ea0352e) {
            bStack_135 = *(byte *)(param_1 + 0x1b);
            uStack_124 = uStack_120;
            iStack_14c = 0x3e4952ec;
            if (bStack_13e < bStack_141 && bStack_135 != 0xff) {
              iStack_14c = 0x6091fa3d;
            }
          }
        }
      }
      goto code_r0x00103a87;
    }
    uStack_120 = uStack_11c;
    uStack_124 = uStack_11c;
    iStack_14c = 0x3d280dfb;
    if ((bStack_12c & 1) != 0) {
      iStack_14c = 0x3e4952ec;
    }
  } while( true );
}

