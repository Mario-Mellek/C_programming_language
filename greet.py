from cs50 import get_string

answer = get_string("What's your name?\n-> ")

if answer == "Mario":
    print("Owner")

print("Hello, " + answer)
print(f"Hello, {answer}")
