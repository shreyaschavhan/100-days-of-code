#!/bin/python3

import math
import os
import random
import re
import sys

def gridlandMetro(n, m, k, track):
    track.sort()
    out = n * m
    r0 = t1 = t2 = 0
    for r, c1, c2 in track:
        if r == r0 and c1 - 1 < t2: t2 = max(t2, c2)
        else:
            out -= t2 - t1
            r0, t1, t2 = r, c1 - 1, c2
    return(out - t2 + t1)



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nmk = input().split()

    n = int(nmk[0])

    m = int(nmk[1])

    k = int(nmk[2])

    track = []

    for _ in range(k):
        track.append(list(map(int, input().rstrip().split())))

    result = gridlandMetro(n, m, k, track)

    fptr.write(str(result) + '\n')

    fptr.close()
