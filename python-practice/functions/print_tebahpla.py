#!/usr/bin/python3

for i in range(25, -1, -1):
    letter = chr(i + ord("A")) if i % 2 == 0 else chr(i + ord("a"))
    print("{}".format(letter), end="")