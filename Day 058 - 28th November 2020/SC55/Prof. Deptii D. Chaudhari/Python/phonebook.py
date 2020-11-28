"""-----------------------------------------------------------------------------
a. Write a python program to store names and mobile numbers of your friens
in sorted order on names. Search your friend form list using binary search
(recursive and non-recursive). Insert friend if not present in phonebook
b. Write a python program to store names and mobile numbers of your friends
in sorted order on names. Search your friend from list using Fibonacci search.
Insert friend if not present in phonebook.
-----------------------------------------------------------------------------"""
def insert_array(arr):
    n = int(input("Enter the total no. of friends: "))
    print("Input friends information in sorted order of names ")
    for i in range(n):
        print("=> Input Details of Friend {0}".format(i + 1))
        name = input("====> Enter the name: ")
        mob = input("====> Enter the mobile number: ")
        x = [name, mob]
        arr.append(x)
    # print("Friends Info accepted successfully")
    return n


def display(arr, n):
    if n == 0:
        print("No Records in the database")
    else:
        print()
        print("++++++++++++++++++++++++++++++++++++++++++++++")
        print()
        print("Friends Information: ")
        for i in range(n):
            print("=> Friend {0}: {1: <10} {2} ".format(i + 1, arr[i][0], arr[i][1]))
        print()


def recursive_binary_search(arr, s, l, X):
    if s <= l:
        mid = int((s + l) / 2)
        if arr[mid][0] == X:
            return mid  # found
        else:
            if X < arr[mid][0]:
                return recursive_binary_search(arr, s, mid - 1, X)
            else:
                return recursive_binary_search(arr, mid + 1, l, X)
    return -1  # not found


def iterative_binary_search(arr, n, X):
    s = 0
    l = n - 1
    while s <= l:
        mid = int((s + l) / 2)
        if arr[mid][0] == X:
            return mid  # found
        else:
            if X < arr[mid][0]:
                l = mid - 1
            else:
                s = mid + 1
    return -1  # not found


def fibonacci_search(arr, n, X):
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
        if arr[i] == X:
            return i
        else:
            if X < arr[i]:
                f3 = f1
                f2 = f2 - f1
                f1 = f3 - f2
            else:
                f3 = f2
                f2 = f1
                f1 = f3 - f2
                offset = i
    if f2 == 1 and (offset + 1) < n and arr[offset + 1] == X:
        return offset + 1
    return -1


def if_not_found(arr, n, name):
    mob = input("Enter the mobile number of the friend: ")
    X = [name, mob]
    arr.append(X)
    j = n - 1
    while j >= 0:
        if arr[j][0] <= name:
            break
        else:
            arr[j + 1] = arr[j]
        j = j - 1
    arr[j + 1] = X
    print("Friend info added in the database")
    display(arr, n + 1)


def Main():
    A = []
    while True:
        print("==============================================")
        print("\t1: Accept & Display friendss info ")
        print("\t2: Recursive Binary Search")
        print("\t3: Iterative Binary Search")
        print("\t4: Fibonacci Search ")
        print("\t5: Exit ")
        ch = int(input("Enter your choice: "))
        if ch == 5:
            print("Program ended!")
            quit()
        elif ch == 1:
            A = []
            n = insert_array(A)
            display(A, n)
        elif ch == 2:
            print("*********** Recursive Binary Search **************")
            X = input("Enter the name of the friend to be searched: ")
            flag = recursive_binary_search(A, 0, n - 1, X)
            if flag == -1:
                print("\tFriend to be searched not found")
                if_not_found(A, n, X)
                n = n + 1
            else:
                print("\tFriend found at location {0}".format(flag + 1))
        elif ch == 3:
            print("*********** Iterative Binary Search **************")
            X = input("Enter the name of the friend to be searched: ")
            flag = iterative_binary_search(A, n, X)
            if flag == -1:
                print("\tFriend to be Searched not found")
                if_not_found(A, n, X)
                n = n + 1
            else:
                print("\tFriend found at location {0}".format(flag + 1))
        elif ch == 4:
            print("*********** Fibonacci Search **************")
            X = input("Enter the name of the friend to be searched: ")
            flag = fibonacci_search(A, n, X)
            if flag == -1:
                print("\tFriend to be Searched not found")
                if_not_found(A, n, X)
                n = n + 1
            else:
                print("\tFriend found at location {0}".format(flag + 1))
        else:
            print("Invalid Input!")


Main()
