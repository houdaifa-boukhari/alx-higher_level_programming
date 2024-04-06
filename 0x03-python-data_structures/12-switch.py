#!/usr/bin/python3

def switch_dict(a_dictionary):
	new_dict = {}
	for key, value in a_dictionary.items():
		new_dict.setdefault(value, []).append(key)
	return new_dict
