def main(n):
    pyramid(n)


def pyramid(n):
    for i in range(1, n + 1):
        if i == 1 or i == n:
            print("# " * i)
        else:
            print("#", end="")
            print(" " * (i * 2 - 3) + " #")


main(10)