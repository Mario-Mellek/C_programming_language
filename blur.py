from PIL import Image, ImageFilter

before = Image.open("image.jpg")
after = before.filter(ImageFilter.BoxBlur(50))

after.save("out.jpg")