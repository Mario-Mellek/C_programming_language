def prime(n):
    if n <= 1:
        print("Prime Numbers are greater than 1")
        return
    if n > 1:
        for i in range(2, n):
            if (n % i) == 0:
                print(f"{n} isn't a prime number")
                return
            else:
                print(f"{n} is a prime number")
                return


prime(7)
