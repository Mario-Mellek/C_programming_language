from PIL import Image, ImageFilter


print(dir(image))

before = Image.open("image.jpg")
after = before.filter(ImageFilter.BoxBlur(20))

after.save("out.jpg")
