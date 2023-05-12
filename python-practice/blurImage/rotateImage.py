from PIL import Image
import sys

args = sys.argv

if len(args) != 2:
    print("Usage: Enter the degree of rotation as a command line argument")
    sys.exit(1)

before = Image.open("image.jpg")
rotated = before.rotate(int(args[1]))

rotated.save("rotated.jpg")
