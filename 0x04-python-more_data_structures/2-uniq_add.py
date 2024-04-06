#!/usr/bin/python3

def isUnique(new_list, nb):
    if not new_list:
        return True
    for i in range(len(new_list)):
        if new_list[i] == nb:
            return False
    return True


def uniq_add(my_list=[]):
    new_list = []
    sum = 0
    for i in range(len(my_list)):
        if isUnique(new_list, my_list[i]) == True:
            new_list.append(my_list[i])
    for i in range(len(new_list)):
        sum += new_list[i]
    return sum
