Now that Chef has finished baking and frosting his cupcakes, it's time to package them. Chef has N cupcakes, and needs to decide how many cupcakes to place in each package. Each package must contain the same number of cupcakes. Chef will choose an integer A between 1 and N, inclusive, and place exactly A cupcakes into each package. Chef makes as many packages as possible. Chef then gets to eat the remaining cupcakes. Chef enjoys eating cupcakes very much. Help Chef choose the package size A that will let him eat as many cupcakes as possible.

## Input
Input begins with an integer T, the number of test cases. Each test case consists of a single integer N, the number of cupcakes.

## Output

For each test case, output the package size that will maximize the number of leftover cupcakes. If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.

## Constraints

1 ≤ T ≤ 1000

2 ≤ N ≤ 100000000 (108)
## Sample Input
2

2

5
## Sample Output
2

3

## Explanation
In the first test case, there will be no leftover cupcakes regardless of the size Chef chooses, so he chooses the largest possible size. In the second test case, there will be 2 leftover cupcakes.

```
All submissions for this problem are available.
Author:	6★pieguy
Tester:	6★anton_lunyov
Editorial:	https://discuss.codechef.com/problems/MUFFINS3
Tags:	cakewalk, cook29, math, pieguy, simple
Date Added:	26-11-2012
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYP3, TEXT, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, CAML, ASM, FORT, FS, LISP clisp, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, SCM qobi, ST, NEM
```
