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

    // Searching
    int key;
    cin >> key;
    bool flag = 0;
    int i_position;
    int j_position;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key){
                flag = 1;
                i_position = i;
                j_position = j;
                break;
            }
        }
    }
    if(flag)
        cout << "Element Found at: " << i_position << " " << j_position << endl;
    else
        cout << "Element not found "<< endl;
    return 0;
}
