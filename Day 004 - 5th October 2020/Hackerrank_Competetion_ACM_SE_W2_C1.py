alphabets = 26


def valid(str):
    freq = [0]*alphabets
    for i in range(len(str)):
        freq[ord(str[i])-ord('a')] += 1
    freq1 = 0
    count1 = 0
    for i in range(alphabets):

        if (freq[i] != 0):

            freq1 = freq[i]
            count1 = 1
            break

    freq2 = 0
    count2 = 0
    for j in range(i+1,alphabets):
        if (freq[j] != 0):
            if (freq[j] == freq1):
                count1 += 1
            else:
                count2 += 1
                freq2 = freq[j]
                break

    for k in range(j+1,alphabets):
        if (freq[k] != 0):
            if (freq[k] == freq1):
                count1 += 1
            if (freq[k] == freq2):
                count2 += 1
            else:
                return False
        if (count1 > 1 and count2 > 1):
            return False
    return True

if __name__ == "__main__":
    str = input()

    if (valid(str)):
        print("Yes")
    else:
        print("No")
