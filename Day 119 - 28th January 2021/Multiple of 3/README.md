Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most significant and dK-1 the least significant digit). This number is so large that we can't give it to you on the input explicitly; instead, you are only given its starting digits and a way to construct the remainder of the number.

Specifically, you are given d0 and d1; for each i ≥ 2, di is the sum of all preceding (more significant) digits, modulo 10 — more formally, the following formula must hold:
![Image](https://s3.amazonaws.com/codechef_shared/upfiles/latex_ee2df4815ab422dc8e52161db77bfe06.png)

Determine if N is a multiple of 3.

## Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

The first and only line of each test case contains three space-separated integers K, d0 and d1.
## Output
For each test case, print a single line containing the string "YES" (without quotes) if the number N is a multiple of 3 or "NO" (without quotes) otherwise.

## Constraints

1 ≤ T ≤ 1000

2 ≤ K ≤ 1012

1 ≤ d0 ≤ 9

0 ≤ d1 ≤ 9

## Example
### Input:

3

5 3 4

13 8 1

760399384224 5 1

### Output:

NO

YES

YES
## Explanation
Example case 1: The whole number N is 34748, which is not divisible by 3, so the answer is NO.

Example case 2: The whole number N is 8198624862486, which is divisible by 3, so the answer is YES.

```
All submissions for this problem are available.
Author:	6★sidhant007
Tester:	6★kingofnumbers
Date Added:	14-01-2018
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM
```
