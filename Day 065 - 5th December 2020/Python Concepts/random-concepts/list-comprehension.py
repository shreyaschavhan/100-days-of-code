# Read more - [https://www.w3schools.com/python/python_lists_comprehension.asp]
# List comprehension offers a shorter syntax when you want to create a new list based on the values of an existing list.
#
# Example:
#
# Based on a list of fruits, you want a new list, containing only the fruits with the letter "a" in the name.
#
# Without list comprehension you will have to write a for statement with a conditional test inside

fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []

for x in fruits:
  if "a" in x:
    newlist.append(x)

print(newlist)

# With list comprehension you can do all that with only one line of code:

fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

newlist = [x for x in fruits if "a" in x]

print(newlist)

# syntax -

# newlist = [expression for item in iterable if condition == True]
