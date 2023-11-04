#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for x in matrix:
        space = ""
        for y in x:
            print("{:s}{:d}".format(space, y), end="")
            space = " "
        print()
