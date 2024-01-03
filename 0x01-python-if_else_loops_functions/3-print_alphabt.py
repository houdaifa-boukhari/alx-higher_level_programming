#!/usr/bin/python3
a = 97
while a <= 122:
    if a == 101 or a == 113:
        a += 1;
    print("{:c}".format(a), end="")
    a += 1
