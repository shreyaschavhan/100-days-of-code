# Mutated Minions

Gru has not been in the limelight for a long time and is, therefore, planning something particularly nefarious. Frustrated by his minions' incapability which has kept him away from the limelight, he has built a transmogrifier — a machine which mutates minions.

Each minion has an intrinsic characteristic value (similar to our DNA), which is an integer. The transmogrifier adds an integer K to each of the minions' characteristic value.

Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations.

Given the initial characteristic integers of N minions, all of which are then transmogrified, find out how many of them become Wolverine-like.

## Input Format:
The first line contains one integer, T, which is the number of test cases. Each test case is then described in two lines.

The first line contains two integers N and K, as described in the statement.

The next line contains N integers, which denote the initial characteristic values for the minions.

## Output Format:
For each testcase, output one integer in a new line, which is the number of Wolverine-like minions after the transmogrification.

## Constraints:

1 ≤ T ≤ 100

1 ≤ N ≤ 100

1 ≤ K ≤ 100

All initial characteristic values lie between 1 and 105, both inclusive.
## Example
### Input:

1

5 10

2 4 1 35 1

### Output:

1
## Explanation:
After transmogrification, the characteristic values become {12,14,11,45,11}, out of which only 14 is divisible by 7. So only the second minion becomes Wolverine-like.

---
```
All submissions for this problem are available.
Author:	2★arjunarul
Editorial:	https://discuss.codechef.com/problems/CHN15A
Tags:	acmchn15, arjunarul, cakewalk, modulo
Date Added:	26-10-2015
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM
```
