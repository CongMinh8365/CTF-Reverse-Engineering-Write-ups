from pwn import *

# 1. Ket noi den server
r = remote("streams.tamuctf.com", 443, ssl=True, sni="sun-temple")

# 2. Doi server in ra dong chu chao mung
r.recvuntil(b"we await your offering> ")

# 3. Gui payload tuyet hao cua chung ta len
payload = b"10f1a20384653657e8b92acb"
r.sendline(payload)

# 4. Doc ket qua tra ve (chinh la Flag!)
result = r.recvall(timeout=3).decode('utf-8', errors='ignore')

print("\n" + "="*50)
print("[+] Da nhan duoc phan hoi tu server:")
print(result)
print("="*50 + "\n")

# Chot ha
# r.interactive() # Da lay duoc flag roi thi khong can interactive nua
