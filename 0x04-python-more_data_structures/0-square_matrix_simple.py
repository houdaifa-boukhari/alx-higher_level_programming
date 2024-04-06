#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    if not matrix:
        return
    new_matrix = matrix.copy()
    for i in range(len(matrix)):
        for j in (range(len(matrix[i]))):
            matrix[i][j] **= 2
    return new_matrix
