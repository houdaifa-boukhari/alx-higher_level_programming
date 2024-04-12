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
    try:
        for i in range(list_length):
            new_list.append(safe_division(my_list_1[i], my_list_2[i]))
    except IndexError:
        print("out of range")
    return new_list

