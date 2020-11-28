"""-----------------------------------------------------------------------------
Assignment no.3
Write a python program for sparse matrix realization and operations on it -
Transpose, Fast Transpose and addition of two matrices
-----------------------------------------------------------------------------"""
def accept_matrix_input(m):
    print("Enter the order of the matrix (row, col): ")
    r = int(input("==> Row = "))
    c = int(input("==> column = "))
    print("Enter the elements of the matrix: ")
    for i in range(r):
        a = []
        for j in range(c):
            a.append(int(input()))
        m.append(a)
    print("Matrix accepted successfully.")


def display_matrix(m, r, c):
    print(f"Matrix ({r}, {c}): ")
    for i in range(r):
        print("\t\t", end=' ')
        for j in range(c):
            print("{0: <3}".format(m[i][j]), end=' ')
        print()


def convert_to_sparse_representation(m, r, c, s):
    a = [r, c, 0]
    t = 0
    s.append(a)
    for i in range(r):
        for j in range(c):
            if m[i][j] != 0:
                a = [i, j, m[i][j]]
                s.append(a)
                t += 1
    s[0][2] = t
    print("Converted Successfully to sparse Representation")


def display_sparse_matrix(s, string):
    print(f"{string} sparse Matrix: ")
    print("\t\t Row     Col     Val")
    print("\t\t======================")
    print(f"\t\t| {s[0][0]}        {s[0][1]}       {s[0][2]} | ")
    print("\t\t======================")
    for i in range(1, s[0][2] + 1):
        print(f"\t\t| {s[i][0]}        {s[i][1]}       {s[i][2]} | ")
    print("\t\t======================")


def addition(mat1, mat2):
    result = []
    i = 0
    j = 0
    while i < len(mat1) and j < len(mat2):
        if mat1[i][0] == mat2[j][0] and mat1[i][1] == mat2[j][1]:
            a = mat1[i][2] + mat2[j][2]
            result.append([mat1[i][0].mat1[i][1], a])
            i += 1
            j += 1
        else:
            if mat1[i][0] >= mat2[j][0]:
                result.append([mat2[j][0], mat2[j][1], mat2[j][2]])
                j += 1
            else:
                result.append([mat2[i][0], mat2[i][1], mat2[i][2]])
                i += 1
    result[0][2] -= 1
    print(result)


def fast_transpose_of_sparse_matrix(s, t):
    a = [s[0][1], s[0][0], s[0][2]]
    t.append(a)
    for i in range(s[0][2]):
        t.append([0, 0, 0])

    count = []
    for i in range(s[0][1]):
        count.append(0)
    for i in range(1, (s[0][2] + 1)):
        c = s[i][1]
        count[c] = count[c] + 1

    pos = [1]
    for c in range(1, s[0][1]):
        pos.append(pos[c - 1] + count[c - 1])
    for i in range(1, s[0][2] + 1):
        c = s[i][1]
        k = pos[c]
        t[k][0] = s[i][1]
        t[k][1] = s[i][0]
        t[k][2] = s[i][2]
        pos[c] = pos[c] + 1
    print("Fast Transpose done successfully.")


def main():
    while True:
        print("===> [1]. Sparse Matrix Realization")
        print("===> [2]. Fast Transpose of Sparse Matrix")
        print("===> [3]. Spare Matrix Addition")
        print("===> [4]. Exit")

        ch = int(input("Enter your choice: "))
        if ch == 4:
            print("Exiting Program! Thank You")
            break
        elif ch == 1:
            m = []
            print("Input Normal Sparse Matrix")
            accept_matrix_input(m)
            r = len(m)
            c = len(m[0])
            print("Normal First Sparse ", end=' ')
            display_matrix(m, r, c)
            s1 = []
            convert_to_sparse_representation(m, r, c, s1)
            display_sparse_matrix(s1, "First")
        elif ch == 2:
            display_sparse_matrix(s1, "First")
            s2 = []
            fast_transpose_of_sparse_matrix(s1, s2)
            print("Fast Transpose Resultant")
            display_sparse_matrix(s2, "Fast Transpose Resultant")
        elif ch == 3:
            m1 = []
            m2 = []
            print("Input First Sparse Matrix")
            accept_matrix_input(m1)
            r = len(m1)
            c = len(m1[0])
            print("Normal First Sparse ", end=' ')
            display_matrix(m1, r, c)

            print("Input Second Sparse Matrix")
            accept_matrix_input(m2)
            r = len(m2)
            c = len(m2[0])
            print("Normal First Sparse ", end=' ')
            display_matrix(m2, r, c)

            addition(m1, m2)

        else:
            print("Invalid Input! Try again")


if __name__ == '__main__':
    main()
