from PIL import Image, ImageFilter

before = Image.open("image.jpg")
after = before.filter(ImageFilter.BoxBlur(20))

after.save("blurred.jpg")
