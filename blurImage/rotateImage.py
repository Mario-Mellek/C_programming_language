from PIL import Image

before = Image.open("image.jpg")
rotated = before.rotate(85)

rotated.save("rotated.jpg")