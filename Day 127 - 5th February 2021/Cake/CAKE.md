# Cake

Alice and Bob are locked during Coronavirus. During the lockdown Bob and Alice wants to eat cake. So, they order online for the cake. They ordered N boxes of cake numbered 1 to N. As it was online order so they are cheated by the seller. Each box is either empty or contains cake. Bob wants to eat more cake so he come up with a game. Winner of this game will eat more cake in compare to the loser.

Bob define a distance d, difference of the indices between any pair of boxes. For every value of d from 0 to N−1, Alice has to count distinct pairs of boxes such that the distance between them is d and both the boxes are non-empty(contains cake). Alice wants to win and asks you to help her.

## Input:
First line will contain N, number of boxes.

Second line contains a binary string. The ith character represents the state of ithbox. It is 0 if the box is empty and 1 if the box contains a cake.
## Output:
On a single line print N space separated integers - the answer to the problem.

## Constraints
1≤N≤100000

It is guaranteed that the string consists of 0's and 1's only
## Sample Input:
7

1011011

## Sample Output:
5 2 2 3 1 1 1
## EXPLANATION:
Considering 1-based indexing All index containing 1 is {1, 3, 4, 6, 7}

* Answer for d = 0 is 5 i.e . {(1,1), (3,3), (4,4), (6,6), (7,7)}.
* Answer for d = 1 is 2 i.e . {(3,4), (6,7)}.
* Answer for d = 2 is 2 i.e .{(1,3), (4,6)|.
* Answer for d = 3 is 3 i.e .{(1,4), (3,6), (4,7)}
* Answer for d = 4 is 1 i.e . {(3, 7)}.
* Answer for d = 5 is 1 i.e . {(1,6)}.
* Answer for d = 6 is 1 i.e . {1,7)}.

---

```
All submissions for this problem are available.
Author:	3★honesthacker
Tags:	honesthacker
Date Added:	2-02-2021
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, CPP17, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, R, CAML, rust, ASM, FORT, FS, LISP clisp, SQL, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM, SQLQ
```
