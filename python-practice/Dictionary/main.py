from addWord import add
import dictionary as d
import sys

args = sys.argv

if len(args) != 3:
    print(
        'Usage: Enter the file and the word as args\n\
EX: python main.py dict.txt "Hello, World"'
    )
    sys.exit(1)

location = args[1]
input = args[2]
add(input, location)
if d.load(location):
    print(f"The set of words are:\n{d.words}\n")
    d.check(input)
    print("Size of set ->{}".format(d.size()))
