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
    while str[i]:
        if islower(str[i]):
            print(str[i])
        else:
            print(str[i])
        i += 1
                  