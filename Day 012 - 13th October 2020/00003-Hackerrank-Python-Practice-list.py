# https://www.hackerrank.com/challenges/python-lists/problem



if __name__ == '__main__':
    N = int(input())
l = []
for _ in range(N):
    o = input().strip().split()

    if o[0] == "insert":
        l.insert(int(o[1]), int(o[2]))
    if o[0] == "print":
        print(l)
    if o[0] == "remove":
        l.remove(int(o[1]))
    if o[0] == "append":
        l.append(int(o[1]))
    if o[0] == "sort":
        l.sort()
    if o[0] == "pop":
        l.pop()
    if o[0] == "reverse":
        l.reverse()
