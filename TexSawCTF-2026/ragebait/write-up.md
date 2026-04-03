# ragebait
## Đề bài cho ta 1 file như sau: [ragebait](./ragebait)
## Phân tích
Mở Ghidra lên và decompile file này, ta tìm đến hàm thực thi chính:
<img width="692" height="271" alt="image" src="https://github.com/user-attachments/assets/00c8ebba-6736-4b4e-bf33-ebb75520170a" />

Ta thấy hàm này cho phép nhập vào 1 chuỗi kí tự, chuỗi này cần có độ dài 32 byte (0x20 = 32), sau đó chương trình cắt lấy 9 kí tự đầu tiên của chuỗi và đưa vào hàm **FUN_00401216()**, kết quả trả về lưu vào biến uVar1. Sau đó chương trình lấy uVar1 % 0x3f1 (tức 1009) ra 1 con số (từ 0 đến 1008) làm index cho con trỏ hàm **&PTR_FUN_0044e080** và nhảy vào đấy thực hiện tiếp.

Ta kiểm tra hàm **FUN_00401216()**:

<img width="690" height="336" alt="image" src="https://github.com/user-attachments/assets/a1319dc4-92b9-4b0d-8b88-9da30d3146fb" />

Ta thấy có hai hằng số khá kì lạ 0x811c9dc5 và 0x1000193. Thử tra cứu, ta biết đây chính là thuật toán băm FNV-1a bản 32-bit. Tiếp theo thử ấn vào con trỏ hàm **&PTR_FUN_0044e080**:

<img width="574" height="368" alt="image" src="https://github.com/user-attachments/assets/0f563322-7443-4863-bfc1-17cc05459c4e" />
<img width="568" height="369" alt="image" src="https://github.com/user-attachments/assets/7c2dee5b-c29d-434c-8776-dc930248ced4" />

Ở cửa sổ Listing ta thấy có rất nhiều các hàm khác nhau, thử ấn vào hàm đầu tiên, ta thu được đoạn code của nó:
```C
void FUN_0040126e(void)

{
  long in_FS_OFFSET;
  int local_9c;
  byte local_98 [64];
  byte local_58 [56];
  undefined1 local_20;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_98[0] = 0xbc;
  local_98[1] = 0xad;
  local_98[2] = 0xb0;
  local_98[3] = 0xbb;
  local_98[4] = 0xa9;
  local_98[5] = 0xbf;
  local_98[6] = 0xb3;
  local_98[7] = 0xa5;
  local_98[8] = 0xa9;
  local_98[9] = 0xb1;
  local_98[10] = 0xaa;
  local_98[0xb] = 0xad;
  local_98[0xc] = 0x97;
  local_98[0xd] = 0xbc;
  local_98[0xe] = 0xa0;
  local_98[0xf] = 0xad;
  local_98[0x10] = 0x97;
  local_98[0x11] = 0xba;
  local_98[0x12] = 0xad;
  local_98[0x13] = 0xa9;
  local_98[0x14] = 0xa4;
  local_98[0x15] = 0x97;
  local_98[0x16] = 0xae;
  local_98[0x17] = 0xa9;
  local_98[0x18] = 0xa3;
  local_98[0x19] = 0xad;
  local_98[0x1a] = 0x97;
  local_98[0x1b] = 0xae;
  local_98[0x1c] = 0xa4;
  local_98[0x1d] = 0xa9;
  local_98[0x1e] = 0xaf;
  local_98[0x1f] = 0x97;
  local_98[0x20] = 0xbf;
  local_98[0x21] = 0xa9;
  local_98[0x22] = 0xbb;
  local_98[0x23] = 0x97;
  local_98[0x24] = 0xbc;
  local_98[0x25] = 0xa0;
  local_98[0x26] = 0xad;
  local_98[0x27] = 0x97;
  local_98[0x28] = 0xae;
  local_98[0x29] = 0xba;
  local_98[0x2a] = 0xa1;
  local_98[0x2b] = 0xad;
  local_98[0x2c] = 0xa6;
  local_98[0x2d] = 0xac;
  local_98[0x2e] = 0xbb;
  local_98[0x2f] = 0x97;
  local_98[0x30] = 0xbf;
  local_98[0x31] = 0xad;
  local_98[0x32] = 0x97;
  local_98[0x33] = 0xa5;
  local_98[0x34] = 0xa9;
  local_98[0x35] = 0xac;
  local_98[0x36] = 0xad;
  local_98[0x37] = 0xb5;
  for (local_9c = 0; local_9c < 0x38; local_9c = local_9c + 1) {
    local_58[local_9c] = local_98[local_9c] ^ 200;
  }
  local_20 = 0;
  printf("\x1b[0;32m[SUCCESS] Flag: %s\x1b[0m\n",local_58);
                    /* WARNING: Subroutine does not return */
  exit(0);
}
```
Hàm này sẽ in ra kết quả là: **[SUCCESS] Flag: texsaw{maybe_the_real_fake_flag_was_the_friends_we_made}**
Đây là fake flag. Thử tiếp vài hàm nữa, ta thấy rằng sẽ có 3 fake flag lặp đi lặp lại:

**[SUCCESS] Flag: texsaw{fake_flag_do_not_submit}**

**[SUCCESS] Flag: texsaw{maybe_the_real_fake_flag_was_the_friends_we_made}**

**[SUCCESS] Flag: texsaw{n0t_th3_fl4g_lol}**

Dựa vào tên bài là **ragebait**, ta hiểu rằng trong 1009 hàm này chỉ có duy nhất 1 hàm là hàm check flag thật sự, còn lại là hàm rác và in ra fake flag. Và nếu ta để ý kĩ thì sẽ phát hiện ra rằng tất cả các hàm rác này đều có cùng 1 cấu trúc, đó là luôn chứa 1 mảng giá trị Hex, sau đó mảng này được ném vào vòng lặp để tính toán, cuối cùng lệnh printf in ra 1 trong 3 fake flag này. 

Rõ ràng chúng chẳng dùng gì đến cái input của chúng ta cả! Thế thì input đã đi đâu? Chắc chắn là đi vào cái hàm thật sự mà ta đang tìm kiếm. Như vậy cũng tức là hàm đó sẽ phải có gì đó để kiểm tra input, ví dụ như hàm strlen() chẳng hạn.

Thử giả thuyết này, ta viết đoạn code quét hết 1009 hàm để xem có hàm nào gọi strlen() hay không. Sử dụng tính năng **Script Manager** của Ghidra nhúng luôn code vào chương trình để tìm cho dễ:
```java
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;

public class FindStrlen extends GhidraScript {
    @Override
    public void run() throws Exception {
        Address tableAddr = toAddr(0x0044e080);
        println("[*] Bat dau quet 1009 ham bang Java (Ghidra Native)...");

        for (int i = 0; i < 1009; i++) {
            // Tinh dia chi con tro
            Address ptr = tableAddr.add(i * 8);
            long funcAddrVal = getLong(ptr);
            
            // Ep kieu ve Address
            Address funcAddr = toAddr(funcAddrVal);
            Function func = getFunctionAt(funcAddr);
            
            if (func == null) {
                continue;
            }

            // Quet toan bo lenh Assembly
            InstructionIterator instructions = currentProgram.getListing().getInstructions(func.getBody(), true);
            while (instructions.hasNext()) {
                Instruction ins = instructions.next();
                
                
                if (ins.getMnemonicString().equals("CALL")) {
                    Reference[] refs = ins.getReferencesFrom();
                    for (Reference ref : refs) {
                        Address targetAddr = ref.getToAddress();
                        Function targetFunc = getFunctionAt(targetAddr);
                        
                        // Kiem tra xem co phai goi strlen khong
                        if (targetFunc != null && targetFunc.getName().contains("strlen")) {
                            println("==================================================");
                            println("INDEX: " + i);
                            println("-> Dia chi ham that: 0x" + Long.toHexString(funcAddr.getOffset()));
                            println("==================================================");
                        }
                    }
                }
            }
        }
        println("[*] Quet hoan tat!");
    }
}
```

Chạy script trên ta thu được kết quả là hàm 0x42fe9c:
<img width="1148" height="115" alt="image" src="https://github.com/user-attachments/assets/6cd22ebd-c044-4ea6-b52c-81f23d20bca0" />

Tìm đến hàm đó thì ta thu được logic kiểm tra flag thực sự:
```C
void FUN_0042fe9c(char *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_78;
  long local_38 [5];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  sVar1 = strlen(param_1);
  for (local_78 = 0; local_78 < sVar1; local_78 = local_78 + 1) {
    local_38[(uint)local_78 & 3] = (long)param_1[local_78] + local_38[(uint)local_78 & 3] * 0x83;
  }
  if ((((local_38[0] == 0x112996d9ae479fd) && (local_38[1] == 0xefb70b2a601818)) &&
      (local_38[2] == 0x11c799cc5063ac2)) && (local_38[3] == 0x1100d35eadc1177)) {
    printf("\x1b[0;32m[SUCCESS] Flag: %s\x1b[0m\n",param_1);
    if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}
```
Hàm này lấy độ dài của param1 hay là input của ta, sau đó hãy nhìn vào vòng for:
```C
for (local_78 = 0; local_78 < sVar1; local_78 = local_78 + 1) {
    local_38[(uint)local_78 & 3] = (long)param_1[local_78] + local_38[(uint)local_78 & 3] * 0x83;
}
```
Đây chính là logic kiểm tra chính. Phép toán local_78 & 3 tương đương với index % 4. Điều này có nghĩa là chuỗi 32 ký tự của chúng ta được chia thành 4 nhóm xen kẽ:

Nhóm 0: Ký tự 0, 4, 8, 12, 16, 20, 24, 28

Nhóm 1: Ký tự 1, 5, 9, 13, 17, 21, 25, 29

Nhóm 2: Ký tự 2, 6, 10, 14, 18, 22, 26, 30

Nhóm 3: Ký tự 3, 7, 11, 15, 19, 23, 27, 31

Với từng nhóm hàm này áp dụng công thức: Giá trị mới = Giá trị cũ * 131 + Kí tự hiện tại (0x83 = 131)

Sau đó thu được 4 giá trị và đem so sánh tương ứng với 4 hằng số 0x112996d9ae479fd, 0xefb70b2a601818, 0x11c799cc5063ac2, 0x1100d35eadc1177. Nếu đúng hết thì sẽ in ra flag: **printf("\x1b[0;32m[SUCCESS] Flag: %s\x1b[0m\n",param_1)**

Mọi thứ đã rõ ràng, giờ ta chỉ cần làm ngược lại công thức trên để tìm từng kí tự, sau đó ghép lại lần lượt theo nhóm 0 -> nhóm 1 -> nhóm 2 -> nhóm 3 là ta sẽ thu được input đúng.

## Script giải
```python
targets = [
    0x112996d9ae479fd, 
    0xefb70b2a601818,   
    0x11c799cc5063ac2, 
    0x1100d35eadc1177   
]

base = 131 
decoded_lanes = []

for i, val in enumerate(targets):
    lane_chars = []
    temp_val = val
    
    for _ in range(8):
        char_code = temp_val % base
        lane_chars.append(chr(char_code))
        temp_val //= base
    
    # Vì chia lấy dư sẽ thu được ký tự từ cuối lên đầu, nên cần đảo ngược lại
    decoded_str = "".join(lane_chars[::-1])
    decoded_lanes.append(decoded_str)
    print(f"  > Lane {i}: {decoded_str}")

# Kết quả cuối cùng
print("\n[*] Kết quả khôi phục 4 chuỗi:")
for i, s in enumerate(decoded_lanes):
    print(f"Chuỗi {i}: {s}")
```
Chạy script trên ta thu được 4 chuỗi: taV_4m06, ewhUkE_r, x{Y_3_4y, sVdM_sn}

=> Ghép lại: Input = texsaw{VVhYd_U_M4k3_mE_s0_4n6ry}

Ném input này vào chương trình để thu được flag:
<img width="1358" height="69" alt="image" src="https://github.com/user-attachments/assets/85fb3ded-aa8c-45c6-a67d-abe558569e4b" />

## **FLAG: texsaw{VVhYd_U_M4k3_mE_s0_4n6ry}**
