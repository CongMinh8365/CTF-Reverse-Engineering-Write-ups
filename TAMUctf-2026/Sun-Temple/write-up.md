# Sun-Temple
## Đề bài
Đề bài cho ta 1 file như sau: [sun-temple](./sun-temple)
## Phân tích
Sử dụng các lệnh **file** và **strings** để tìm hiểu các thuộc tính, ta thu được:

<img width="1353" height="519" alt="image" src="https://github.com/user-attachments/assets/3b368ce8-acc6-4b24-af64-a877e5018748" />

<img width="1361" height="531" alt="image" src="https://github.com/user-attachments/assets/35a7724a-3308-4bfb-aa63-ef0fd565bab7" />

Ta thấy đây là 1 file ELF x86-64 quen thuộc, do đó có thể sử dụng Ghidra để dịch ngược, tuy nhiên do nó đã bị stripped nên các tên hàm và tên biến đã bị xóa hết. Ngoài ra từ lệnh **strings** ta thấy file này sẽ hoạt động theo kiểu nhập input vào và check, nếu thỏa mãn các điều kiện của chương trình thì sẽ in ra nội dung file flag.txt

Sử dụng Ghidra dịch ngược file, ta thu được hàm logic chính của chương trình: [FUN_001011c0.c](./FUN_001011c0.c)
Dễ thấy hàm này đã bị làm rối mã (Obfuscation) sử dụng vòng while cùng các lệnh if-else và biến iStack_354 để điều khiển luồng logic, nhưng do có ít khối lệnh if-else nên ta vẫn có thể trace luồng được. Cụ thể logic hàm này như sau:

1. Biến acStack_318 nhận input của ta và được truyền vào hàm PTR_FUN_00106058() (thực chất đây chính là hàm [FUN_00101640.c](./FUN_00101640.c)). Biến iVar1 nhận giá trị trả về của hàm này và so sánh với 0, nếu bằng thì iStack_354 sẽ nhận giá trị mà sau đó dẫn đến kết thúc chương trình luôn, vì thế suy ra iVar1 phải khác 0
2. Sau khi thỏa mãn điều kiện iVar1 khác 0, chương trình chạy đến khối lệnh if-else có thực hiện hàm PTR_FUN_00106060() với tham số truyền vào là biến auStack_335 (biến này cũng là tham số thứ 2 của hàm PTR_FUN_00106058() trên). Thực chất PTR_FUN_00106060() chính là hàm [FUN_001020f0.c](./FUN_001020f0.c). Giá trị trả về của hàm này được gán cho biến uVar4, sau đó chạy vào lệnh kiểm tra điều kiện if(0x341c6e < uVar4), nếu đúng thì iStack_354 lại nhận 1 giá trị dẫn đến kết thúc chương trình, có nghĩa là ta cần uVar4 <= 0x341c6e
3. Khi 2 điều kiện trên thỏa mãn, chương trình sẽ chạy đến khối lệnh mở file flag.txt và in nội dung ra màn hình

Tóm lại ta hiểu được rằng input ta nhập vào sẽ đi qua chuỗi liên tiếp 2 hàm [FUN_00101640.c](./FUN_00101640.c), [FUN_001020f0.c](./FUN_001020f0.c) và phải thỏa mãn 2 điều kiện iVar1 khác 0, uVar4 <= 0x341c6e

Bây giờ ta sẽ phân tích logic hàm [FUN_00101640.c](./FUN_00101640.c):
Hàm này nhận 2 đầu vào param1 và param2 và ta đã biết param1 chính là chuỗi ta nhập vào. Ở ngay đầu chương trình có lệnh 
```C
sVar2 = strlen(param_1);
```
Biến sVar2 lấy độ dài chuỗi input, sau đó đến State 0x2ac870a0:
```C
if (iStack_d4 != 0x2ac870a0) break;
  iStack_c0 = 1;
  uStack_98 = 0;
  uStack_c4 = 0;
  iStack_d4 = 0x7685ffbe;
  if (sVar2 != 0 && (sVar2 & 1) == 0) {
      iStack_d4 = 0x353895ac;
}
```
Nó kiếm tra ta ko nhập vào chuỗi rỗng và chuỗi phải có độ dài chẵn mới cho đi tiếp => **Điều kiện 1: Độ dài chuỗi phải chẵn**

Tiếp theo 
