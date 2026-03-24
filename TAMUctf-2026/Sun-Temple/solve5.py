import os
import ctypes
import random

# --- 1. DATA TU GHIDRA ---
UNK_00104070 = b'\x37\xba\x02\x5a\xa8\x03\x23\x5c\xc7\x11\x8f\x38\x35\x83\xc9\x2b\xca\xbe\x23\xd5\xf4\x60\x27\x16\x7d\xd6\x73\x63\xa2\x37\x44\xfe\x1c\x4b\x64\x20\x61\xc9\x91\x12\x25\xeb\x48\x65\xc7\x5c\x4f\x61\x83\x48\x92\x5a\x3b\x9f\x54\xb3\x2e\x57\x70\x9f\x2e\x3b\xfd\x1f\xe9\x04\x4f\x02\x4d\x2b\x44\x2a\x3d\x8a\xd9\x3a\x30\x3d\x11\xc8\x24\x1a\x72\xfe\x2b\xfb\x1f\x72\xac\x04\x81\x73\x0b\x79\x5e\xfd\x6c\x77\x0c\x23\x47\x20\x2d\xbf\xb5\x2d\x14\x87\x69\x98\xa7\x17\xf0\xd1\x11\x3f\xf6\x45\x89\x49\x45\x41\x58\x5c\xd7\xd2\x1a\x33\xd1\x1a\x01\xfd\x6a\x05\xe2\x8a\x2d\x8e\x49\x10\x3d\x8b\xc8\xb3\x73\x74\x8c\x39\xd5\x49\x7a\xe1\xd5\x2e\xc2\x90\x6d\xc1\x3b\x5c\x99\x65\x1c\xf2\xfe\x72\xab\x63\x19\x02\xef\x69\xd8\x79\x45\x9b\xf5\x12\x90\x89\x76\x56\xd7\x34\x5b\x15\x3e\x2e\x99\x54\x61\xcb\x3e\x52\xf5\x26\xa4\xd8\x61\x5f\x12\x12\xdb\xe6\x60\x55\xcc\x4a\x4c\x42\x6d\x8c\x9c\x88\xb0\xd5\x3a\x82\x8a\x32\xd7\x42\x63\x6a\x17\x30\x7a\xf6\x52\xf8\x58\x59\xd0\xab\x57\x27\x58\x89\x32\x6a\x20\x83\xb9\x30\x92\x88\x8a\x9b\xa9\x41\x5a\x9c\x1a\xef\xcf\x40\x8f\x27\x66\x9f\xd1\x4b\x60\x40\x71\x9c\xa5\x51\x5a\x42\x39\x44\x9f\x34\x00\xea\x3c\xc9\x3a\x17\x41\x0b\x42\xed\x98\x31\x26\x73\x4f\x8e\xfb\x1a\x70\x43\x8d\x88\x78\x43\x46\x6f\x25\x3a\x8c\x47\x94\x51\x67\xef\x54\x37\xb4\x6d\x2b\xa3\xcf\x3c\x2e\x9f\x28\x5f\xb1\x51\x63\x55\x79\x7d\xc0\x11\x35\xaa\x17\xa4\x8f\x38\x08\x3e\x2d\x62\xeb\x51\x81\x95\x1a\x17\xc4\x7e\xe8\x8a\x57\x3b\xda\x64\x77\xd6\x41\x98\x9d\x6f\xbe\x6f\x14\x29\xca\x28\x38\xd3\x3b\x23\xa9\x2b\xce\x58\x52\xac\x66\x62\xd9\x17\x3d\xcc\xd5\x31\xf1\x48\x2b\xd2\x35\x35\xf3\xd3\x35\x53\x51\x8e\xa9\x70\x6c\x86\x00\x80\x70\xb6\x2d\xa1\xcf\x12\x48\x4a\x20\x12\x20\x3b\x2a\x01\x69\x42\x5b\x5c\x22\xd3\x4e\xea\x88\x57\x9a\x2e\x1f\x53\x37\x54\xe1\xa5\x8c\xc9\x26\x4f\x4f\x00\x65\xca\x08\x6c\xde\xd9\x5f\x1a\xc7\x2d\x1c\x54\x11\x0c\xd4\x81\xb4\xfc\x14\x71\xa7\x1a\x09\x76\x11\x91\x16\x11\xb9\x7f\x5a\xba\x57\x1f\xb8\x1e\x1c\x7a\x77\x78\x2a\x33\x11\xe9\x82\x72\x42\x93\x59\x16\x38\x34\x95\xd8\x7d\x16\xa0\x3e\xd4\xe4\x34\xab\xc2\x1f\xc1\xf7\x41\x42\x4e\x51\x35\x69\x4d\x08\xc9\x5a\xdc\xab\x62\xaf\xb4\x3f\x10\xfa\x4c\x4a\xda\x45\xe2\x82\x14\x3b\x40\x5a\xf2\x70\x46\xed\xc5\x3b\x4d\xc8\x66\xd5\x52\x44\x2c\x40\x48\xf1\x56\x86\x86\x6e\x7f\x06\xe5\x2d\xa9\xb3\x2e\xac\x18\x20\xa0\x8a\x4e\x83\x58\x25\x34\x19\x40\xa6\x37\x12\x2b\x3d\x20\x0c\xc3\x2d\x28\xed\x28\x3b\x9a\x1a\xce\xde\x5a\xa0\x9a\x60\x9b\xde\x4c\x7c\xf6\x1f\x11\xe4\x7f\x3d\xa0\x47\xb5\x22\x6a\x11\x5b\x7e\xf0\x02\x59\xf7\x76\x47\x56\x45\x83\x0b\xd9\x47\x47\x69\x5a\xe9\xc2\x64\x5c\x24\x11\xa0\x77\x42\x10\x89\x65\x9a\xc0\x46\x39\xf9\x12\x1e\x8a\x1c\x4a\x10\x5f\x9e\x42\x35\x65\x65\x68\xfa\x9a\x70\x2f\x18\x67\xa6\xa8\x59\xc0\x3b\x37\xae\xf5\x8e\xc2\x1b\x54\xe4\x2e\x51\x4f\x32\x6e\x63\x2f\x4a\xc7\xcd\x52\xa5\x38\x6d\xaa\xf8\x1c\xc2\xb4\x8d\x3e\x73\x51\x31\xd1\x7d\x07\x31\x25\xa1\x14\x7d\x48\x59\x70\xbf\x3a\x66\x69\x45\x2b\x3b\xe1\x2d\xcb\x39\x11\x7f\xd4\x49\x2a\xe3\x25\x27\x0b\x51\x69\x79\x23\xe9\xd4\x67\x7f\xed\x46\xb8\xca\x17\x87\xf2\x28\xd5\x16\x6a\xcd\xcb\x4c\xe7\x71\x40\xe0\x54\x41\x91\x91\x3e\x3e\xf8\x8c\x75\x6e\x4d\xc0\x83\x54\x71\xbb\x7b\x57\x15\x28\xe7\xf7\x17\x66\xce\x1f\x73\xb8\x25\x7a\x4e\x4a\x1b\x0a\x32\xc7\xf4\x5f\x4d\xb8\x63\x42\x7d\x62\xfa\xde\x32\x92\x96\x71\x9e\xa9\x3a\x07\x18\x6c\x33\xce\x73\x9d\x3b\x70\xfa\xb0\x52\xcf\xb4\x44\x1b\x5f\x3f\x3b\x7d\x65\x6b\xb3\x54\x95\x35\x5c\x97\x7f\x5c\xc4\x91\x70\xd3\xef\x14\x6a\xf0\x57\x9a\xc1\x87\xb0\xd4\x23\x10\xde\x7e\x46\x54\x63\x5c\x5a\x5a\x23\x00\x41\xba\x5e\x48\x5b\xd6\x1a\x49\x2f\x19\x7c\xd4\x1a\xdc\xcd\x20\x83\xbd\x31\xc0\x69\x71\x92\xb9\x11\x69\x2a\x7c\x4f\x39\x2d\xc8\x54\x1c\xc1\xa1\x57\xf1\x18\x59\x0b\x18\x14\xae\x56\x23\x68\x7e\x33\x99\x8a\x3e\xb5\x1d\x3b\x16\x97\x7e\xff\xdb\x39\xac\xe8\x23\x2e\xfb\x33\x5e\xe3\x2e\x09\x0a\x3b\xae\xcc\x23\x1b\x9f\x25\x86\x08\x52\x33\xeb\x2b\xb6\x22\x2e\xbe\x68\x19\x71\xa9\x4e\x53\x67\x64\x54\x4d\x1a\x52\x65\x49\x67\xa1\x3a\x47\x1d\x72\x83\x30\x28\x9a\x77\x2d\x31\xcb\x5a\x33\xd7\x69\x2d\xb8\x38\xa8\x3e\x51\xd7\x82\x52\x46\xce\x6a\x63\xbc\x6e\xc4\xc7\x51\x2e\x4e\x42\x50\x68\x4b\xd9\x60\x6c\xbb\x31\x1a\x92\x8e\x57\xe8\xba\x6b\x47\xf5\x74\x5e\xe5\x46\xfa\xaf\x20\x15\x75\x4d\xf0\xaf\x32\xa2\x9e\x4e\xb1\x4d\x3c\x1f\xa5\x2b\xfe\x34\x2e\x29\x2d\x62\x85\x70\x67\x4d\x9c\x3c\x09\x35\x48\x47\xc5\x35\x94\x8a\x79\xf1\xc4\x86\x2a\x0a\x3b\xd3\x75\x17\x4d\x00\x8e\x3e\xb6\x74\x9b\x6c\x31\x35\x4f\x6f\xda\x3a\x11\x7c\xd7\x84\xf5\x30\x20\xdb\x98\x6b\x84\xa1\x67\xb3\xe7\x12\x8a\x7d\x28\xdc\xf2\x41\xf7\xa4\x2e\xe7\x62\x5c\xd3\x86\x42\x25\x81\x3f\x7d\x3e\x33\xdc\x11\x4b\x5a\xca\x79\xdb\x52\x19\x2f\xa0\x1c\xf0\xd0\x2b\x9d\xa2\x52\xe7\xfc\x11\xca\x2f\x2d\x26\x17\x5f\x82\x42\x3f\xa1\x46\x1c\x0d\xbf\x51\xad\xbc\x34\xfd\x19\x25\x5c\xac\x4a\x6e\x31\x8b\x14\x87\x2d\x37\x86\x36\x14\xb8\x30\xfa\xc9\x42\x38\xd1\x75\x76\xa9\x40\x66\xc2\x38\x6c\x88\x7e\x8e\xda\x3d\x68\x42\x39\xe7\x37\x19\x45\x31\x1c\x7f\x51\x48\xd0\xd7\x30\x6d\x43\x4c\xe9\xa3\x65\x74\x47\x7b\x0d\xa7\x5f\x04\x32\x60\x73\x70\x37\x51\x4d\x54\x7d\x56\x5f\x49\x42\x19\x3e\x99\x88\x88\x80\x7f\x01\x36\x1a\xde\x59\x6b\x3b\x29\x3e\xd4\x0b\x8e\xa2\x85\x25\x2d\xa6\x57\x15\xef\x35\x35\xe3\x46\xd4\xcc\x62\x90\x1c\x48\x85\x74\x57\x96\x99\x4c\xbc\x88\x28\x47\x30\x85\x6b\xf4\x26\x5b\xc7\x3e\xb2\x40\x1f\x7d\x28\x44\x8b\xc5\x35\x2c\x53\x66\x26\x14\x49\xf7\xec\x31\xac\xaf\x7b\x53\x44\x12\x3f\x8a\x57\xe3\x4d\x54\x01\x37\x66\x49\xbc\x38\x7e\xb7\x14\x47\x7d\x4c\x37\x01\x42\x7a\x99\x5a\xb5\x32\x28\xb1\x77\x54\xac\xc4\x1c\xeb\xa2\x59\xf1\xe0\x28\xe4\xfe\x28\x2c\x62\x3b\x41\x7f\x49\x50\xb0\x59\x74\xd7\x5f\x51\xad\x2b\x37\x49\x5c\x67\xd0\x4c\x7c\xff\x6d\x92\x9d\x2d\x41\x6f\x17\x75\xac\x7b\x55\x64\x43\x0b\x92\x83\x9c\x2f\x1f\xe9\x90\x1a\x4f\x94\x19\x3b\xa2\x32\x6d\xb5\x78\xd7\x8a\x5f\x31\x96\x6e\xf3\x51\x1c\x88\xc2\x54\xa4\xe7\x4f\xf3\x97\x25\x59\x2f\x17\xbf\x6c\x35\xfb\x6f\x4b\xea\x38\x3a\x3e\xeb\x14\xbd\xa8\x7a\x04\xa7\x73\x75\x1e\x19\xad\x6b\x6a\x76\xbb\x77\xc3\x28\x23\x96\xd9\x17\x7b\x74\x20\x3f\xbc\x88\x8a\x1f\x73\x40\x0b\x32\x96\x9c\x28\x1d\xd6\x3e\xaa\x67\x48\x8b\xc5\x83\xc1\x32\x1c\xa3\xa9\x2d\x6c\x28\x40\xf7\x5b\x34\xe7\x59\x1a\xde\x9c\x73\x2b\x80\x2d\x71\x27\x46\x0b\xe6\x32\x8f\xd2\x5a\x1f\x33\x66\xa7\xef\x81\x78\x77\x57\x2e\x2d\x3c\x82\x2e\x7f\x8c\x9c\x14\x68\xf4\x41\x01\x10\x51\xa3\x4b\x2d\x30\xdf\x3c\xe4\x84\x5f\xbe\x26\x59\x40\x5a\x25\x18\x94\x5c\xcc\xb5\x5a\x5c\x94\x14\x15\x47\x6c\xe3\x34\x6a\x28\x75\x37\xfa\x4f\x45\xbf\x66\x6b\x82\x77\x4b\xcb\x41\x5a\x8f\xae\x1c\x94\xc8\x34\xd0\xf1\x23\xe6\xe0\x26\x8c\x6f\x59\x5a\xd6\x52\x54\x77\x3f\xdc\x85\x25\xb9\x11\x33\x03\xb8\x4f\xc5\x01\x71\xf5\xc4\x2e\x99\x0e\x19\x88\x48\x67\xba\xc4\x32\x32\x95\x26\x55\xaf\x74\xec\x5b\x6c\x5f\x5a\x61\xc0\x1b\x4b\xcd\x91\x19\x83\x21\x2e\x7b\xd7\x14\xd1\xcc\x1c\x3e\x2c\x17\xf7\x35\x46\xff\x8b\x17\xb6\xd6\x48\x5e\x13\x12\xac\x34\x67\x48\xaf\x66\xe5\x58\x76\xa5\x91\x11\x65\xb9\x46\x12\xca\x49\x85\xdf\x34\x27\xba\x3f\xb7\x66\x1a\x3a\x22\x8a\x05\x2b\x63\xdd\x9b\x2e\x4e\x1c\x5c\xfd\xae\x7a\x37\xa4\x65\xa9\x90\x5a\xf0\x60\x59\x07\xec\x43\x3a\x67\x48\xce\x8c\x1c\xd2\x8d\x39\x6d\x0d\x64\xd8\x4d\x19\x98\x9f\x12\x04\x23\x2e\x90\x96\x26\x63\xaf\x31\x21\x4d\x2b\x7e\x98\x47\x6b\x4c\x54\x50\xf1\x52\x4f\x00\x6f\xfd\xc5\x85\xe3\x1d\x59\x6b\xc5\x12\xcc\x89\x11\xb0\x54\x71\x2e\xf8\x1a\x78\x84\x42\xc1\x29\x26\x66\x26\x68\x08\x10\x66\x68\x2d\x6f\xfd\x1a\x1a\x51\x95\x14\x07\x4e\x12\xed\x1c\x4e\x11\xba\x6a\x61\x64\x60\xed\x3d\x5c\x56\xea\x66\x07\x81\x57\x4a\xb2\x70\xe0\x98\x5a\x05\x6b\x1f\x02\x95\x7d\x0c\xde\x25\xb4\xe7\x4a\x6c\x79\x40\x0b\x0e\x61\x65\x48\x4a\x29\x3a\x74\x97\xc5\x47\x69\x0b\x71\x73\xc0\x8c\x62\x8d\x2e\x70\xe9\x32\xea\x68\x11\x7e\xac\x11\x21\xd5\x52\xee\xb2\x20\x5e\x8e\x5c\x40\x55\x59\x2e\x34\x26\xfa\xc3\x41\xbb\x68\x59\xdf\xc6\x51\x47\x02\x8b\xa7\x80\x57\x2e\x11\x2d\x90\xa9\x36\x73\x41\x65\x34\x68\x20\x45\xb0\x4d\x7d\x94\x1a\x84\x3c\x47\x1b\x99\x61\x84\xa7\x31\x7b\xa9\x4d\x93\x1e\x73\xd1\xce\x23\xbd\x21\x51\xd3\x64\x1a\xe5\xe6\x46\x0e\x02\x62\xad\x54\x69\x46\x56\x84\xfe\x22\x32\xec\xc7\x54\xca\x14\x65\x86\xc6\x5a\x34\x3f\x57\x4e\x35\x7d\x14\xb7\x7f\x02\x4e\x20\x14\x56\x17\xce\xb4\x1a\xac\xe6\x2e\x24\x36\x49\xd3\x08\x60\x88\xa5\x26\xcb\x01\x28\xfe\x15\x11\x4a\x47\x71\x3f\x42\x33\xbe\x4d\x3b\xe5\x13\x68\x32\x9f\x2b\xa0\xb6\x4a\xd8\xff\x23\x7c\x3b\x8d\x85\x72\x11\xd8\x9e\x67\x81\x43\x19\x47\x8d\x60\xbb\x78\x35\xf2\xe1\x25\x63\x6b\x52\xf2\x79\x12\xd3\x88\x5f\x4d\x62\x30\x6b\x26\x2e\xd3\xeb\x4e\xa3\x17\x54\x8c\xc9\x5f\x64\xd9\x28\xe6\xed\x1c\x7d\xf4\x36\xed\x04\x3e\x55\x50\x14\x7c\x8c\x6e\xda\xbd\x39\x26\x68\x89\x8b\xdb\x12\x84\xbc\x71\x81\x92\x19\x39\xb0\x85\xa8\x4b\x5a\x57\xf5\x62\xf1\x13\x2e\x39\x73\x6a\xbc\x7b\x49\x61\xf9\x20\xc7\xb3\x3d\xce\x3a\x6d\x0d\x29\x75\x60\x37\x28\xfb\x72\x11\x00\x91\x66\x1a\x1e\x8a\xa3\x4b\x3b\x4d\xef\x23\x35\xd3\x51\xd4\x6f\x1f\x5a\x04\x6a\x2a\x25\x68\x8a\x7b\x65\xdf\x92\x60\xec\xe9\x51\x34\xe0\x1f\xb7\xb1\x3b\xba\x0c\x5a\xb5\x01\x6c\xd9\x79\x8a\xa0\x64\x14\x8a\x18\x60\x8d\x02\x7b\x59\xce\x86\x1a\x85\x14\x56\xab\x2e\x24\x20\x46\x74\x75\x43\x8e\x45\x1f\xd5\x41\x51\x7f\x2c\x71\x49\x87\x5f\x63\x37\x2e\x81\xc8\x5f\x62\x44\x11\x8e\x7d\x44\x53\x65\x69\xff\xac\x6f\x19\x68\x1c\x57\x0e\x3c\x1a\x31\x25\xb3\x29\x3a\x19\xd9\x5c\x0d\x58\x46\x2f\x40\x5a\x19\xf7\x74\x4f\x18\x1c\x73\x50\x6b\x20\x95\x52\x2d\x30\x68\x02\x48\x88\x99\x9d\x38\x6b\x00\x17\x71\x77\x84\xeb\x17\x81\x20\x4c\x23\x6b\x26\x4c\x3c\xaa\x4a\x18\x42\x73\x3d\xbd\x44\xa3\x57\x31\xd0\xeb\x7e\xbb\xc8\x2d\x86\x5f\x49\x8e\x82\x35\x48\x0d\x45\x80\x7b\x7d\xb4\xff\x2b\xf0\x83\x6a\x92\x8c\x51\x27\x69\x84\x0f\x4f\x12\x83\x47\x3c\xd2\xa0\x6d\x08\x0e\x3d\x78\x4d\x6f\xd2\x56\x89\xb7\x3b\x74\x2b\x2d\x3a\xa8\xe1\x51\x06\x80\x6b\x51\x27\x5c\xcf\xd1\x5f\x60\xc4\x3d\x9b\x55\x3e\x97\x21\x78\x64\x73\x77\x05\x91\x83\x31\x24\x6c\x61\x96\x23\xfe\xd8\x42\x9c\x6e\x1a\x85\x83\x52\xf6\xc9\x5a\x32\x71\x1c\xef\xb3\x6c\xa6\x98\x14\xa4\x21\x4c\x06\xdc\x3d\xd0\xa6\x76\x73\x73\x32\x1f\xf8\x60\x18\xfd\x4a\x75\x30\x52\x47\xb9\x33\x2b\x1b\x3f\x51\xea\x44\xcd\x88\x3b\x08\xa0\x2e\x52\xc6\x11\x2e\x3b\x17\xd5\xe9\x39\x98\x68\x8a\x5c\xbd\x2d\x9c\xb2\x52\x47\xd0\x36\x83\x98\x1c\x85\xde\x1c\x5a\x70\x14\x47\x61\x31\x4d\xea\x5f\xb2\x4c\x14\x7d\x53\x45\xf4\xe8\x3c\x5c\xcb\x6a\xa7\x3f\x2b\x75\xf5\x23\x2a\x0b\x54\xd0\xf4\x25\x05\xc5\x68\x3f\xc5\x65\xf1\x5b\x1c\xce\x5e\x70\x2d\xa8\x49\x08\xf5\x36\xd8\x36\x72\x3d\x42\x7f\x94\xa2\x84\x67\xa5\x6c\x11\x07\x3c\x1f\x17\x12\x6b\x50\x25\xf8\x8d\x1f\x2c\x02\x86\xca\x33\x51\x89\x98\x12\x4e\xe0\x3e\xed\x02\x52\x33\x10\x87\x45\x4f\x51\x77\x6d\x59\x18\xe5\x74\xef\xd5\x7f\x1e\x83\x6f\xf2\x91\x51\xe0\x94\x74\xe8\x88\x68\x1a\x19\x25\xac\x3b\x51\xd4\xdf\x23\x98\xa6\x1f\xcb\x22\x1c\x4e\xd0\x64\x0b\xd4\x39\x2f\x21\x1f\x8c\x7a\x76\x4c\x24\x14\x69\x1c\x32\x86\x7a\x1c\x19\x92\x51\x7c\x44\x6b\x50\xf1\x5f\x0c\x41\x3a\xef\x1f\x6a\x8e\x29\x5a\xcf\xf5\x59\x5c\x05\x36\x35\x3e\x23\x89\x6a\x5f\x0d\x42\x65\x46\xac\x72\xc0\xad\x2e\x6f\x5b\x82\x5f\xa6\x46\x50\xd0\x51\x5d\xb6\x2d\xb6\x4a\x5a\x08\xe5\x1a\x76\xf8\x51\x12\xe6\x5f\x73\x33\x20\x8c\xf9\x59\x61\x84\x4f\x79\x15\x5f\x08\x52\x38\x38\x95\x80\x96\x97\x30\x09\x11'
UNK_00104bc0 = b'\x48\x00\x54\x00\x60\x00\x6c\x00\x42\x00\x4e\x00\x5a\x00\x66\x00\x72\x00\x7e\x00\x8a\x00\x96\x00\x46\x00\x52\x00\x5e\x00\x6a\x00'
UNK_00104ba0 = b'\x5c\x03\x84\x03\xac\x03\xd4\x03\xf2\x03\x10\x04\x2e\x04\x4c\x04\xa2\x03\xca\x03\xe8\x03\x06\x04\x24\x04\x42\x04\x60\x04\x88\x04'
UNK_00104b20 = b'\x00\x00\x0c\x00\x0a\x00\x08\x00\x07\x00\x05\x00\x04\x00\x03\x00\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'
UNK_00104b40 = b'\x01\x08\xa4\x04\x81\x90\x03\x05\x0c\x12\x22\x02\x02\x00\x82\x20\x00\x00\x04\x06\x08\x44\x40\x81\x07\x05\x06\x90\x88\x01\x01\x06\x84\x04\x20\x42\x02\x03\x28\x04\x40\x18\x05\x08\x00\x81\x90\x20\x04\x07\x10\x50\x24\x10\x06\x00\x40\x24\x00\x00\x03\x01\x80\x0c\x11\x88\x02\x07\x09\x40\x03\x20\x05\x06\x42\x02\x80\x12\x08\x04\x10\x94\x48\x20\x01\x02\xa0\x08\x41\x04\x03\x05\x10\x42\x12\x40'
UNK_00104be0 = b'\xf8\x00\xb4\x00\xf0\x00\xaa\x00\x82\x00\xc8\x00\xac\x00\x78\x00\x8e\x00\xd4\x00\xa2\x00\xa6\x00\x98\x00\x6f\x00\xdc\x00\xb0\x00'
UNK_00104c00 = b'\x52\x00\x6e\x00\x00\x00\x66\x00\x48\x00\x56\x00\x79\x00\x5c\x00\x5e\x00\x00\x00\x83\x00\x54\x00\x64\x00\x6a\x00\x97\x00\x74\x00'
UNK_00104c20 = b'\xf4\xf8\x0a\x06\x03\xfe\xfc\x09\xf9\x04\x0b\xfd\x02\xfb\x05\xff'
UNK_00104c30 = b'\xf9\x05\x04\xfd\x02\x01\xfc\x06\xfe\x03\x08\xff\x00\xfb\x07\xfa'

# --- 2. CODE DECOMPILE C (Ghidra output cua ban) ---
GHIDRA_C_CODE = """
long FUN_001020f0(long param_1)
{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iStack_14c;
  byte bStack_147;
  byte bStack_146;
  byte bStack_145;
  byte bStack_144;
  byte bStack_143;
  byte bStack_142;
  byte bStack_141;
  byte bStack_140;
  byte bStack_13f;
  byte bStack_13e;
  uint uStack_13c;
  byte bStack_136;
  byte bStack_135;
  byte bStack_134;
  byte bStack_133;
  byte bStack_132;
  byte bStack_131;
  byte bStack_130;
  byte bStack_12f;
  byte bStack_12e;
  byte bStack_12d;
  byte bStack_12c;
  byte bStack_12b;
  byte bStack_12a;
  byte bStack_129;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  byte *pbStack_c8;
  long lStack_c0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  bVar1 = true;
  uStack_d4 = 0;
  lStack_78 = 0;
  iStack_14c = 0x35785628;
code_r0x00103a87:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iStack_14c == 0x1832889) {
              uStack_58 = (ulong)bStack_146;
              uStack_cc = 1 << (bStack_146 & 0x1f);
              uStack_60 = (ulong)bStack_12b;
              uStack_80 = 0;
              uStack_d8 = 1000;
              iStack_14c = 0x41a8bcac;
            }
            if (iStack_14c != 0x26c5365) break;
            bStack_144 = *(byte *)(param_1 + 0x14);
            iStack_14c = 0x49f3f022;
            if (bStack_144 == 0xff) {
              iStack_14c = 0x441d7eae;
            }
          }
          if (iStack_14c != 0x8f3b67c) break;
          uStack_13c = (uStack_128 * 0x424) / 1000;
          iStack_14c = 0x1246c07c;
        }
        if (iStack_14c != 0xbbe3ec7) break;
        bStack_12f = *(byte *)(param_1 + 0x1c);
        uStack_fc = uStack_f0;
        iStack_14c = 0x6541d748;
        if (bStack_12f == 0xff) {
          iStack_14c = 0x5ecf202c;
        }
      }
      if (iStack_14c != 0xbe1e24b) break;
      uStack_13c = uStack_128;
      if (((bStack_146 == 3) || (bStack_146 == 6)) || (bStack_146 == 0xc)) {
code_r0x001036e9:
        uStack_13c = (uStack_128 * 0x2c6) / 1000;
        iStack_14c = 0x1246c07c;
      }
      else {
code_r0x001038c4:
        uVar2 = 0xb4;
        if (0xb4 < uStack_13c) {
          uVar2 = uStack_13c;
        }
        uVar3 = 1000;
        if (uVar2 < 1000) {
          uVar3 = uVar2;
        }
        lStack_78 = ((ulong)(((bStack_12a & 3) + (bStack_129 & 3)) * 7 +
                             (uint)*(ushort *)
                                  (&UNK_00104bc0 + (ulong)((bStack_12a ^ bStack_129) & 0xf) * 2) +
                            (uint)*(ushort *)(&UNK_00104ba0 + (ulong)bStack_146 * 2) *
                            (uint)*(ushort *)(&UNK_00104b20 + (ulong)bStack_147 * 2)) * (ulong)uVar3
                    ) / 1000 + lStack_c0;
        uStack_d4 = uStack_e4 + 1;
        bVar1 = false;
        iStack_14c = 0x35785628;
      }
    }
    if (iStack_14c != 0xc905ef6) {
      if (iStack_14c == 0xdfa86ea) {
        uVar2 = 0x1cc;
        if (uStack_d0 < 0x1cc) {
          uVar2 = uStack_d0;
        }
        uStack_e8 = ((1000 - uVar2) * uStack_ec) / 1000;
        iStack_14c = 0x2386e4e6;
      }
      else if (iStack_14c == 0x103db556) {
        bStack_134 = *(byte *)(param_1 + 0x14);
        uStack_118 = uStack_10c;
        iStack_14c = 0x7dd3cf27;
        if (bStack_134 == 0xff) {
          iStack_14c = 0x5d733b35;
        }
      }
      else if (iStack_14c == 0x10449324) {
        uStack_118 = (uStack_10c * 0x42e) / 1000;
        iStack_14c = 0x5d733b35;
      }
      else {
        if (iStack_14c == 0x1246c07c) goto code_r0x001038c4;
        if (iStack_14c == 0x1488e86a) goto code_r0x001036e9;
        if (iStack_14c == 0x183bb7c2) {
          puStack_88 = &UNK_00104c00;
          puStack_90 = &UNK_00104c30;
          lStack_98 = 4;
          iStack_dc = 0x10;
          uStack_e8 = uStack_ec;
          iStack_14c = 0x2386e4e6;
          if (pbStack_c8[1] != 0 && bStack_147 == pbStack_c8[1]) {
            iStack_14c = 0x70d7aa37;
          }
        }
        else if (iStack_14c == 0x1bb78785) {
          bStack_131 = *(byte *)(param_1 + 0x13);
          uStack_100 = uStack_f4;
          iStack_14c = 0x7c285e36;
          if (bStack_131 == 0xff) {
            iStack_14c = 0x6e2724f7;
          }
        }
        else if (iStack_14c == 0x2386e4e6) {
          uStack_e0 = uStack_e8;
          uStack_80 = uStack_68 + 1;
          iStack_14c = 0x41a8bcac;
          uStack_d8 = uStack_e0;
          if (uStack_80 == uStack_60) {
            iStack_14c = 0x679a7ffb;
          }
        }
        else if (iStack_14c == 0x288ee366) {
          uStack_114 = uStack_108;
          iStack_14c = 0x59a403c9;
          if (bStack_146 == 7 || (bStack_145 & 7) == 2) {
            iStack_14c = 0x5030eba8;
          }
        }
        else if (iStack_14c == 0x2c974610) {
          iStack_14c = 0x441d7eae;
          if (bStack_147 == 7 && bStack_144 < bStack_136) {
            iStack_14c = 0xbe1e24b;
          }
        }
        else if (iStack_14c == 0x335c07c6) {
          uStack_13c = uStack_128;
          iStack_14c = 0x1246c07c;
          if (bStack_144 != 0xff && bStack_142 < bStack_144) {
            iStack_14c = 0x5514c603;
          }
        }
        else if (iStack_14c == 0x35785628) {
          lStack_c0 = lStack_78;
          uStack_e4 = uStack_d4;
          if (bVar1) {
            uStack_e4 = 0;
          }
          iStack_14c = 0x619258d6;
          if (0x38f < uStack_e4) {
            iStack_14c = 0x407d43f2;
          }
        }
        else if (iStack_14c == 0x39a4bbdd) {
          uStack_114 = uStack_108;
          iStack_14c = 0x59a403c9;
          if (bStack_147 == 1 && bStack_13e < bStack_12d) {
            iStack_14c = 0x288ee366;
          }
        }
        else if (iStack_14c == 0x3a49cded) {
          uStack_104 = (uStack_f8 * 0x424) / 1000;
          iStack_14c = 0x73ed35b5;
        }
        else if (iStack_14c == 0x3d280dfb) {
          bStack_141 = *(byte *)(param_1 + 0x12);
          uStack_124 = uStack_120;
          iStack_14c = 0x7ea0352e;
          if (bStack_141 == 0xff) {
            iStack_14c = 0x3e4952ec;
          }
        }
        else if (iStack_14c == 0x3e4952ec) {
          uStack_128 = uStack_124;
          bStack_142 = *(byte *)(param_1 + 0x11);
          uStack_13c = uStack_124;
          iStack_14c = 0x26c5365;
          if (bStack_142 == 0xff) {
            iStack_14c = 0x1246c07c;
          }
        }
        else {
          if (iStack_14c == 0x407d43f2) {
            return lStack_c0;
          }
          if (iStack_14c == 0x41a8bcac) {
            uStack_68 = uStack_80;
            uStack_ec = uStack_d8;
            uStack_70 = (ulong)*(byte *)(param_1 + uStack_80);
            pbStack_c8 = &UNK_00104b40 + uStack_70 * 6;
            puStack_88 = &UNK_00104be0;
            puStack_90 = &UNK_00104c20;
            lStack_98 = 2;
            iStack_dc = 0x16;
            iStack_14c = 0x183bb7c2;
            if (bStack_147 == *pbStack_c8) {
              iStack_14c = 0x70d7aa37;
            }
          }
          else if (iStack_14c == 0x42118aed) {
            uStack_11c = uStack_110;
            iStack_14c = 0xc905ef6;
            if ((bStack_145 & 7) == 1 && (bStack_147 == 5 && bStack_140 < bStack_143)) {
              iStack_14c = 0x475c9de6;
            }
          }
          else if (iStack_14c == 0x44031262) {
            bStack_140 = *(byte *)(param_1 + 0x1c);
            uStack_11c = uStack_110;
            iStack_14c = 0x5b49263a;
            if (bStack_140 == 0xff) {
              iStack_14c = 0xc905ef6;
            }
          }
          else if (iStack_14c == 0x441d7eae) {
            uStack_13c = uStack_128;
            iStack_14c = 0x1246c07c;
            if (bStack_147 == 7) {
              iStack_14c = 0x335c07c6;
            }
          }
          else if (iStack_14c == 0x475c9de6) {
            uStack_11c = (uStack_110 * 0x30c) / 1000;
            iStack_14c = 0xc905ef6;
          }
          else if (iStack_14c == 0x49f3f022) {
            bStack_136 = *(byte *)(param_1 + 0x16);
            iStack_14c = 0x441d7eae;
            if (bStack_142 < bStack_144 && bStack_136 != 0xff) {
              iStack_14c = 0x2c974610;
            }
          }
          else if (iStack_14c == 0x4ad16d5d) {
            bStack_133 = *(byte *)(param_1 + 0x15);
            uStack_104 = uStack_f8;
            iStack_14c = 0x76c047b5;
            if (bStack_133 == 0xff) {
              iStack_14c = 0x73ed35b5;
            }
          }
          else if (iStack_14c == 0x4ee0ea84) {
            uStack_118 = uStack_10c;
            iStack_14c = 0x5d733b35;
            if (bStack_146 == 2 || (bStack_145 & 0xd) == 9) {
              iStack_14c = 0x10449324;
            }
          }
          else if (iStack_14c == 0x5030eba8) {
            uStack_114 = (uStack_108 * 0x35c) / 1000;
            iStack_14c = 0x59a403c9;
          }
          else if (iStack_14c == 0x5514c603) {
            uStack_13c = uStack_128;
            iStack_14c = 0x1246c07c;
            if (*(byte *)(param_1 + 0x16) == 0xff) {
              iStack_14c = 0x8f3b67c;
            }
          }
          else if (iStack_14c == 0x59a403c9) {
            uStack_f0 = uStack_114;
            bStack_13f = *(byte *)(param_1 + 0xe);
            bStack_12e = bStack_13f == 0xff;
            uStack_fc = uStack_114;
            iStack_14c = 0xbbe3ec7;
            if (bStack_13f == 0xff) {
              iStack_14c = 0x5ecf202c;
            }
          }
          else if (iStack_14c == 0x5b49263a) {
            uStack_11c = uStack_110;
            iStack_14c = 0xc905ef6;
            if (bStack_143 != 0xff && bStack_13f < bStack_140) {
              iStack_14c = 0x42118aed;
            }
          }
          else if (iStack_14c == 0x5d733b35) {
            uStack_11c = uStack_118;
            iStack_14c = 0x44031262;
            uStack_110 = uStack_11c;
            if ((bStack_12e & 1) != 0) {
              iStack_14c = 0xc905ef6;
            }
          }
          else if (iStack_14c == 0x5ecf202c) {
            uStack_f4 = uStack_fc;
            bStack_130 = *(byte *)(param_1 + 0xf);
            uStack_100 = uStack_fc;
            iStack_14c = 0x1bb78785;
            if (bStack_130 == 0xff) {
              iStack_14c = 0x6e2724f7;
            }
          }
          else if (iStack_14c == 0x6091fa3d) {
            uStack_124 = uStack_120;
            iStack_14c = 0x3e4952ec;
            if (bStack_147 == 1 && bStack_141 < bStack_135) {
              iStack_14c = 0x712c71f6;
            }
          }
          else if (iStack_14c == 0x619258d6) {
            uVar2 = uStack_e4 * 3;
            bStack_145 = (&UNK_00104070)[uVar2];
            bStack_129 = (&UNK_00104070)[uVar2 + 1];
            bStack_12a = (&UNK_00104070)[uVar2 + 2];
            bStack_147 = bStack_145 >> 4;
            bStack_146 = bStack_145 & 0xf;
            bStack_12b = *(byte *)(param_1 + 0xc);
            uStack_e0 = 1000;
            iStack_14c = 0x1832889;
            if (bStack_12b == 0) {
              iStack_14c = 0x679a7ffb;
            }
          }
          else if (iStack_14c == 0x6541d748) {
            uStack_fc = uStack_f0;
            iStack_14c = 0x5ecf202c;
            if ((bStack_145 & 7) == 1 && (bStack_147 == 5 && bStack_13f < bStack_12f)) {
              iStack_14c = 0x7ea02f81;
            }
          }
          else if (iStack_14c == 0x679a7ffb) {
            uStack_108 = uStack_e0;
            bStack_13e = *(byte *)(param_1 + 0xd);
            bStack_12c = bStack_13e == 0xff;
            uStack_114 = uStack_e0;
            iStack_14c = 0x70c07c3a;
            if (bStack_13e == 0xff) {
              iStack_14c = 0x59a403c9;
            }
          }
          else if (iStack_14c == 0x687740c0) {
            uStack_124 = (uStack_120 * 800) / 1000;
            iStack_14c = 0x3e4952ec;
          }
          else if (iStack_14c == 0x6e2724f7) {
            uStack_f8 = uStack_100;
            bStack_132 = *(byte *)(param_1 + 0x10);
            uStack_104 = uStack_100;
            iStack_14c = 0x4ad16d5d;
            if (bStack_132 == 0xff) {
              iStack_14c = 0x73ed35b5;
            }
          }
          else if (iStack_14c == 0x6e9cae68) {
            uStack_100 = (uStack_f4 * 0x438) / 1000;
            iStack_14c = 0x6e2724f7;
          }
          else if (iStack_14c == 0x70c07c3a) {
            bStack_12d = *(byte *)(param_1 + 0x12);
            uStack_114 = uStack_108;
            iStack_14c = 0x39a4bbdd;
            if (bStack_12d == 0xff) {
              iStack_14c = 0x59a403c9;
            }
          }
          else if (iStack_14c == 0x70d7aa37) {
            iVar4 = iStack_dc;
            if ((*(ushort *)(pbStack_c8 + lStack_98) & uStack_cc) == 0) {
              iVar4 = 0;
            }
            uStack_d0 = (int)(char)puStack_90[uStack_58] +
                        (uint)*(ushort *)(puStack_88 + uStack_70 * 2) + iVar4;
            uStack_e8 = uStack_ec;
            iStack_14c = 0xdfa86ea;
            if ((int)uStack_d0 < 1) {
              iStack_14c = 0x2386e4e6;
            }
          }
          else if (iStack_14c == 0x712c71f6) {
            uStack_124 = uStack_120;
            iStack_14c = 0x3e4952ec;
            if (bStack_146 == 7 || (bStack_145 & 7) == 2) {
              iStack_14c = 0x687740c0;
            }
          }
          else if (iStack_14c == 0x73ed35b5) {
            uStack_10c = uStack_104;
            bStack_143 = *(byte *)(param_1 + 0x19);
            uStack_118 = uStack_104;
            iStack_14c = 0x103db556;
            if (bStack_143 == 0xff) {
              iStack_14c = 0x5d733b35;
            }
          }
          else if (iStack_14c == 0x76c047b5) {
            uStack_104 = uStack_f8;
            iStack_14c = 0x73ed35b5;
            if (bStack_147 == 4 && bStack_132 < bStack_133) {
              iStack_14c = 0x3a49cded;
            }
          }
          else if (iStack_14c == 0x7c285e36) {
            uStack_100 = uStack_f4;
            iStack_14c = 0x6e2724f7;
            if (bStack_147 == 2 && bStack_130 < bStack_131) {
              iStack_14c = 0x6e9cae68;
            }
          }
          else if (iStack_14c == 0x7dd3cf27) {
            uStack_118 = uStack_10c;
            iStack_14c = 0x5d733b35;
            if (bStack_147 == 5 && bStack_143 < bStack_134) {
              iStack_14c = 0x4ee0ea84;
            }
          }
          else if (iStack_14c == 0x7ea02f81) {
            uStack_fc = (uStack_f0 * 900) / 1000;
            iStack_14c = 0x5ecf202c;
          }
          else if (iStack_14c == 0x7ea0352e) {
            bStack_135 = *(byte *)(param_1 + 0x1b);
            uStack_124 = uStack_120;
            iStack_14c = 0x3e4952ec;
            if (bStack_13e < bStack_141 && bStack_135 != 0xff) {
              iStack_14c = 0x6091fa3d;
            }
          }
        }
      }
      goto code_r0x00103a87;
    }
    uStack_120 = uStack_11c;
    uStack_124 = uStack_11c;
    iStack_14c = 0x3d280dfb;
    if ((bStack_12c & 1) != 0) {
      iStack_14c = 0x3e4952ec;
    }
  } while( true );
}
"""

# --- 3. AUTO CREATE C FILE & COMPILE ---
def setup_c_lib():
    print("[*] Dang chuan bi file C va bien dich...")
    
    def to_c_array(name, data):
        hex_vals = ", ".join([f"0x{b:02x}" for b in data])
        return f"uint8_t {name}[] = {{{hex_vals}}};\n"

    # Da them stdbool.h de ho tro kieu bool chuan
    c_source = "#include <stdint.h>\n#include <stdbool.h>\n"
    c_source += to_c_array("UNK_00104070", UNK_00104070)
    c_source += to_c_array("UNK_00104bc0", UNK_00104bc0)
    c_source += to_c_array("UNK_00104ba0", UNK_00104ba0)
    c_source += to_c_array("UNK_00104b20", UNK_00104b20)
    c_source += to_c_array("UNK_00104b40", UNK_00104b40)
    c_source += to_c_array("UNK_00104be0", UNK_00104be0)
    c_source += to_c_array("UNK_00104c00", UNK_00104c00)
    c_source += to_c_array("UNK_00104c20", UNK_00104c20)
    c_source += to_c_array("UNK_00104c30", UNK_00104c30)

    code = GHIDRA_C_CODE
    
    # Fix Kieu Du Lieu
    code = code.replace("long FUN_001020f0(long param_1)", "int64_t simulate(uint8_t* p_param)")
    code = code.replace("bool bVar1;", "uint64_t param_1 = (uint64_t)p_param;\n  bool bVar1;")
    code = code.replace("typedef int bool;", "") 
    
    # Thay the khai bao bien (co dau cach)
    code = code.replace("uint ", "uint32_t ")
    code = code.replace("byte ", "uint8_t ")
    code = code.replace("ulong ", "uint64_t ")
    code = code.replace("long ", "int64_t ")
    code = code.replace("undefined ", "uint8_t ")
    code = code.replace("ushort ", "uint16_t ")
    
    # Thay the ep kieu trong ngoac (khong co dau cach)
    code = code.replace("(uint)", "(uint32_t)")
    code = code.replace("(byte)", "(uint8_t)")
    code = code.replace("(ulong)", "(uint64_t)")
    code = code.replace("(long)", "(int64_t)")
    code = code.replace("(ushort *)", "(uint16_t *)")
    code = code.replace("(ushort)", "(uint16_t)")
    
    code = code.replace("&UNK_", "UNK_")

    with open("sim.c", "w") as f:
        f.write(c_source + "\n" + code)
    
    print("[+] Da luu file sim.c")
    # Them co -std=gnu17 de ep GCC dung chuan cu, tranh loi tu khoa bool cua C23
    os.system("gcc -std=gnu17 -shared -o sim.so -fPIC sim.c -O3")
    print("[+] Da bien dich thanh cong sim.so")

# --- 4. GIAI MA HEX (HILL CLIMBING ALGORITHM) ---
def evaluate(towers, sim_lib):
    p = [0xff] * 32
    p[12] = 12
    for i in range(12):
        p[i] = towers[i]
        p[13 + towers[i]] = i
    c_array = (ctypes.c_ubyte * 32)(*p)
    return sim_lib.simulate(c_array)

def run_solver():
    sim_lib = ctypes.CDLL('./sim.so')
    sim_lib.simulate.restype = ctypes.c_int64
    sim_lib.simulate.argtypes = [ctypes.POINTER(ctypes.c_ubyte)]

    target = 0x341c6e # 3415150
    towers_pool = list(range(16))
    
    best_overall = float('inf')
    
    print(f"[*] Bat dau thuat toan Hill Climbing tim diem <= {target}...\n")
    
    while True:
        # 1. Random Restart: Chon 1 diem khoi dau ngau nhien
        current_towers = random.sample(towers_pool, 12)
        current_score = evaluate(current_towers, sim_lib)
        
        stagnant_steps = 0
        
        # 2. Local Search: Leo doi de toi uu diem
        while stagnant_steps < 1000: # Neu thu 1000 buoc khong tot hon -> Doi sang nui khac (Restart)
            neighbor = current_towers.copy()
            
            # Tao ra mot cau hinh lan can
            if random.random() < 0.5:
                # Kieu 1: Doi cho 2 thap dang co cho nhau
                idx1, idx2 = random.sample(range(12), 2)
                neighbor[idx1], neighbor[idx2] = neighbor[idx2], neighbor[idx1]
            else:
                # Kieu 2: Vut 1 thap dang xai, lay 1 thap moi trong kho lap vao
                unused = list(set(towers_pool) - set(current_towers))
                idx_to_replace = random.randint(0, 11)
                neighbor[idx_to_replace] = random.choice(unused)
            
            # Cham diem cau hinh moi
            new_score = evaluate(neighbor, sim_lib)
            
            # Neu pha ky luc the gioi -> In ra!
            if new_score < best_overall:
                best_overall = new_score
                print(f"[+] Toi uu nhat hien tai: {best_overall} (Target: <= {target})")
                
                # BINGO!
                if best_overall <= target:
                    hex_str = "".join([f"{t:x}{idx:x}" for idx, t in enumerate(neighbor)])
                    print(f"\n[🎉] BINGO!!! Da tim thay cau hinh!")
                    print("-" * 50)
                    print(f"[!] Payload gui len server: {hex_str}")
                    print("-" * 50)
                    return # Ket thuc chuong trinh
            
            # Neu cau hinh nay ngon hon (hoac bang) cau hinh ngay truoc do -> Chap nhan di tiep
            if new_score <= current_score:
                current_towers = neighbor
                current_score = new_score
                stagnant_steps = 0 # Reset bo dem bi ket
            else:
                stagnant_steps += 1 # Cong bo dem bi ket len 1

if __name__ == '__main__':
    setup_c_lib()
    run_solver()
