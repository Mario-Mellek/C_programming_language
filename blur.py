from PIL import Image, ImageFilter

before = Image.open("image.jpg")
after = before.filer(ImageFilter.BoxBlur(1))