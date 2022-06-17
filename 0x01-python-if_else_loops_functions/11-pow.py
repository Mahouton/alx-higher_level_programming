#!/usr/bin/python3
def pow(a, b):
    result = 1
    negative = False
    if b < 0:
        b *= -1
        negative = True
    for i in range(b):
        result *= a
    if negative:
        return (1 / result)
    else:
        return result
