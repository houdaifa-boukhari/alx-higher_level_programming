#!/usr/bin/python3
def islower(c):
    if not c:
        raise ValueError("Input cannot be an empty string")
    if c >= 'a' and c <= 'z':
        return True
    else:
        return False

def uppercase(str):
    i = 0
    upper_str = ""
    while i < len(str):
        if islower(str[i]):
            upper_str += chr((ord(str[i]) - 32))
        else:
            upper_str += str[i]
        i += 1
        print(f"{upper_str}")
