import csv


def main():
    add()
    printCsv()


def add():
    try:
        with open("pBook.csv", "a") as file:
            while True:
                name = input("Enter a name: ")
                number = input("Enter a number: ")
                if name and number.isdigit():
                    break
                elif number.isdigit() != True:
                    print("Invalid Number")
                else:
                    print("No name entry, Try Again")
            writer = csv.writer(file)
            writer.writerow([name, number])
            print("Saved successfully")
    except IOError as e:
        print(f"An error occurred while writing to the file: {e}")


def printCsv():
    with open("pBook.csv", "r") as file:
        reader = csv.reader(file)
        for row in reader:
            print(row)


main()
