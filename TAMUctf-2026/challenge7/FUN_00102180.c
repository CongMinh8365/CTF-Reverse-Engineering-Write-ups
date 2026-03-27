
undefined4 FUN_00102180(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  FILE *__stream;
  size_t sVar5;
  uint *puVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  void **ppvVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  int iVar19;
  void *local_258;
  long local_248;
  undefined1 local_22c [4];
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  void *local_208;
  ulong local_200;
  ulong local_1f8;
  ulong uStack_1f0;
  undefined8 local_1e8;
  int local_1e0;
  int local_1dc;
  byte local_1d8 [32];
  long local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  int local_1a0;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  int local_138;
  char local_134;
  short local_128;
  long local_110;
  short local_fe;
  ushort local_fc;
  ushort local_fa;
  
  ppvVar12 = &local_208;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *ppvVar12 = (void *)0x0;
    ppvVar12 = ppvVar12 + 1;
  }
  __stream = fopen("/proc/self/exe","rb");
  if (__stream != (FILE *)0x0) {
    sVar5 = fread(&local_138,1,0x40,__stream);
    if ((((sVar5 == 0x40) && (local_138 == 0x464c457f)) && (local_134 == '\x02')) &&
       (((local_110 != 0 && (local_fe == 0x40)) &&
        ((local_fc != 0 && (puVar6 = calloc((ulong)local_fc,0x40), puVar6 != (uint *)0x0)))))) {
      iVar4 = fseek(__stream,local_110,0);
      if (((iVar4 == 0) &&
          (sVar5 = fread(puVar6,0x40,(ulong)local_fc,__stream), uVar2 = local_fa, sVar5 == local_fc)
          ) && ((local_fa < local_fc &&
                (pvVar7 = malloc(*(size_t *)(puVar6 + (ulong)local_fa * 0x10 + 8)),
                pvVar7 != (void *)0x0)))) {
        iVar4 = fseek(__stream,*(long *)(puVar6 + (ulong)uVar2 * 0x10 + 6),0);
        if ((iVar4 == 0) &&
           (sVar5 = fread(pvVar7,1,*(size_t *)(puVar6 + (ulong)local_fa * 0x10 + 8),__stream),
           sVar5 == *(size_t *)(puVar6 + (ulong)local_fa * 0x10 + 8))) {
          puVar10 = puVar6;
          for (uVar11 = 0; uVar11 < local_fc; uVar11 = uVar11 + 1) {
            iVar4 = strcmp((char *)((ulong)*puVar10 + (long)pvVar7),".text");
            if (iVar4 == 0) {
              lVar9 = *(long *)(puVar10 + 4);
              if ((lVar9 == 0) || (*(long *)(puVar10 + 8) == 0)) break;
              if (local_128 == 3) {
                local_1a0 = 0;
                local_1a8 = 0;
                iVar4 = dl_iterate_phdr(FUN_00102f60,&local_1a8);
                if ((iVar4 < 1) || (local_1a0 == 0)) break;
                lVar9 = *(long *)(puVar10 + 4) + local_1a8;
              }
              local_1b0 = *(undefined8 *)(puVar10 + 8);
              local_1b8 = lVar9;
              free(pvVar7);
              free(puVar6);
              fclose(__stream);
              iVar4 = FUN_001032d0();
              if (iVar4 == 0) goto LAB_00102205;
              local_200 = 0x1f60;
              pvVar7 = mmap((void *)0x0,0x1f60,7,0x22,-1,0);
              local_208 = pvVar7;
              if (pvVar7 == (void *)0xffffffffffffffff) goto LAB_00102205;
              lVar9 = 0;
              puVar6 = &DAT_00111600;
              local_1e8 = 0x1337c0de00000000;
              local_1f8 = 0xfb0;
              uStack_1f0 = 1;
              goto LAB_0010245a;
            }
            puVar10 = puVar10 + 0x10;
          }
        }
        free(pvVar7);
      }
      free(puVar6);
    }
    fclose(__stream);
  }
LAB_00102205:
  puts("bad");
  return 1;
  while( true ) {
    lVar9 = lVar9 + 1;
    puVar6 = puVar6 + 4;
    if (lVar9 == 0x7d) break;
LAB_0010245a:
    uVar11 = (ulong)*puVar6;
    if ((0xc5 < puVar6[1] + uVar11) && (uVar11 < 0xc6)) {
      bVar3 = (&PTR_DAT_00111608)[lVar9 * 2][0xc5 - uVar11] ^
              local_1d8[(uint)(0xc5 - uVar11) & 0x1f];
      goto LAB_00102495;
    }
  }
  bVar3 = 0;
LAB_00102495:
  *(byte *)((long)pvVar7 + 0xfb0) = bVar3;
  printf("flag> ");
  fflush(stdout);
  pcVar8 = fgets((char *)&local_138,0x100,stdin);
  if (pcVar8 == (char *)0x0) {
    munmap(pvVar7,0x1f60);
  }
  else {
    sVar5 = strcspn((char *)&local_138,"\r\n");
    local_248 = 0x10e;
    *(undefined1 *)((long)&local_138 + sVar5) = 0;
    do {
      iVar4 = FUN_001032d0(&local_208);
      if (iVar4 == 0) {
LAB_00102981:
        puts("bad");
        munmap(local_208,local_200);
        return 1;
      }
      local_148 = (undefined1  [16])0x0;
      local_258 = local_208;
      local_168 = 0xbb67ae856a09e667;
      uStack_160 = 0xa54ff53a3c6ef372;
      local_158 = 0x9b05688c510e527f;
      uStack_150 = 0x5be0cd191f83d9ab;
      lVar9 = 0;
      if (uStack_1f0 != 0) {
        puVar18 = (undefined1 *)((long)local_208 + local_1f8);
        puVar1 = (undefined1 *)((long)local_208 + local_1f8 + uStack_1f0);
        lVar16 = 0;
        do {
          while( true ) {
            lVar9 = lVar16 + 1;
            local_148._8_8_ = lVar9;
            *(undefined1 *)((long)&local_1a8 + lVar16) = *puVar18;
            if (lVar9 != 0x40) break;
            puVar18 = puVar18 + 1;
            sha256_update(&local_1a8,&local_1a8);
            lVar9 = 0;
            local_148._0_8_ = local_148._0_8_ + 0x200;
            lVar16 = lVar9;
            if (puVar18 == puVar1) goto LAB_001025d0;
          }
          puVar18 = puVar18 + 1;
          lVar16 = lVar9;
        } while (puVar18 != puVar1);
      }
LAB_001025d0:
      plVar14 = (long *)local_22c;
      local_22c = (undefined1  [4])(int)local_1e8;
      do {
        while( true ) {
          lVar16 = lVar9 + 1;
          local_148._8_8_ = lVar16;
          *(char *)((long)&local_1a8 + lVar9) = (char)*plVar14;
          if (lVar16 != 0x40) break;
          plVar14 = (long *)((long)plVar14 + 1);
          sha256_update(&local_1a8,&local_1a8);
          lVar16 = 0;
          local_148._0_8_ = local_148._0_8_ + 0x200;
          lVar9 = lVar16;
          if (plVar14 == &local_228) goto LAB_00102635;
        }
        plVar14 = (long *)((long)plVar14 + 1);
        lVar9 = lVar16;
      } while (plVar14 != &local_228);
LAB_00102635:
      pbVar15 = local_1d8;
      while( true ) {
        local_148._8_8_ = lVar16 + 1;
        *(byte *)((long)&local_1a8 + lVar16) = *pbVar15;
        if (lVar16 + 1 == 0x40) {
          sha256_update(&local_1a8,&local_1a8);
          local_148._8_8_ = 0;
          local_148._0_8_ = local_148._0_8_ + 0x200;
        }
        if (pbVar15 + 1 == (byte *)&local_1b8) break;
        pbVar15 = pbVar15 + 1;
        lVar16 = local_148._8_8_;
      }
      lVar9 = 0;
      sha256_final(&local_1a8,&local_228);
      plVar14 = &DAT_00104240;
      while ((local_220 != plVar14[1] || local_228 != *plVar14 ||
             (local_210 != plVar14[3] || local_218 != plVar14[2]))) {
        lVar9 = lVar9 + 1;
        plVar14 = (long *)((long)plVar14 + 0x34);
        if (lVar9 == 0x3b8) goto switchD_00102749_default;
      }
      iVar19 = (int)lVar9;
      lVar16 = (long)iVar19;
      iVar4 = FUN_001032d0(&local_208);
      uVar11 = local_200;
      pvVar7 = local_208;
      if (iVar4 == 0) goto LAB_00102981;
      local_258 = local_208;
      switch((&DAT_00104260)[(long)iVar19 * 0x34]) {
      case 0:
        lVar9 = (long)iVar19;
        uVar11 = (ulong)(uint)(&DAT_00104268)[lVar9 * 0xd];
        if (local_1f8 < uVar11) goto switchD_00102749_default;
        uVar13 = local_1f8 - uVar11;
        iVar4 = FUN_00102fa0((long)local_208 + uVar13,&local_208,
                             *(undefined4 *)(&DAT_00104270 + lVar9 * 0x34),
                             (&DAT_00104264)[lVar9 * 0xd],uVar11);
        if (iVar4 == 0) goto switchD_00102749_default;
        uStack_1f0 = uStack_1f0 + uVar11;
        local_1f8 = uVar13;
        break;
      case 1:
        lVar9 = (long)iVar19;
        uVar11 = (ulong)(uint)(&DAT_00104268)[lVar9 * 0xd];
        if ((local_200 < local_1f8 + uStack_1f0 + uVar11) ||
           (uVar13 = uStack_1f0,
           iVar4 = FUN_00102fa0((long)local_208 + local_1f8 + uStack_1f0,&local_208,
                                *(undefined4 *)(&DAT_00104270 + lVar9 * 0x34),
                                (&DAT_00104264)[lVar9 * 0xd],uVar11), iVar4 == 0))
        goto switchD_00102749_default;
        uStack_1f0 = uVar13 + uVar11;
        break;
      case 2:
        lVar9 = (long)iVar19;
        uVar11 = (ulong)(uint)(&DAT_00104264)[lVar9 * 0xd];
        if (((((&DAT_00104268)[lVar9 * 0xd] == 0) || (uStack_1f0 < uVar11)) ||
            (uStack_1f0 - uVar11 < (ulong)(uint)(&DAT_00104268)[lVar9 * 0xd])) ||
           (iVar4 = FUN_00102fa0((long)local_208 + uVar11 + local_1f8,&local_208,
                                 *(undefined4 *)(&DAT_00104270 + lVar9 * 0x34),
                                 (&DAT_0010426c)[lVar9 * 0xd]), iVar4 == 0))
        goto switchD_00102749_default;
        break;
      case 3:
        uVar11 = (ulong)(uint)(&DAT_00104264)[lVar9 * 0xd];
        if (((&DAT_00104268)[lVar9 * 0xd] == 0) || (uStack_1f0 < uVar11))
        goto switchD_00102749_default;
        uVar13 = (ulong)(uint)(&DAT_00104268)[lVar9 * 0xd];
        if (uStack_1f0 - uVar11 < uVar13) goto switchD_00102749_default;
        uVar17 = uStack_1f0 - uVar13;
        memmove((void *)((long)local_208 + uVar11 + local_1f8),
                (void *)((long)local_208 + uVar11 + uVar13 + local_1f8),
                (uStack_1f0 - uVar11) - uVar13);
        uStack_1f0 = uVar17;
        break;
      case 4:
        if ((((&DAT_00104268)[lVar16 * 0xd] != 1) ||
            (uStack_1f0 <= (uint)(&DAT_00104264)[lVar16 * 0xd])) ||
           (iVar4 = (*(code *)((uint)(&DAT_00104264)[lVar16 * 0xd] + local_1f8 + (long)local_208))
                              (&local_138,sVar5,local_1e8._4_4_,&local_1a8), iVar4 == 0))
        goto switchD_00102749_default;
        local_1e8 = CONCAT44(local_1e8._4_4_,(&DAT_0010426c)[lVar16 * 0xd]);
        break;
      case 5:
        if (((((int)local_1e8 == 2) && (local_1e8._4_4_ == 0x1337c0de)) &&
            ((local_1e0 == 0 && local_1dc == 0) && (&DAT_00104264)[lVar9 * 0xd] == 0)) &&
           (uStack_1f0 == 0x28d)) {
          FUN_00103220(local_1f8 + (long)local_208,0x28d,&local_1a8);
          iVar4 = memcmp(&local_1a8,&LAB_00104214,0x20);
          if (iVar4 == 0) {
            puts("correct");
            munmap(pvVar7,uVar11);
            return 0;
          }
        }
        puts("bad");
        munmap(pvVar7,uVar11);
        return 1;
      default:
        goto switchD_00102749_default;
      }
      local_248 = local_248 + -1;
    } while (local_248 != 0);
switchD_00102749_default:
    puts("bad");
    munmap(local_258,local_200);
  }
  return 1;
}

