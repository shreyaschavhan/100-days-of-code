/*
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
Constraints
1 <= N,M <= 1,000
Sample Test Case:
Consider the following matrix:
[
 [1, 4, 7, 11, 15],
 [2, 5, 8, 12, 19],
 [3, 6, 9, 16, 22],
 [10, 13, 14, 17, 24],
 [18, 21, 23, 26, 30]
]
Given target = 5, return true.
Given target = 20, return false.

*/

#include "bits/stdc++.h"
using namespace std;
int32_t main() {
    int n, m; cin >> n >> m;
    int target; cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == target)
            found = true;
        }
    }
    if (found)
    cout << "Found";
    else
    cout << "Not Found";
}

// Time Complexity - O(NxM)
