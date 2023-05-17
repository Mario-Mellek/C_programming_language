from adv import times2
from generateFunc import mulByNum

print(times2(5))
print('---------------------------')
generated = mulByNum(10)
print(generated(5))
print('---------------------------')

# storing functions in a data structure
listOfFuncs = [times2, generated]

print(listOfFuncs[0](5))
print(listOfFuncs[1](5))