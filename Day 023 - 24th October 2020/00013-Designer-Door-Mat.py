# Link - https://www.hackerrank.com/challenges/designer-door-mat/problem

inp = input().split()
N = int(inp[0])
M = int(inp[1])
for i in range(1, N, 2):
    print((i * ".|.").center(M, "-"))
print("WELCOME".center(M,"-"))
for i in range(N-2, -1, -2):
    print((i * ".|.").center(M, "-"))
