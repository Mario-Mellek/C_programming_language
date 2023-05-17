# Function assignment
def multBy2(n):
    return n * 2

times2 = multBy2
# print(times2(4))
# print('---------------------------')

# passing a function as an argument
def doMath(func, num):
    return func(num)

# print(doMath(multBy2, 8))
# print('---------------------------')