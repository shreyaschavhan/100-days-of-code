"""-----------------------------------------------------------------------------
Assignment no. 4. b)
Write a python program to store roll numbers of student in array who attended
training program in sorted order. Write function for searching whether particular
student attended training program or not, using Binary search and Fibonacci search
-----------------------------------------------------------------------------"""

def take_input(array):
    number = int(input("Enter the total no. of student: "))
    print("Note: Input Sorted data!")
    for i in range(number):  # accepting student's roll no. till the range number
        x = int(input(f"Enter the Roll no. of student {i + 1}: "))
        array.append(x)
    # information accepted successfully
    return number


def display_output(array, num):
    if num == 0:
        print("NO records found in the database.")
    else:
        print("Students Array: ", end=' ')
        for i in range(num):
            print(f"{array[i]}", end=' ')
        print()


def binary_search_recursive(array, low, high, key):
    if low <= high:
        mid = int((low + high) / 2)
        if array[mid] == key:
            return mid  # element found
        else:
            if key < array[mid]:
                return binary_search_recursive(array, low, mid - 1, key)
            else:
                return binary_search_recursive(array, mid + 1, high, key)
    return -1  # not  found


def binary_search_iterative(array, num, key):
    low = 0
    high = num - 1
    while high <= low:
        mid = int((low + high) / 2)
        if array[mid] == key:
            return mid
        else:
            if key < arr[mid]:
                high = mid - 1
            else:
                low = mid + 1
    return -1  # not found


def fibonacci_search(arr, n, key):
    f1 = 0
    f2 = 1
    f3 = f1 + f2
    offset = -1
    while f3 < n:
        f1 = f2
        f2 = f3
        f3 = f1 + f2
    while f3 > 1:
        i = min(offset + f1, n - 1)
        if arr[i] == key:
            return i
        else:
            if key < arr[i]:
                f3 = f1
                f2 = f2 - f1
                f1 = f3 - f2
            else:
                f3 = f2
                f2 = f1
                f1 = f3 - f2
                offset = i
    if f2 == 1 and (offset + 1) < n and arr[offset + 1] == key:
        return offset + 1
    return -1


# main program


print("""
1. Recursive Binary search.
2. Iterative Binary search.
3. Fibonacci Search.
note: press any other no. exit""")
print()

a = int(input("Which operation you want to perform: "))

if a == 1:
    arr = []
    n = take_input(arr)
    key = int(input("Enter the Roll no. to be searched: "))
    print("=========== Using Binary Recursive Search =============")
    flag = binary_search_recursive(arr, 0, n - 1, key)
    if flag == -1:
        print("Searched Roll no. not found.")
        # print("Searched Roll no. found at location: ", (flag + 1))
    else:
        # print("Searched Roll no. not found.")
        print("Searched Roll no. found at location: ", (flag + 1))
elif a == 2:
    arr = []
    n = take_input(arr)
    key = int(input("Enter the Roll no. to be searched: "))
    print("=========== Using Binary Iterative Search =============")
    flag = binary_search_iterative(arr, n, key)
    if flag == -1:
        print("Searched Roll no. not found.")
    else:
        print("Searched Roll no. found at location: ", (flag + 1))

elif a == 3:
    arr = []
    n = take_input(arr)
    display_output(arr, n)
    key = int(input('enter the number to be searched: '))
    print("=========== Using Fibonacci Search =============")
    flag = fibonacci_search(arr, n, key)
    if flag == -1:
        print('Roll Number not found')
    else:
        print(f"Roll Number found at location {(flag + 1)}")
