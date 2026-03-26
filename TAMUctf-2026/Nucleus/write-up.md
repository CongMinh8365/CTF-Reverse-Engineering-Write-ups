# Nucleus
## Đề bài cho ta 1 file như sau: [nucleus21.exe](./nucleus21.exe)
## Phân tích
Sử dụng các lệnh **file** và **strings** để tìm hiểu thuộc tính file, ta thu được:

<img width="754" height="486" alt="image" src="https://github.com/user-attachments/assets/502eb8ec-e12d-4074-ac51-e495f1fa79db" />

Ta thấy file này có rất nhiều chuỗi có thể đọc được. Thử dùng lệnh **grep** để tìm kiếm 1 phần của flag "gigem{" nhưng không thu được kêt quả gì => Manh mối duy nhất là file này có định dạng PE32+ - định dạng file thực thi quen thuộc của Window.

Sử dụng Ghidra, sau đó nhảy vào hàm entry(), ta thấy xuất hiện 2 hàm:

<img width="615" height="210" alt="image" src="https://github.com/user-attachments/assets/f0fd1b0f-b5e2-473e-8a91-fbefecdd820e" />

Nội dung hàm FUN_140001a90() như sau:
```C
void FUN_140001a90(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_140005000 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_140005000 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_140005000 == 0x2b992ddfa232) {
      DAT_140005000 = 0x2b992ddfa233;
    }
  }
  DAT_140005040 = ~DAT_140005000;
  return;
}
```
Qua phân tích ta thấy hàm này chứa toàn các lệnh gọi hệ thống như GetSystemTimeAsFileTime, GetCurrentProcessId... Đây chắc chắn là code khởi tạo Security Cookie (stack canary) của trình biên dịch MSVC mà không có gì khác. Ta bỏ qua và đi vào hàm FUN_140001544:
```C
ulonglong FUN_140001544(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined1 uVar9;
  
  iVar3 = (int)unaff_RBX;
  uVar4 = FUN_14000188c(1);
  if ((char)uVar4 == '\0') {
    FUN_140001bb8(7);
  }
  else {
    bVar1 = false;
    uVar9 = 0;
    uVar4 = __scrt_acquire_startup_lock();
    iVar3 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar4);
    if (DAT_1400055f0 != 1) {
      if (DAT_1400055f0 == 0) {
        DAT_1400055f0 = 1;
        iVar3 = _initterm_e(&DAT_140003270,&DAT_140003288);
        if (iVar3 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140003258,&DAT_140003268);
        DAT_1400055f0 = 2;
      }
      else {
        bVar1 = true;
        uVar9 = 1;
      }
      __scrt_release_startup_lock((char)uVar4);
      plVar5 = (longlong *)FUN_140001b9c();
      if ((*plVar5 != 0) && (uVar6 = FUN_140001954((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)*plVar5)(0,2,0,in_R9,uVar9);
      }
      plVar5 = (longlong *)FUN_140001ba4();
      if ((*plVar5 != 0) && (uVar6 = FUN_140001954((longlong)plVar5), (char)uVar6 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar5);
      }
      _get_initial_narrow_environment();
      __p___argv();
      puVar7 = (uint *)__p___argc();
      uVar8 = (ulonglong)*puVar7;
      uVar6 = FUN_140001360();
      iVar3 = (int)uVar6;
      bVar2 = FUN_140001d0c();
      if (bVar2) {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar8 >> 8),1),'\0');
        return uVar6 & 0xffffffff;
      }
      goto LAB_1400016b0;
    }
  }
  FUN_140001bb8(7);
LAB_1400016b0:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}
```
Hàm này khá dài và chứa nhiều hàm khởi tạo môi trường C Runtime (_initterm, __scrt_acquire_startup_lock,...). Tuy vậy hãy để ý vào đoạn code sau:
```C
_get_initial_narrow_environment();
      __p___argv();
      puVar7 = (uint *)__p___argc();
      uVar8 = (ulonglong)*puVar7;
      uVar6 = FUN_140001360();
      iVar3 = (int)uVar6;
      bVar2 = FUN_140001d0c();
      if (bVar2) {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar8 >> 8),1),'\0');
        return uVar6 & 0xffffffff;
      }
```
Ngay sau khi chương trình chuẩn bị xong các tham số dòng lệnh argc, argv, nó lập tức gọi hàm FUN_140001360(). Kết quả trả về của hàm này được đẩy xuống quá trình dọn dẹp (_cexit). Hàm FUN_140001d0c() thì cũng chỉ là 

<img width="769" height="361" alt="image" src="https://github.com/user-attachments/assets/643e0caa-fa9b-429a-beb5-7c8b0b3124ca" />

Từ đó ta rút ra kết luận: Hàm FUN_140001360() mới chính là hàm thực thi chính của chương trình!

