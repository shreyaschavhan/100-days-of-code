"""-----------------------------------------------------------------------------
Assignment. 1:
Write a Python program that computes the net amount of a bank account based a
transaction log from console input. The transaction log format is shown as following: D
100 W 200 (Withdrawal is not allowed if balance is going negative. Write functions for
withdraw and deposit) D means deposit while W means withdrawal.
Suppose the following input is supplied to the program:
D 300
D 300
W 200
D 100
Then, the output should be: 500
-----------------------------------------------------------------------------"""


def deposit(net_amount, inp):
    return net_amount + inp


def withdraw(net_amount, inp):
    return net_amount - inp


if __name__ == '__main__':
    n = int(input("Enter the number of Transactions: "))
    net_amount = 0
    while n > 0:
        char, transaction = input().split()
        transaction = int(transaction)
        if char == 'D':
            net_amount = deposit(net_amount, transaction)
        elif char == 'W':
            net_amount = withdraw(net_amount, transaction)
        n -= 1
    print("Output: ", net_amount)
