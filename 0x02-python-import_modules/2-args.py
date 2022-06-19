#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    length = len(argv) - 1
    char = "." if (length == 0) else ":"
    if length == 1:
        print("{:d}".format(length), "argument{:s}".format(char))
    else:
        print("{:d}".format(length), "arguments{:s}".format(char))
    for i in range(len(argv)):
        if i > 0:
            print("{:d}: {:s}".format(i, argv[i]))
