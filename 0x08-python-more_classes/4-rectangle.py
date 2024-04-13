#!/usr/bin/python3

"""Module that defines a class Rectangle"""


from typing import Any


class Rectangle:
    """Class that defines a rectangle"""

    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, value):
        if not type(value) is int:
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, value):
        if not type(value) is int:
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    def area(self):
        return self.__height * self.__width

    def perimeter(self):
        if self.__height == 0 or self.__width == 0:
            return 0
        return 2 * (self.__height + self.__width)

    def __str__(self):
        new_str = ""
        if self.__height == 0 or self.__width == 0:
            return ""
        new_str = "\n".join(["#" * self.__width for i in range(self.height)])
        return new_str

    def __repr__(self):
        return "Rectangle({}, {})".format(self.__width, self.__height)
