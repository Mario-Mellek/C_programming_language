## Python Concepts
### A closure is a nested function that references a value from its containing function.

- generateFunc.py: defines a function mulByNum which takes in a single argument n. The function returns another function multi which takes in a single argument val and returns the product of n and val.
<br>
The code then creates a new function generateFunc by calling mulByNum with the argument 5. This means that generateFunc is now a function that multiplies its input by 5. Finally, the code calls generateFunc with the argument 10, which returns the result of multiplying 10 by 5, which is 50.

### storing functions in a data structure

- embed.py: The listOfFuncs variable is assigned a list containing two functions, times2 and generated. The functions can then be accessed and called using indexing, as shown in the last two lines of the code snippet.
<br>
This technique allows for more flexibility and dynamic behavior
