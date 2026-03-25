# Sun-Temple
## Đề bài
Đề bài cho ta 1 file như sau: [sun-temple](./sun-temple)
## Phân tích
Sử dụng các lệnh **file** và **strings** để tìm hiểu các thuộc tính, ta thu được:

<img width="1353" height="519" alt="image" src="https://github.com/user-attachments/assets/3b368ce8-acc6-4b24-af64-a877e5018748" />

<img width="1361" height="531" alt="image" src="https://github.com/user-attachments/assets/35a7724a-3308-4bfb-aa63-ef0fd565bab7" />

Ta thấy đây là 1 file ELF x86-64 quen thuộc, do đó có thể sử dụng Ghidra để dịch ngược, tuy nhiên do nó đã bị stripped nên các tên hàm và tên biến đã bị xóa hết. Ngoài ra từ lệnh **strings** ta thấy file này sẽ hoạt động theo kiểu nhập input vào và check, nếu thỏa mãn các điều kiện của chương trình thì sẽ in ra nội dung file flag.txt

Sử dụng Ghidra dịch ngược file, ta thu được hàm logic chính của chương trình: [FUN_001011c0.c](./FUN_001011c0.c)
