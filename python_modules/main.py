import module
import math
import datetime

print(dir(module))
print(dir(math))
module.prime(2)
print("Built-in math.trunc {} = {}".format(5.2343, math.trunc(5.2343)))
print(dir(datetime))
print(datetime.time())

# from module import prime
# prime(2)

# import module as mod
# mod.prime(2)
