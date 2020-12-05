# importing string library function
import string

# Function checks if input string
# has lower only ascii letters or not
def check(value):
    for letter in value:

        # If anything other than lower ascii
        # letter is present, then return
        # False, else return True
        if letter not in string.ascii_lowercase:
            return False
    return True

# Driver Code
input1 = "GeeksForGeeks"
print(input1, "--> ",  check(input1))

input2 = "geeks for geeks"
print(input2, "--> ", check(input2))

input3 = "geeksforgeeks"
print(input3, "--> ", check(input3)) 
