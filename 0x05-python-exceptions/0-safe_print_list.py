#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    count = 0
    for i in my_list:
        count += 1

    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
        except IndexError:
            x = count
    print("")
    return x
