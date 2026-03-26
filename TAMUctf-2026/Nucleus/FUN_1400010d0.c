
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400010d0(LPCSTR param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  HANDLE pvVar12;
  void *lpBuffer;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  LPDWORD lpNumberOfBytesRead;
  uint uVar21;
  undefined1 auStackY_188 [32];
  DWORD local_148 [4];
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_140005000 ^ (ulonglong)auStackY_188;
  uVar14 = 0;
  uVar19 = 0x104;
  local_148[0] = 0;
  DVar8 = GetModuleFileNameA((HMODULE)0x0,local_138,0x104);
  if (DVar8 == 0) {
    DVar8 = GetLastError();
    FUN_140001010("Failed to get source path. Error: %lu\n",(ulonglong)DVar8,uVar19,param_4);
    return;
  }
  uVar20 = 0;
  uVar19 = 1;
  pvVar12 = CreateFileA(local_138,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar12 == (HANDLE)0xffffffffffffffff) {
    DVar8 = GetLastError();
    FUN_140001010("Failed to open source for reading. Error: %lu\n",(ulonglong)DVar8,uVar19,uVar20);
    return;
  }
  DVar8 = GetFileSize(pvVar12,(LPDWORD)0x0);
  uVar16 = (ulonglong)DVar8;
  lpBuffer = malloc((ulonglong)DVar8);
  if (lpBuffer != (void *)0x0) {
    lpNumberOfBytesRead = local_148;
    BVar9 = ReadFile(pvVar12,lpBuffer,DVar8,lpNumberOfBytesRead,(LPOVERLAPPED)0x0);
    if (BVar9 != 0) {
      CloseHandle(pvVar12);
      DVar7 = local_148[0];
      if (local_148[0] != 0) {
        iVar10 = getchar();
        iVar11 = iVar10;
        while ((iVar11 != 10 && (iVar11 != -1))) {
          iVar11 = getchar();
        }
        bVar17 = (byte)iVar10;
        uVar21 = CONCAT22(CONCAT11(bVar17,bVar17),CONCAT11(bVar17,bVar17));
        if (DVar7 != 0) {
          if (0x3f < DVar7) {
            uVar18 = 0x20;
            uVar16 = uVar14;
            do {
              uVar15 = (int)uVar16 + 0x40;
              uVar14 = (ulonglong)uVar15;
              puVar2 = (uint *)((longlong)lpBuffer + uVar16);
              uVar1 = puVar2[1];
              uVar4 = puVar2[2];
              uVar5 = puVar2[3];
              puVar3 = (uint *)((longlong)lpBuffer + uVar16);
              *puVar3 = *puVar2 ^ uVar21;
              puVar3[1] = uVar1 ^ uVar21;
              puVar3[2] = uVar4 ^ uVar21;
              puVar3[3] = uVar5 ^ uVar21;
              puVar2 = (uint *)((ulonglong)(uVar18 - 0x10) + (longlong)lpBuffer);
              uVar1 = puVar2[1];
              uVar4 = puVar2[2];
              uVar5 = puVar2[3];
              puVar3 = (uint *)((ulonglong)(uVar18 - 0x10) + (longlong)lpBuffer);
              *puVar3 = *puVar2 ^ uVar21;
              puVar3[1] = uVar1 ^ uVar21;
              puVar3[2] = uVar4 ^ uVar21;
              puVar3[3] = uVar5 ^ uVar21;
              puVar2 = (uint *)((ulonglong)uVar18 + (longlong)lpBuffer);
              uVar1 = puVar2[1];
              uVar4 = puVar2[2];
              uVar5 = puVar2[3];
              puVar3 = (uint *)((ulonglong)uVar18 + (longlong)lpBuffer);
              *puVar3 = *puVar2 ^ uVar21;
              puVar3[1] = uVar1 ^ uVar21;
              puVar3[2] = uVar4 ^ uVar21;
              puVar3[3] = uVar5 ^ uVar21;
              uVar1 = uVar18 + 0x10;
              uVar18 = uVar18 + 0x40;
              puVar2 = (uint *)((ulonglong)uVar1 + (longlong)lpBuffer);
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar3 = (uint *)((ulonglong)uVar1 + (longlong)lpBuffer);
              *puVar3 = *puVar2 ^ uVar21;
              puVar3[1] = uVar4 ^ uVar21;
              puVar3[2] = uVar5 ^ uVar21;
              puVar3[3] = uVar6 ^ uVar21;
              uVar16 = uVar14;
            } while (uVar15 < (DVar7 & 0xffffffc0));
            if (DVar7 <= uVar15) goto LAB_1400012d5;
          }
          pbVar13 = (byte *)(uVar14 + (longlong)lpBuffer);
          uVar14 = (ulonglong)(DVar7 - (int)uVar14);
          do {
            *pbVar13 = *pbVar13 ^ bVar17;
            pbVar13 = pbVar13 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
LAB_1400012d5:
      pvVar12 = BeginUpdateResourceA(param_1,0);
      if (pvVar12 != (HANDLE)0x0) {
        BVar9 = UpdateResourceA(pvVar12,(LPCSTR)0xa,(LPCSTR)0x65,0,lpBuffer,DVar8);
        EndUpdateResourceW(pvVar12,(uint)(BVar9 == 0));
      }
      free(lpBuffer);
      return;
    }
    DVar8 = GetLastError();
    FUN_140001010("Failed to read file. Error: %lu\n",(ulonglong)DVar8,uVar16,lpNumberOfBytesRead);
    free(lpBuffer);
  }
  CloseHandle(pvVar12);
  return;
}

