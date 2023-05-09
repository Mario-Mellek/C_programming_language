from cs50 import get_string

answer = get_string("What's your name?\n-> ")
if answer == "Mario":
    print("Owner")
else:
    print("User")

print(f"Hello, {answer}")


number = 2

if number > 5:
    print("Greater than 5")
elif number < 5:
    print("less than 5")
else:
    print("Equal to 5")