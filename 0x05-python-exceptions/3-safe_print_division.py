#!/usr/bin/python3

def safe_print_division(a, b):
    sum = 0
    flage = 0
    try:
        sum = a / b
    except (ZeroDivisionError, ValueError):
        flage = 1
    finally:
        if flage == 1:
            print("Inside result: None")
            return "None"
        print("Inside result: {}".format(sum))
        return sum
