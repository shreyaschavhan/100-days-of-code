"""
-----------------------------------------------------

Assignment 3:
Write a Python program to store first year percentage of students in array. Write
function for sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores.

-----------------------------------------------------

"""
# ====================================================================
# concepts learned
# Quick sort is a recursive method [method that calls itself]
# Divide - and - conquer algorithm
# very efficient for large data sets

# Big Oh Analysis -
# Worst case -   O(n^2)
# Average case is - O(nlogn)
# Performance depends on pivot selection
# ====================================================================

def insert(array, marks_of_students):      # taking user inputs
    print("Enter students marks in array: ")
    for i in range(marks_of_students):
        num = float(input(f"Enter Mark{i+1}: "))
        array.append(num)


def display(array, marks_of_students):         # displaying sorted output
    for i in range(marks_of_students):
        print(array[i])
    print()


def selection_sort(array, marks_of_students):
    for i in range(marks_of_students - 1):
        index = i
        for j in range(i + 1, marks_of_students):
            if array[index] > array[j]:
                temp = array[index]
                array[index] = array[j]
                array[j] = temp

    print("============= Selection Sort ===============")
    print("Sorted marks of students: ")
    display(array, marks_of_students)


def bubble_sort(array, marks_of_students):
    for i in range(marks_of_students - 1):
        for j in range(marks_of_students - 1 - i):
            if array[j] > array[j + 1]:
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp

    print("******************* Bubble Sort ***************************")
    print("Sorted marks of students: ")
    display(array, marks_of_students)


a = []      # array
b = []
m = int(input("Enter the number of marks of students we want in the array: "))
n = int(int(input("Enter the number of marks of students we want in the array: ")))

print("Which operation you want to perform?: ")
print("1. Bubble Sort")
print("2. Selection Sort")

insert(a, m)
selection_sort(a, m)
bubble_sort(b, n)
