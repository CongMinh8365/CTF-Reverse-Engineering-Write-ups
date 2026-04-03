# brokenquest
## Đề bài cho ta 1 file như sau: [brokenquest](./brokenquest)
## Phân tích
Dùng lệnh **file** và **strings** ta thấy:

<img width="1353" height="141" alt="image" src="https://github.com/user-attachments/assets/76727cf9-0df8-4a13-a532-e1b91da83d86" />
<img width="1350" height="329" alt="image" src="https://github.com/user-attachments/assets/e08708ec-e7e0-422f-960d-e0eeabb68deb" />

Đây là file ELF 64-bit for x86-64, dynamically linked và not stripped, nên khi decompile ta có thể thấy tên hàm khá rõ ràng. Ngoài ra từ lệnh **strings** ta thấy file này khá giống 1 trò chơi nhiều lựa chọn. 

Dùng Ghidra decompile file này, vào hàm main để phân tích code:
```C
undefined8 main(void)

{
  long in_FS_OFFSET;
  byte local_61;
  int local_60;
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = 2;
  local_34 = 6;
  local_30 = 0xfffffffc;
  local_2c = 6;
  local_28 = 0;
  local_24 = 4;
  local_20 = 0xfffffffd;
  local_1c = 1;
  local_60 = 1;
  puts(
      "Interact with objects to advance your quest. Set all quest objective flags and turn in the qu est to get the real flag."
      );
  while (local_60 != 0) {
    printf("Current Values: [ ");
    for (local_5c = 0; local_5c < 8; local_5c = local_5c + 1) {
      printf("%d\t",(ulong)*(uint *)(local_58 + (long)local_5c * 4));
    }
    puts("]");
    print_menu();
    memset(local_18,0,8);
    fgets(local_18,8,stdin);
    __isoc99_sscanf(local_18,&DAT_00103250,&local_61);
    local_61 = local_61 - 0x30;
    if (local_61 < 9) {
      switch(local_61) {
      case 0:
        local_60 = turn_in(local_58,&local_38);
        break;
      case 1:
        reset(local_58);
        break;
      case 2:
        rotate(local_58);
        break;
      case 3:
        increment(local_58);
        break;
      case 4:
        add_sub(local_58);
        break;
      case 5:
        modulo(local_58);
        break;
      case 6:
        swap(local_58);
        break;
      case 7:
        bitshift(local_58);
        break;
      case 8:
        flip_sign(local_58);
        break;
      default:
        puts("That\'s not a valid action.\n");
      }
    }
    else {
      puts("That\'s not a valid action.\n");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
```

Ta thấy logic khá rõ ràng: Ban đầu người chơi được cho 1 mảng 8 số 0. Mỗi lượt người chơi chọn 1 số từ 1-8 tương ứng với 8 case của vòng lặp switch, từ đó thay đổi giá trị của mảng, mục tiêu là cần làm cho mảng này có các giá trị lần lượt bằng 2, 6, -4, 6, 0, 4, -3, 1. Tiếp theo chọn số 0 thì 8 giá trị mảng và 8 giá trị đích sẽ được đưa vào hàm turn_in(). Kiểm tra hàm này, ta thấy nó làm nhiệm vụ so sánh 2 mảng này với nhau, nếu đúng thì sẽ in ra flag:
```C
bool turn_in(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,8);
  if (iVar1 == 0) {
    puts("You turned in the quest!\n");
    handle_flag(param_1); //Hàm in ra flag
  }
  else {
    puts("Objectives not met - can\'t turn in quest yet!\n");
  }
  return iVar1 != 0;
}
```
Tóm lại mục tiêu cuối cùng của ta là cần làm cho mảng 8 số 0 có giá trị 2, 6, -4, 6, 0, 4, -3, 1. Vậy thì thay vì nghĩ ra thứ tự chọn số, tại sao ta ko patch file để khiến mảng của ta có giá trị đích luôn? 

Cụ thể ở hàm main, lệnh **local_60 = turn_in(local_58,&local_38)** sẽ lấy mảng của ta là local_58 và mảng đích &local_38 so sánh với nhau, ta sẽ đổi thành **local_60 = turn_in(&local_38,&local_38)** tức là cho 2 mảng đích so sánh với nhau, điều này luôn luôn đúng.

Sau đó ta lưu lại và export ra file mới và đặt tên là brokenquest_patched. Chạy file này và chọn số 0 (tức là gọi hàm turn_in() để kiểm tra 2 mảng), ta ngay lập tức thu được flag:

<img width="985" height="325" alt="image" src="https://github.com/user-attachments/assets/fcb69884-87a2-4184-bab6-4ee8cdd78ec2" />

## FLAG: texsaw{1t_ju5t_work5_m0r3_l1k3_!t_d0e5nt_w0rk}
