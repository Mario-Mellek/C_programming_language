def prime(n):
    if n <= 1:
        print("Prime Numbers are greater than 1")
        return
    for i in range(2, n):
        if (n % i) == 0:
            print(f"{n} isn't a prime number")
            break
    else:
        print(f"{n} is a prime number")
