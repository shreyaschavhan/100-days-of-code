# Link - https://www.hackerrank.com/challenges/swap-case/problem



def swap_case(s):
    output = ""
    for i in s:
        if (i.isupper()) == True:
            output += i.lower()
        elif (i.islower()) == True:
            output += i.upper()
        elif (i.isspace()) == True:
            output += i
        # elif (i == '"') == True:
        #     output += i
        # elif (i.isdigit()) == True:
        #     output += i;
        # elif (i == '.') == True:
        #     output += i
        else:
            output += i
    return output


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
