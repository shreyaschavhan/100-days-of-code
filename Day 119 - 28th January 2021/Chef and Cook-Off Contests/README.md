# Chef and Cook-Off Contests

Chef wants to prepare a Cook-Off contest with 5 problems chosen from a set of N problems. He has marked the difficulty of each problem within a range identified by one of the following strings: "cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard". According to this page, a Cook-Off contest must have problems of the following difficulties:

exactly one "cakewalk";
exactly one "simple";
exactly one "easy";
one "easy-medium" or one "medium";
one "medium-hard" or one "hard".
Given the information about the N problems, can you advise Chef if it's possible to pick 5 problems and form a valid Cook-Off contest?

## Input
The first line of input contains one integer T denoting the number of test cases.
T test cases follow.
The first line of each test case contains a single integer N.
Then N lines follow; the i-th line contains a single string si, denoting the difficulty of the i-th problem.
Output
For each test case, output "Yes" if it's possible to pick 5 problems and form a valid Cook-Off contest; otherwise, output "No".

## Constraints
* 1 ≤ T ≤ 100000
* 5 ≤ N ≤ 100000
* sum of N in all test cases ≤ 600000
* si can only be one of the following strings:
    * "cakewalk"
    * "simple"
    * "easy"
    * "easy-medium"
    * "medium"
    * "medium-hard"
    * "hard"
### Subtask #1 (11 points):

N = 5
### Subtask #2 (27 points):

5 ≤ N ≤ 15
T ≤ 100
### Subtask #3 (62 points):

original constraints
## Example

### Input:
3

5

easy

medium

medium-hard

simple

cakewalk

7

simple

simple

medium

medium

easy-medium

cakewalk

easy

7

cakewalk

simple

easy

easy-medium

medium

medium-hard

hard

### Output:

Yes

No

Yes

## Explanation
Example case 2: There are neither problems of "medium-hard" level nor "hard" level, so it's impossible to form a Cook-Off contest.

---
```
All submissions for this problem are available.
Author:	7★r_64
Editorial:	https://discuss.codechef.com/problems/C00K0FF
Tags:	cakewalk, ltime52, r_64
Date Added:	22-09-2017
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM
```
