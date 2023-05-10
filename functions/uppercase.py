#!/usr/bin/python3
def uppercase(str):
    strLen = len(str)
    for i in range(strLen):
        c = str[i]
        if ord(c) >= ord('a') and ord(c) <= ord('z'):
            c = chr(ord(c - 32))

        if i == strLen - 1:
            print("{}".format(c))
        else:
            print("{}".format(c), end="")
    print("\n")