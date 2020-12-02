"""
Roll no. SC55 -
Chit no . 10 -
Write a Python program to store roll numbers of student array who attended training
program in sorted order. Write function for searching whether particular student attended training program or not, using Binary search and Fibonacci search
"""


def store(arr, n):
    print("NOTE: Enter sorted data!")
    for i in range(n):
        roll = int(input("Enter Roll no.: "))
        arr.append(roll)


def display(arr, n):
    for i in range(n):
        print(arr[i])


def binary_search(arr, n, key):
    low = 0
    high = n - 1
    for i in range(n):
        mid = int((high + low) / 2)
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            high = mid - 1
        else:
            low = mid + 1
    return -1

def fibonacci_search(arr, n, key):
    fib1 = 0
    fib2 = 1
    fib3 = fib1 + fib2
    while fib3 < n:
        fib1 = fib2
        fib2 = fib3
        fib3 = fib1 + fib2
    offset = -1
    while fib3 > 1:
        i = min(offset + fib1, n - 1)
        if arr[i] == key:
            return i
        elif arr[i] < key:
            fib3 = fib2
            fib2 = fib1
            fib1 = fib3 - fib2
            offset = i
        else:
            fib3 = fib1
            fib2 = fib2 - fib1
            fib1 = fib3 - fib2

    if fib2 and arr[offset+1] == key:
        return offset+1;
    return -1

if __name__ == "__main__":

    arr = []
    n = int(input("Enter the number of students who attended the program: "))
    while True:
        print("1. Store Roll no. ")
        print("2. Display Roll no. ")
        print("3. Search Roll no. ")
        print("4. Exit")
        ch = int(input("Enter your choice: "))
        if ch == 1:
            store(arr, n)
        elif ch == 2:
            display(arr, n)
        elif ch == 3:
            print("1. Binary Search")
            print("2. Fibonacci Search")
            sch = int(input("Enter your choice: "))
            if sch == 1:
                key = int(input("Enter the number to search: "))
                k = binary_search(arr, n, key)
                if k == -1:
                    print("Roll no. not found")
                else:
                    print("Roll no. found at index: ", k)
            elif sch == 2:
                key = int(input("Enter the number to search: "))
                k = fibonacci_search(arr, n, key)
                if k == -1:
                    print("Roll no. not found")
                else:
                    print("Roll no. found at index: ", k)

            else:
                print("Invalid Choice")
        elif ch == 4:
            break
        else:
            print("Invalid Choice")
