#!/usr/bin/python3
import qrcode

while True:
    URL = input("Paste the url Here -> ")
    name = input("Name of the img: ")
    if name.isalpha() and URL:
        break
    else:
        print("Invalid entry")

img = qrcode.make(URL)
img.save(f"{name}.png", "PNG")
