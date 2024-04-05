#!/usr/bin/python3

if __name__ == "__main__":
    """Print the number of and the list of arguments."""
    import sys
    argc = len(sys.argv) - 1
    if argc == 0:
        print("0 arguments.")
    else:
        print("{} arguments:".format(argc))
    i = 1
    while i <= argc:
        print("{}: {}".format(i, sys.argv[i]))
        i += 1
