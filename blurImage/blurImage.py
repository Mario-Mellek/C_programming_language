from PIL import Image, ImageFilter


print(dir(Image))

before = Image.open("image.jpg")
after = before.filter(ImageFilter.BoxBlur(20))
after = Image.ROTATE_90

after.save("out.jpg")
