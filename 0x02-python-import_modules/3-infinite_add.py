#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    result = 0
    for i in range(len(argv)):
        if i > 0:
            result += int(argv[i])
    print("{:d}".format(result))
