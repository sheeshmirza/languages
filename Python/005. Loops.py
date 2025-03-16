# For Loop
# Syntax:
# for variable in range(start, stop):
# The 'for' loop is used for iterating over a sequence like a range, list, etc.
# 'range(start, stop)' generates a sequence of numbers from start to stop-1.

for i in range(1, 6):
    print(i)  # Prints numbers 1 through 5

# While Loop
# Syntax:
# while condition:
# The 'while' loop continues to execute the code block as long as the condition is true.

i = 1
while i <= 5:
    print(i)    # Prints numbers 1 through 5
    i += 1      # Increment i after each iteration

# List Comprehension (Equivalent to for loop but more compact)
# Syntax:
# [expression for variable in iterable]
# List comprehension is a concise way to create lists. It applies an expression to each item in the iterable.

squares = [x ** 2 for x in range(1, 6)]
print(squares)  # Prints [1, 4, 9, 16, 25]

# Break and Continue
# 'break' is used to exit the loop prematurely.
# 'continue' is used to skip the current iteration and proceed to the next iteration.

for i in range(1, 6):
    if i == 3:
        continue    # Skip when i is 3
    if i == 5:
        break       # Exit loop when i is 5
    print(i)        # Prints numbers 1 and 2 (skips 3 and stops before printing 5)