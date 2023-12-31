#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    if not my_list or x == 0:
        print()
        return (0)
    count = 0
    for y in range(x):
        try:
            print("{:d}".format(my_list[y]), end="")
        except (ValueError, TypeError):
            pass
        else:
            count += 1
    print()
    return (count)
