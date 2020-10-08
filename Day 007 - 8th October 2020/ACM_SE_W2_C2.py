#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the gridSearch function below.
def gridSearch(G, P):
    lineChecks = 0
    for i in range(len(G[0])-len(P[0])+1):
        for j in range(len(G)-len(P)+1):
            if G[j][i:i+len(P[0])] == P[0]:
                for x in range(1,len(P)):
                    if G[j+x][i:i+len(P[0])] == P[x]:
                        lineChecks +=1
                        if lineChecks == len(P) - 1:
                            return "YES"
                    else:
                        lineChecks = 0
    return "NO"



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        RC = input().split()

        R = int(RC[0])

        C = int(RC[1])

        G = []

        for _ in range(R):
            G_item = input()
            G.append(G_item)

        rc = input().split()

        r = int(rc[0])

        c = int(rc[1])

        P = []

        for _ in range(r):
            P_item = input()
            P.append(P_item)

        result = gridSearch(G, P)

        fptr.write(result + '\n')

    fptr.close()
