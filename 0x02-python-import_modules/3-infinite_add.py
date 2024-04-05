#!/usr/bin/python3

if __name__ == "__main__":
	"""Print the sum of the arguments."""
	import sys
	argc = len(sys.argv) - 1
	sum = 0
	i = 1
	while i <= argc:
		sum += int(sys.argv[i])
		i += 1
	print("{}".format(sum))