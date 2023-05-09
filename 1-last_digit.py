#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
lastDigit = abs(number) % 10

if number < 0:
    print("last digit of", number, "is", -lastDigit, end=" ")
if lastDigit > 5:
    
