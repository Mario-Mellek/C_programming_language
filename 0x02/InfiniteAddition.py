#!/usr/bin/python3

if __name__ == "__main__":
    import sys

    args = sys.argv
    count = len(args) + 1

    for i in range(1, count + 1):
        sum += int(args[i])

    print(sum)
