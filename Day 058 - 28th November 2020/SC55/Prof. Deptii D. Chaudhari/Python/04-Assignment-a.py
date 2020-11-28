"""-----------------------------------------------------------------------------
Assignment no. 4. a)
Write a python program to store roll numbers of student in array who attended
training program in random order. Write function for searching whether particular
student attended training program or not, using Linear search and Sentinel search.
-----------------------------------------------------------------------------"""

def display_output(array, num):
    if num == 0:
        print("NO records found in the database.")
    else:
        print("Students Array: ", end=' ')
        for i in range(num):
            print(f"{array[i]}", end=' ')
        print()

def linear_search(array, key):
    for i in range(len(array)):
        if array[i] == key:
            return i
    return -1

def sentinel_search(array, key ):
    i = 0
    while i < len(arr):
        if arr[i] == key:
            return i
        i += 1
    return -1


print("1. Linear Search")
print("2. Sentinel Search")
a = int(input("Enter your choice: "))
if a == 1:
    arr = []
    number = int(input("Enter the total no. of student: "))
    for i in range(number):
        x = int(input(f"Enter the Roll no. of student {i + 1}: "))
        arr.append(x)
    key = int(input("Enter the Roll no. to be searched: "))
    print("=========== Linear Search =============")
    flag = linear_search(arr, key)
    if flag == -1:
        print("Searched Roll no. not found.")
    else:
        print("Searched Roll no. found at location: ", (flag + 1))

elif a == 2:
    arr = []
    number = int(input("Enter the total no. of student: "))
    for i in range(number):
        x = int(input(f"Enter the Roll no. of student {i + 1}: "))
        arr.append(x)
    key = int(input("Enter the Roll no. to be searched: "))
    print("=========== Sentinel Search =============")
    flag = sentinel_search(arr, key)
    if flag == -1:
        print("Searched Roll no. not found.")
    else:
        print("Searched Roll no. found at location: ", (flag + 1))
