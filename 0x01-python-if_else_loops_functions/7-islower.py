#!/usr/bin/python3
def islower(c):
    if not c:
        raise ValueError("Input cannot be an empty string")
    if c >= 'a' and c <= 'z':
        return True
    else:
        return False
