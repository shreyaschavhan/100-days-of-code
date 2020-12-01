#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    // Taking input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    // Printing Output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
