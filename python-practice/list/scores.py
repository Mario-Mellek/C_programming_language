#!/usr/bin/python3
from sys import argv, exit

# Gets the number of subjects and store it in the variable n
if len(argv) != 2 or argv[1].isdigit() != True:
    print("Enter the number of subjects as a commandLine argument")
    exit(1)
else:
    n = int(argv[1])


# main function, the param n is the number of subjects
def main(n):
    scores = []
    getScores(scores, n)
    printScores(scores)
    printAverage(scores)


# Gets each subject score in ints
def getScores(scores, n):
    for i in range(n):
        while True:
            try:
                scores.append(int(input(f"Enter Score {i+1}: ")))
                break
            except ValueError:
                print("Invalid Entry, Try again")


# Prints back the scores
def printScores(scores):
    j = 1
    for i in scores:
        print(f"{j}: ", end="")
        j += 1
        print(i)


# Prints the Average
def printAverage(scores):
    avg = sum(scores) / len(scores)
    print(f"Average score: %{avg:.2f}")


main(n)
