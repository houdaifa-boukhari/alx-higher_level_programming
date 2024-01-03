#!/usr/bin/python3
a = 0
while a <= 99:
    if a < 99:
        print("{:02d}, ".format(a), end="")
    else:
        print("{:02d}".format(a))
    a += 1
