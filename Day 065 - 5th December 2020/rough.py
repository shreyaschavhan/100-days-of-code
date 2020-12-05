import string
alphabets = string.ascii_lowercase
n = int(input())
for i in range(n):
    s = "-".join(alphabets[i:n])
print(s)
