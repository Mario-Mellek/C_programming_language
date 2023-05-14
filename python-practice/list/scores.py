def main(n):
    scores = []
    getScores(scores, n)
    printScores(scores)
    printAverage(scores)


def getScores(scores, n):
    for i in range(n):
        while True:
            try:
                scores.append(int(input(f"Enter Score {i+1}: ")))
                break
            except ValueError:
                print("Invalid Entry, Try again")


def printScores(scores):
    j = 1
    for i in scores:
        print(f"{j}: ", end="")
        j += 1
        print(i)


def printAverage(scores):
    avg = sum(scores) / len(scores)
    print(f"Average score: %{avg:.2f}")


main(5)
