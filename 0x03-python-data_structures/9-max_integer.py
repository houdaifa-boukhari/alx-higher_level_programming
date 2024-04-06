#!/usr/bin/python3

def max_integer(my_list=[]):
    if not my_list:
        return
    max = my_list[0]
    i = 1
    size = len(my_list)
    while i < size:
        if max < my_list[i]:
            max = my_list[i]
        i += 1
    return max
