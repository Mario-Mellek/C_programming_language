def add(word, dictionary):
    file = open(dictionary, "a")
    file.write(word + "\n")
    file.close()
