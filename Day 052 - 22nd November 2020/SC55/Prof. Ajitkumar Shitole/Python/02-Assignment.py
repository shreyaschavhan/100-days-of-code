"""
-----------------------------------------------------

Assignment 2:
Write a Python program to compute following computation on matrix:
a) Addition of two matrices
b) Subtraction of two matrices
c) Multiplication of two matrices
d) Transpose of a matrix

-----------------------------------------------------
"""
# Solution


def read(r, c, mat):
    # for user input
    for i in range(r):  # for loop for row entries
        a = []
        for j in range(c):  # for loop for column entries
            a.append(int(input()))
        mat.append(a)


def dis(r, c, mat):     # displaying the matrix according to user input
    #     for printing the matrix
    for i in range(r):
        for j in range(c):
            print(mat[i][j], end=" ")
        print()


def add(r, c, mat1, mat2):
    res = []    # initializing resultant matrix
    a = []
    for i in range(r):
        for j in range(c):
            a.append(mat1[i][j] + mat2[i][j])
        res.append(a)
    print("Resultant addition is as follows: ")
    dis(r, c, res)


def sub(r, c, mat1, mat2):
    res = []    # resultant matrix
    a = []
    for i in range(r):
        for j in range(c):
            a.append(mat1[i][j] - mat2[i][j])
        res.append(a)
    print("Resultant Subtraction is as follows: ")
    dis(r, c, res)


def mul(r1, c1, r2, c2, mat1, mat2):    # time complexity : if square matrix O(n^3)
    res = []
    for i in range(r1):
        a = []
        for j in range(c2):
            sum = 0
            for k in range(c1):
                sum = sum + mat1[i][k] * mat2[k][j]
            a.append(sum)

        res.append(a)
    print("Resultant Multiplication is as follows: ")
    dis(r1, c1, res)


def transpose(r, c, mat):
    res = []
    for i in range(c):
        a = []
        for j in range(r):
            a.append(mat[j][i])
        res.append(a)

    dis(c, r, res)


def main():
    r1 = int(input("Enter the number of rows of first matrix: "))
    c1 = int(input("Enter the number of columns of first matrix: "))
    r2 = int(input("Enter the number of rows of second matrix: "))
    c2 = int(input("Enter the number of rows of second matrix: "))

    # Initialize matrices
    mat1 = []
    mat2 = []

    print("Enter the entries row wise of first matrix: ")
    read(r1, c1, mat1)

    print("Enter the entries row wise of second matrix: ")
    read(r2, c2, mat2)

    print("First matrix is as follows: ")
    dis(r1, c1, mat1)

    print("Second matrix is as follows: ")
    dis(r2, c2, mat2)

    if r1 == r2 and c1 == c2:
        add(r1, c1, mat1, mat2)
    else:
        print("\nAddition is not possible.")

    if r1 == r2 and c1 == c2:
        sub(r1, c1, mat1, mat2)
    else:
        print("\nSubtraction is not possible.")
    if c1 == r2:
        mul(r1, c1, r2, c2, mat1, mat2)
    else:
        print("\nMultiplication is not possible.")

    print("Resultant transpose if first matrix is as follows: ")
    transpose(r1, c1, mat1)
    print("Resultant transpose of second matrix is as follows: ")
    transpose(r2, c2, mat2)


main()
