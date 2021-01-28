**Little Elephant** was fond of inventing new games. After a lot of research, Little Elephant came to know that most of the animals in the forest were showing less interest to play the multi-player games.Little Elephant had started to invent single player games, and succeeded in inventing the new single player game named **COIN FLIP**. In this game the player will use N coins numbered from 1 to N, and all the coins will be facing in "Same direction" (Either **Head** or **Tail**), which will be decided by the player before starting of the game. The player needs to play N rounds.In thek-th round the player will flip the face of the all coins whose number is less than or equal tok. That is, the face of coini will be reversed, from **Head** to **Tail**, or, from **Tail** to **Head**, for i≤k. Elephant needs to guess the total number of coins showing a particular face after playing N rounds. Elephant really becomes quite fond of this game **COIN FLIP** so Elephant plays G times. Please help the Elephant to find out the answer. ### Input: - The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. - The first line of each test contains an integer G, denoting the number of games played by Elephant. Each of the following G lines denotes a single game, and contains 3 space-separated integers I, N, Q, where I denotes the initial state of the coins, N denotes the number of coins and rounds, and Q, which is either 1, or 2 as explained below. Here I=1 means all coins are showing **Head** in the start of the game, and I=2 means all coins are showing **Tail** in the start of the game. Q=1 means Elephant needs to guess the total number of coins showing **Head** in the end of the game, and Q=2 means Elephant needs to guess the total number of coins showing Tail in the end of the game.

### Output:

For each game, output one integer denoting the total number of coins showing the particular face in the end of the game.

### Constraints:

- 1≤T≤10 - 1 ≤ G ≤ 20000
- 1 ≤ N ≤ 109
- 1 ≤ I ≤ 2
- 1 ≤ Q ≤ 2

### Sample Input:
```
1 2 1 5 1 1 5 2
```

### Sample Output:
```
2 3
```
### Explanation:

- In the 1st game in Example, I=1, so initial arrangement of coins are H H H H H, and now Elephant will play 5 rounds and coin faces will be changed as follows

After the 1st Round: T H H H H

After the 2nd Round: H T H H H

After the 3rd Round: T H T H H

After the 4th Round: H T H T H

After the 5th Round: T H T H T

Finally Q=1, so we need to find the total number of coins showing Head, which is 2.

In the 2nd game in Example: This is similar to the 1st game, except Elephant needs to find the total number of coins showing **Tail**. So the Answer is 3. (Please see the final state of the coins in the 1 st game)

---

```

All submissions for this problem are available.
Author:	1★khadarbasha
Tester:	6★laycurse
Date Added:	2-09-2012
Time Limit:	5 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, CPP17, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, R, CAML, rust, ASM, FORT, FS, LISP clisp, SQL, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM

```
