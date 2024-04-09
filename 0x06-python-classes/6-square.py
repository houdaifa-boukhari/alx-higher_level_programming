#!/usr/bin/python3

"""Square module"""


class Square:
    """Square class"""
    def __init__(self, size=0, position=(0, 0)):
        self.size = size
        self.position = position

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        if type(value) is not tuple or len(value) != 2 or \
           not all(isinstance(v, int) and v >= 0 for v in value):
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.__position = value

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    def area(self):
        return (self.__size * self.__size)

    def my_print(self):
        tmp = self.__position[0] * self.__size
        if self.__position[1] > 0:
            tmp /= self.__position[0]
        if self.__size == 0:
            print()
        else:
            for i in range(self.__size):
                 if tmp > 0:
                     for i in range(self.__position[0]):
                        print(" ", end="")
                     tmp -= 1
                 print("#" * self.__size)
