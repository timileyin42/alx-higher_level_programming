#!/usr/bin/python3

if __name__ == "__main__":

# import the add function from add_0.py
	from add_0 import add

#assigning the values 1 and 2 to the variables a and b respectively
	a = 1
	b = 2

# calling of the add funtion with a and b as arguments and store the result
	result = add(a, b)

# print the result using a formatted string
	print("{} + {} = {}".format(a, b, result))
