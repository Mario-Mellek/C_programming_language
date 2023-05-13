def main(n):
    pyramid(n)


def pyramid(n):
    for i in range(1, n + 1):
        print("# " * i)


main(10)