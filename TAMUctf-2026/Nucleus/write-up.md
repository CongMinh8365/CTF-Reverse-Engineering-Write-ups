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
Ngay sau khi chương trình chuẩn bị xong các tham số dòng lệnh argc, argv, nó lập tức gọi hàm FUN_140001360(). Kết quả trả về của hàm này được đẩy xuống quá trình dọn dẹp (_cexit). Mặt khác phân tích hàm FUN_140001d0c() ta thấy nó chính là hàm __scrt_is_managed_app() trong mã nguồn Microsoft C Runtime (CRT). Nhiệm vụ của nó là kiểm tra xem file thực thi này có phải là ứng dụng được viết bằng .NET (C#, F#, VB.NET) hay không, do đó ta không cần quan tâm. 

<img width="769" height="361" alt="image" src="https://github.com/user-attachments/assets/643e0caa-fa9b-429a-beb5-7c8b0b3124ca" />


Từ những phân tích trên ta rút ra kết luận: Hàm FUN_140001360() mới chính là hàm thực thi chính của chương trình!

### Phân tích hàm FUN_140001360():
```C

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140001360(void)

{
  byte bVar1;
  DWORD DVar2;
  byte *pbVar3;
  byte *lpFilename;
  byte *_Src;
  undefined8 in_R9;
  undefined1 auStack_258 [32];
  byte local_238 [272];
  byte local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_140005000 ^ (ulonglong)auStack_258;
  lpFilename = local_128;
  _Src = (byte *)0x104;
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)lpFilename,0x104);
  if (DVar2 != 0) {
    _Src = local_128;
    strcpy_s((char *)local_238,0x104,(char *)_Src);
    pbVar3 = local_238 + (int)(DVar2 - 5);
    bVar1 = *pbVar3;
    lpFilename = (byte *)(ulonglong)bVar1;
    if ((byte)(bVar1 - 0x30) < 10) {
      if (bVar1 == 0x39) {
        FUN_140001070(pbVar3,(longlong)(int)(0x104 - (DVar2 - 5)),"10.exe",in_R9);
      }
      else {
        *pbVar3 = bVar1 + 1;
      }
      _Src = (byte *)0x0;
      lpFilename = local_238;
      CopyFileA((LPCSTR)local_128,(LPCSTR)lpFilename,0);
    }
  }
  FUN_1400010d0((LPCSTR)local_238,lpFilename,_Src,in_R9);
  return 0;
}
```
Flow của chương trình:
1. Gọi GetModuleFileNameA với module là 0x0: Nó đang lấy đường dẫn tuyệt đối của chính file đang chạy (ví dụ ...\nucleus21.exe) và lưu vào local_128.
2. Dòng pbVar3 = local_238 + (int)(DVar2 - 5);: Biến DVar2 là độ dài chuỗi đường dẫn. Lùi lại 5 ký tự từ cuối lên chính là vị trí của ký tự nằm ngay trước chuỗi .exe. Với nucleus21.exe, ký tự này là '1'.
3. Kiểm tra xem ký tự đó có phải là số không (< 10). Nếu là '9', nó đổi thành 10.exe. Nếu là số khác, nó cộng thêm 1 (*pbVar3 = bVar1 + 1).
4. Cuối cùng, nó gọi CopyFileA để nhân bản chính nó ra một file mới với cái tên vừa được tăng số (ví dụ: đang chạy 21 thì copy ra file 22).
5. Kết thúc hàm main, nó truyền tên file mới sinh ra đó vào hàm FUN_1400010d0.

Rõ ràng file này không có mã hóa hay giải mã gì cả, nhiệm vụ của nó chỉ là "đẻ" ra file đời tiếp theo. Từ tên file **nucleus21.exe** có thể suy luận rằng đây là file đời thứ 21 của file gốc **nucleus0.exe** rồi. 

Tiếp tục phân tích hàm [FUN_1400010d0.c](./FUN_1400010d0.c):
```C
DVar8 = GetModuleFileNameA((HMODULE)0x0, local_138, 0x104); 
// ...
BVar9 = ReadFile(pvVar12, lpBuffer, DVar8, lpNumberOfBytesRead, (LPOVERLAPPED)0x0);
```
Chương trình gọi API để lấy đường dẫn của chính nó đang chạy (local_138). Sau đó, nó tự mở file và đọc toàn bộ nội dung nhị phân (raw bytes) đổ vào vùng nhớ lpBuffer. Lúc này, lpBuffer chứa chính nó.

```C
iVar10 = getchar();
// ... (bỏ qua vòng lặp xử lý phím Enter)
bVar17 = (byte)iVar10;
```
Ngay khi đọc file xong, luồng thực thi dừng lại tại getchar(). Nó chờ người dùng nhập một phím bất kỳ và lưu giá trị (dạng byte) vào bVar17. 

```C
do {
  *pbVar13 = *pbVar13 ^ bVar17;
  pbVar13 = pbVar13 + 1;
  uVar14 = uVar14 - 1;
} while (uVar14 != 0);
```
Chương trình sử dụng một con trỏ pbVar13 duyệt qua toàn bộ vùng nhớ lpBuffer. Nó lấy từng byte của file gốc XOR trực tiếp với cái byte ta nhập vào ở biến bVar17 và ghi đè lại vị trí cũ. Cấu trúc file ban đầu giờ đã bị mã hóa.

```C
pvVar12 = BeginUpdateResourceA(param_1, 0); 
if (pvVar12 != (HANDLE)0x0) {
  UpdateResourceA(pvVar12, (LPCSTR)0xa, (LPCSTR)0x65, 0, lpBuffer, DVar8);
// ...
```
Đống dữ liệu bị mã hóa đi về đâu? Đoạn code trên cho ta thấy nó gọi API UpdateResourceA để nhét toàn bộ lpBuffer vào mục Resource của file bản sao (param_1 - ví dụ nucleus22.exe truyền từ hàm main sang). Để ý rằng 0xa là định danh của RT_RCDATA (Raw Data) và 0x65 chính là ID 101.

Đến đây, logic chương trình đã sáng tỏ:
1. Giả sử hiện tại là file i, nó sẽ chạy và tự copy ra rồi đổi tên thành file i+1
2. File i đọc nội dung của chính nó, chờ ta nhập 1 kí tự, rồi XOR toàn bộ nội dung với kí tự đó
3. File i sau khi bị mã hóa sẽ chui vào mục RCDATA 101 của file i+1
4. Quá trình này lặp lại đến file số 21 hay chính là file **nucleus21.exe** hiện tại

=> Điều ta cần làm bây giờ là bóc từ file 21 ngược về file 0.

Đầu tiên, ta cần mổ bụng file nucleus21.exe ra để lấy file 20 đã bị mã hóa. Để làm điều đó ta sẽ dùng tool **Resource Hacker** để lấy phần RCDATA của file nucleus21.exe:

<img width="785" height="433" alt="image" src="https://github.com/user-attachments/assets/369cf1d2-7485-4b8a-82a7-c7e56ee0f27e" />

Ta biết rằng 1 kí tự nào đó mà tác giả gõ từ bàn phím đã XOR với file 20 gốc để ra file 20 bị mã hóa này. Do XOR từng byte độc lập nên rõ ràng ta chỉ cần biết được đúng 1 byte của file gốc là ta sẽ tìm lại được kí tự kia (Tính chất của phép XOR: Kitu ^ Byte_gốc = Byte_MH <=> Kitu = Byte_gốc ^ Byte_MH). Đương nhiên là ta biết. Hãy nhớ rằng 1 file exe của Window luôn bắt đầu bằng 2 byte MZ 
=> Lấy byte M (0x4d) XOR với byte đầu tiên của file mã hóa (trong ảnh là 0x30) được 0x7d => Tra bảng ASCII, kí tự tác giả đã nhập là '}'

Lấy kí tự này XOR với toàn bộ file bị mã hóa, ta thu được file 20 gốc:

<img width="1363" height="613" alt="image" src="https://github.com/user-attachments/assets/617e47c5-9a03-4bdf-bb3e-17649d4ee72a" />

Lặp lại quá trình trên 21 lần để đến file số 0, ta thu được chuỗi kí tự mà tác giả đã nhập: **}Ta3N_5i_aT4DCR{megig**.
Đảo ngược lại, ta thu được FLAG: **gigem{RCD4Ta_i5_N3aT}**

