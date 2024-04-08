#!/usr/bin/python3

def roman_to_int(roman_string):
	if not roman_string or type(roman_string) is not str:
		return 0
	a_dictionaire = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
	for key, value in a_dictionaire.items():
		roman_string = roman_string.replace(key, str(value) + ' ')
	