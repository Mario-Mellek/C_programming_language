#!/usr/bin/python3

def reversePrint():
    for i in range(25, -1, -1):
        print("{}".format(chr(i + ord('A')) if i % 2 == 0 else chr(i + ord('a'))), end='')

reversePrint()