#!/usr/bin/python3

if __name__ == "__main__":
    import sys

    args = sys.argv
    count = len(args)
    sum = 0

    for i in range(1, count):
        sum += int(args[i])

    print(sum)
