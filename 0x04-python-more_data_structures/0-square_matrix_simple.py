#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_mat = [[x ** 2 for x in i] for i in matrix]
    return (new_mat)
