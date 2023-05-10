#!/usr/bin/python3

def print_last_digit(number):
    lastDigit = abs(number) % 10
    if number < 0:
        lastDigit = -lastDigit
    print(lastDigit, end="")
    return lastDigit