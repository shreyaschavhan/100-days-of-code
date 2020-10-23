if __name__ == '__main__':
    s = input()

a1, a2, a3, a4, a5 = False, False, False, False, False
for j in s:
    if j.isalnum():
        a1 = True
    if j.isalpha():
        a2 = True
    if j.isdigit():
        a3 = True
    if j.islower():
        a4 = True
    if j.isupper():
        a5 = True

print(a1)
print(a2)
print(a3)
print(a4)
print(a5)
