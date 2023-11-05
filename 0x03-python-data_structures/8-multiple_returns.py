#!/usr/bin/python3
def multiple_returns(sentence):
    len_char = len(sentence)

    if (len_char == 0):
        new_tuple = (len_char, None)
    else:
        new_tuple = (len_char, sentence[0])

    return (new_tuple)
