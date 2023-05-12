from PIL import Image, ImageFilter
import sys

args = sys.argv

if len(args) != 2:
    print("Usage: Enter the degree of blurring as a command line argument")
    sys.exit(1)

before = Image.open("image.jpg")
after = before.filter(ImageFilter.BoxBlur(int(args[1])))

after.save("blurred.jpg")
