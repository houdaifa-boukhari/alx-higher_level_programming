#!/usr/bin/python3
a = 0
base = "0123456789abcdef"
while a <= 98:
    print("{:d} = 0x{:x}".format(a, a))
    a += 1
