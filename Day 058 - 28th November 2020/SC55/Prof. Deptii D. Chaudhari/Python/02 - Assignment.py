"""-----------------------------------------------------------------------------
Assignment no. 2:
Write a Python program to compute following operations on String:
a) To display word with the longest length
b) To determines the frequency of occurrence of particular character in the string
c) To check whether given string is palindrome or not
d) To display index of first appearance of the substring
e) To count the occurrences of each word in a given string
-----------------------------------------------------------------------------"""


def LongestWordLength(str):
    n = len(str)
    res = 0;
    curr_len = 0
    for i in range(0, n):
        if (str[i] != ' '):
            curr_len += 1
        else:
            res = max(res, curr_len)
            curr_len = 0
    return max(res, curr_len)


def frequency(str):
    all_freq = {}

    for i in b:
        if i in all_freq:
            all_freq[i] += 1
        else:
            all_freq[i] = 1
    return all_freq


def isPalindrome(s):
    return s == s[::-1]


def find_pos(str, word):
    for i in range(len(d) - len(word) + 1):
        if d[i:i + len(word)] == word:
            return i
    return 'Not Found'


def word_count(str):
    counts = dict()
    words = str.split()

    for word in words:
        if word in counts:
            counts[word] += 1
        else:
            counts[word] = 1

    return counts


if __name__ == '__main__':
    print("a) To display word with the longest length: ")
    a = input("Enter a sentence: ")
    print("Longest Lenth: ", LongestWordLength(a))

    print("b) To determines the frequency of occurrence of particular character in the string:  ")
    b = input("Enter a string to check: ")
    print("Count of all characters is :\n", frequency(b))

    print("c) To check whether given string is palindrome or not: ")
    c = input("Enter a string: ")
    ans = isPalindrome(c)
    if ans:
        print("Palindrome")
    else:
        print("Not Palindrome")

    print("d) To display index of first appearance of the substring")
    d = input("Enter a sentence: ")
    word = input("Enter word: ")
    print(find_pos(d, word))

    print("e) To count the occurrences of each word in a given string")
    e = input("Enter a sentence: ")
    print(word_count(e))
