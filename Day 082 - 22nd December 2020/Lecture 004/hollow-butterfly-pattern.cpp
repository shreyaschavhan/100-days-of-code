#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j < n - i; j++){
            cout << " ";
        }
        for(; j < n; j++){
            if(j == n - i || j == n - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        int j;
        for(j = 1; j <= i; j++){
            if(j == 1 || j == i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j < n - i; j++){
            cout << " ";
        }
        for(; j < n; j++){
            if(j == n - i || j == n - 1){
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
