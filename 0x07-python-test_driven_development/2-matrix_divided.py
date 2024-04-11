#!/usr/bin/python3

"""Defines a matrix division function."""


def matrix_divided(matrix, div):
    """Divides all elements of a matrix."""
    if type(matrix) is not list or len(matrix) == 0:
        raise
            TypeError("matrix must be a matrix (list of lists) of integers/floats")
    if not all(type(row) is list for row in matrix):
        raise   
            TypeError("matrix must be a matrix (list of lists) of integers/floats")
    if not all(type(i) in [int, float] for row in matrix for i in row):
        raise
            TypeError("matrix must be a matrix (list of lists) of integers/floats")
    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise
            TypeError("Each row of the matrix must have the same size")
    if type(div) not in [int, float]:
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")
    return [[round(i / div, 2) for i in row] for row in matrix]
