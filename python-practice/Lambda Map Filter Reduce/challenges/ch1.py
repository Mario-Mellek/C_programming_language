# -----------PROBLEM-----------------
# Create a function that receives a list and a function
# the function passed will return True or False depending on the value if odd
# the surrounding function will reaturn a list of add numbers

nums = list(range(10))

def wrapper(nums, func):
    newList = []
    for i in nums:
        if func(i):
            newList.append(i)
    return newList



def checker(num):
    if num % 2 == 0:
        return False
    else:
        return True


print(wrapper(nums, checker))