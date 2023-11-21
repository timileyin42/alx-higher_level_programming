#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    new_list = []
    for x in range(list_length):
        try:
            divi = my_list_1[x] / my_list_2[x]

        except Exception as e:

            if isinstance(e, ZeroDivisionError):
                print("division by 0")

            elif isinstance(e, TypeError):
                print("wrong type")

            elif isinstance(e, IndexError):
                print("out of range")

            divi = 0

        finally:
            new_list.append(divi)

    return (new_list)
