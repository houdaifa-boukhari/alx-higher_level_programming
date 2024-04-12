#!/usr/bin/python3

def safe_division(a, b):
    sum = 0
    try:
        sum = a / b
    except (ZeroDivisionError):
        print("division by 0")
    except (TypeError, ValueError):
        print("wrong type")
    finally:
        return sum


def list_division(my_list_1, my_list_2, list_length):
    new_list = []
    for i in range(list_length):
        if i < min(len(my_list_1), len(my_list_2)):
            new_list.append(safe_division(my_list_1[i], my_list_2[i]))
        else:
            print("out of range")
            new_list.append(0)
    return new_list
