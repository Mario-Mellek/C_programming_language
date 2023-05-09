for i in range(1, 10):
    if i <= 5:
        print(f"5{i}")
    elif i >= 6 and i <= 8:
        print(f"from 5 to 8 {i}")
    else:
        print(f"HOW DO YOU READ THIS!!!{i}")

print("-------------------------")

name = "Mario"
print(len(name))

for i in range(len(name)):
    print(f"Here: {i}")

print("-------------------------")

for n in range(2, 10):
    for x in range(2, n):
    print(n, x)
        if n % x == 0:
            print(n, 'equals', x, '*', n//x)
            break
    else:
        # loop fell through without finding a factor
        print(n, 'is a prime number')