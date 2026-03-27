# Hàm xoay bit giống hệt Assembly
def ror32(val, amt):
    return ((val >> amt) | (val << (32 - amt))) & 0xFFFFFFFF

def rol32(val, amt):
    return ((val << amt) | (val >> (32 - amt))) & 0xFFFFFFFF

# Trạng thái khởi tạo
r9d = 0x1337c0de ^ 0xc0def00d
r11d = 0
ebx = 0

flag_inner = ""

print("[*] Đang bẻ khóa thuật toán Custom VM (Bản vá lỗi)...")

# Vòng lặp 37 lần (0x25)
for i in range(37):
    # Trích xuất Target Byte từ các khối Hardcoded
    if i <= 7:
        r10 = 0x2b48b515d43f4140
        shift = i
    elif i <= 15:
        r10 = 0x35bcb75507c270f7
        shift = i - 8
    elif i <= 23:
        r10 = 0x841e959c29c8f1e7
        shift = i - 16
    elif i > 31: 
        r10 = 0x000000daf7d998de
        shift = i - 32
    else:        
        r10 = 0x1e7c68fc9ce020c2
        shift = i - 24

    T_i = (r10 >> (shift * 8)) & 0xFF

    # Cập nhật State r9d
    temp = (r9d + r11d - 0x61c88647) & 0xFFFFFFFF
    eax = ror32(temp, 3)
    r9d = rol32(temp, 5)
    r9d = (r9d ^ eax) & 0xFFFFFFFF

    # Đảo ngược công thức (ĐÃ SỬA LỖI: Thêm ^ r9d)
    part1 = (T_i - ((r9d >> 16) + ebx)) & 0xFF
    char_val = (part1 ^ (i * 17) ^ r9d ^ (r9d >> 8)) & 0xFF
    flag_inner += chr(char_val)

    # Cập nhật vòng lặp
    r11d = (r11d + 0x45d9f3b) & 0xFFFFFFFF
    ebx = (ebx + 0xb) & 0xFFFFFFFF

print(f"\n[+] BÙM! Flag của bạn đây:\ngigem{{{flag_inner}}}")
