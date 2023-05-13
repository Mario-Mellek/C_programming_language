from PIL import Image
import sys

args = sys.argv


def checkCommand():
    if len(args) != 2:
        print("Usage: Enter the degree of rotation as a command line argument")
        sys.exit(1)

    if not args[1].isdigit():
        print("Error: Expected a number")
        sys.exit(1)

    return True


if checkCommand():
    before = Image.open("image.jpg")
    after = before.rotate(int(args[1]))

    after.save("rotated.jpg")
    print("Rotated image created")
