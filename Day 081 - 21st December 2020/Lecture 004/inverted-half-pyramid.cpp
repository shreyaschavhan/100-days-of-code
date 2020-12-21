#include <bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cin >> row;
    for(int i = 0; i < row; i++){
        for(int j = row; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
