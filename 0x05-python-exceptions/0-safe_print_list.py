#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    if x == 0:
        return 0
    try:
        for i  in range(x):
            print(my_list[i], end="")
    except:
        print()
        return (i)
    print()
    return (i + 1)

my_list = [1, 2, 3, 4, 5]

nb_print = safe_print_list(my_list, 0)
print("nb_print: {:d}".format(nb_print))
