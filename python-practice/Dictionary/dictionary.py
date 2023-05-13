# A set is collection of values that handles duplicates
words = set()


def size():
    return len(words)


def check(word):
    if word in words:
        print(f"The set Contains the word ->{word}")
    else:
        print(f"The set doesn't contain the word ->{word}")


def load(sheet):
    file = open(sheet, "r")

    for line in file:
        words.add(line.rstrip())
    file.close()
    return True
