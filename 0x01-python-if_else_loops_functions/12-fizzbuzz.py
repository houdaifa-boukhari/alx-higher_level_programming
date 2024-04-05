#!/usr/bin/python3
def fizzbuzz():
    i = 1
    while (i <= 100):
        if i % 3 == 0 and i % 5 != 0:
            print("Fizz", end="")
        elif i % 5 == 0 and i % 3 != 0:
            print("Buzz", end="")
        elif i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end="")
        else:
            print(i, end="")
        print(" ", end="")
        i += 1
