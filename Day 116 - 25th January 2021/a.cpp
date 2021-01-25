#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int arr[8][3][3] =
    {
        {
            {8, 1, 6},
            {3, 5, 7},
            {4, 9, 2}
        },
        {
            {6, 1, 8},
            {7, 5, 3},
            {2, 9, 4}
        },
        {
            {4, 9, 2},
            {3, 5, 7},
            {8, 1, 6}
        },
        {
            {2, 9, 4},
            {7, 5, 3},
            {6, 1, 8}
        },
        {
            {8, 3, 4},
            {1, 5, 9},
            {6, 7, 2}
        },
        {
            {4, 3, 8},
            {9, 5, 1},
            {2, 7, 6}
        },
        {
            {6, 7, 2},
            {1, 5, 9},
            {8, 3, 4}
        },
        {
            {2, 7, 6},
            {9, 5, 1},
            {4, 3, 8}
        }
    };
    int inpArr[3][3];
    for(int j = 0; j < 3; j++){
        for(int k = 0; k < 3; k++){
            cin >> inpArr[j][k];
        }
    }
    int minReplacement = INT_MAX;
    for(int i = 0; i < 8; i++){
        int diff = 0;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(arr[i][j][k] != inpArr[j][k]){
                    diff += abs(arr[i][j][k] - inpArr[j][k]);
                }
            }
        }
        minReplacement = min(minReplacement, diff);
    }
    cout << minReplacement << '\n';
    return 0;
}
