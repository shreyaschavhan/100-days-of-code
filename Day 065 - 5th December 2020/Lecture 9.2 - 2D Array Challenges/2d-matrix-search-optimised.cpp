// Time Complexity - O(n + m)

/*
Optimised Approach [IMP]
1. Start from the top right element.
2. You are at (r,c)
if(matrix[r][c] == target)
return true
If (matrix[r][c] > target)
    c--
else
    r++;
At (r,c), you can go to (r-1,c) or (r,c-1), depending on the value of matrix[i][j]
and target
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
    int r = 0, c = n - 1;
    while (r < m && c >= 0) {
        if (mat[r][c] == target) {
            found = true;
        }
        mat[r][c] > target ? c-- : r++;
    }
    if (found)
    cout << "Found";
    else
    cout << "Not Found";
}
