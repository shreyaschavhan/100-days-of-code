Alisha has n special cards. Each individual card is either red or blue. Sunil wants to buy them immediately from Alisha. To do this, he needs to play a game with Alisha.

This game takes some number of turns to complete. On a turn, Sunil may do one of two things:
• Collect tokens: Sunil collects 1 red token and 1 blue token by choosing this option (thus, 2 tokens in total per one operation).
• Buy a card: Sunil chooses some cards and spends tokens to purchase them as specified below.

The i-th card requires ri red resources and bi blue resources. Suppose Sunil currently has A red cards and B blue cards. Then, the i-th card will require Sunil to spend max(ri - A, 0) red tokens, and max(bi - B, 0) blue tokens. Note, only tokens disappear, but the cards stay with Sunil forever. Each card can be bought only once.

Given a description of the cards and their costs determine the minimum number of turns Sunil needs to purchase all cards.

___________________________________________________________________________________________________
Input
The first line of input will contain a single integer n (1 ≤ n ≤ 16).

The next n lines of input will contain three tokens ci ,ri and bi .ci will be 'R' or 'B', denoting the color of the card as red or blue. ri will be an integer denoting the amount of red resources required to obtain the card, and bi will be an integer denoting the amount of blue resources required to obtain the card(0 ≤ ri, bi ≤ 107).

___________________________________________________________________________________________________
Output
Output a single integer, denoting the minimum number of turns needed to acquire all the cards.

___________________________________________________________________________________________________
Examples
Input:
3
R 0 1
B 1 0
R 1 1

Output:
4

Input:
3
R 3 0
R 2 0
R 1 0

Output:
6

___________________________________________________________________________________________________
Note

For the first sample, Sunil's four moves are as follows:
1. Collect tokens
2. Buy card 1
3. Buy card 2
4. Buy card 3

Note, at the fourth step, Sunil is able to buy card 3 because Sunil already has one red and one blue card, so we don't need to collect tokens.

For the second sample, one optimal strategy is as follows:
1. Collect tokens
2. Collect tokens
3. Buy card 2
4. Collect tokens
5. Buy card 3
6. Buy card 1

At the fifth step, even though Sunil has a red token, Sunil doesn't actually need to spend it, since Sunil has a red card already.
