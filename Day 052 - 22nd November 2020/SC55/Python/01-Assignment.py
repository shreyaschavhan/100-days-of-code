"""
-----------------------------------------------------
Assignment 1:
Write a Python program to store marks scored in subject “Fundamental of Data
Structure” by N students in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency

-----------------------------------------------------
"""
# Solution

def read(a, m):
    print("Enter the elements of Array:")
    for i in range(m):
        num = int(input("Enter a number: "))
        a.append(num)


def dis(a, m):
    print("Entered array elements are as follows: ")
    for i in range(m):
        print(a[i])


def min_max(a, m):
    min1 = -1
    max1 = 101
    for i in range(m):
        if a[i] >= 0:
            if a[i] > min1:
                hs = a[i]
                min1 = a[i]

            if a[i] < max1:
                ls = a[i]
                max1 = a[i]
    print("Lowest number is {}".format(ls))
    print("Highest number is {}".format(hs))


def max_count(a, m):
    temp = []
    for i in range(101):
        temp.append(0)
    for i in range(m):
        temp[a[i]] = temp[a[i]] + 1
    print(temp)
    min1 = -1
    for i in range(101):
        if temp[i] > min1:
            # max_c = temp[i]
            min1 = temp[i]
            ans = i
    print("The Highest count is {}".format(ans))


def avg_marks(a, m):
    _sum = 0
    count = 0
    for i in range(m):
        if a[i] >= 0:
            _sum = _sum + a[i]
            count = count + 1
    avg = _sum / m
    print("Average marks is : {} ".format(avg))
    print("Total no. of absent students {}".format(m - count))


def absent(a, m):
    absent_students = m - count
    return absent_students


def main():
    a = []
    m = int(input("Enter the m: "))

    read(a, m)
    dis(a, m)

    min_max(a, m)
    max_count(a, m)
    avg_marks(a, m)


if __name__ == "__main__":
    main()
