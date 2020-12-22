#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    // My logic -
    // for(int i = 1; i <= row; i++){
    //     if(i == 1 || i == row){
    //         for(int j = 0; j < col; j++){
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     else{
    //         cout << "*";
    //         for(int j = 1; j < col-1; j++){
    //             cout << " ";
    //         }
    //         cout << "*" << endl;
    //     }

    // more efficient:
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <=col ; j++){
            if(i == 1 || j == 1 || i == row || j == col){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
