#!/usr/bin/python3
import time as t


def main():
    start = t.time()
    i = 1

    while True:
        print(i)
        i += 1
        if i == 1000001:
            break

    end = t.time()
    print("Time taken: {} seconds".format(end - start))


main()
