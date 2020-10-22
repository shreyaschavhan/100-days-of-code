# Link - https://www.hackerrank.com/challenges/find-a-string/problem?h_r=profile

# Concept learned - https://stackoverflow.com/questions/19892825/python-divide-string-into-several-substrings


def count_substring(string, sub_string):
    new = []
    for i in range(len(string)):
        new.append(string[i:i+len(sub_string)])
    # print(new) - Uncomment this and Use this to debug to see What's Happening!
    found = 0
    for k in range(len(new)):
        if new[k] == sub_string:
            found += 1

    return found

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)
