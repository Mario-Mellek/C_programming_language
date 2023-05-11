import module
import math
import datetime
import random

print(dir(module))
print(dir(math))
module.prime(2)
print("Built-in math.trunc {} = {}".format(5.2343, math.trunc(5.2343)))
print(dir(datetime))
print(datetime.date.today())
print(datetime.datetime.now())
print(datetime.datetime.now().time())

print(\n ------------------ \n)

li = ["Car", "Bike", "Jet", "Boat"]
print(random.choice(li))

# from module import prime
# prime(2)

# import module as mod
# mod.prime(2)
