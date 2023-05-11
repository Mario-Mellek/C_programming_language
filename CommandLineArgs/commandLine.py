import sys


print("\nNumber of Args: {}\n".format(len(sys.argv) - 1))

n = len(sys.argv)

for x in range(1, n):
    print("Arg {}= {}".format(x ,sys.argv[x]))