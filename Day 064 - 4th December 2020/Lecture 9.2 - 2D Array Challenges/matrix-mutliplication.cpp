/*
Challenge 2 - Matrix Multiplication
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2], m2[n2][n3], ans[n1][n3];
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            cin >> m1[i][j];
        }
    }
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n3; j++){
            cin >> m2[i][j];
        }
    }
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            ans[i][j] = 0;
        }
    }
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            for(int k = 0; k < n2; i++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    return 0;
}
