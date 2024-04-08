#!/usr/bin/python3

def get_val(str):
    dic = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    for key, value in dic.items():
        if key == str:
            return value
    return None


def roman_to_int(roman_string):
    if not roman_string or type(roman_string) is not str:
        return 0
    sum = 0
    for i in range(len(roman_string)):
        if i > 0 and get_val(roman_string[i]) > get_val(roman_string[i - 1]):
            sum -= get_val(roman_string[i - 1]) * 2
        sum += get_val(roman_string[i])
    return sum
