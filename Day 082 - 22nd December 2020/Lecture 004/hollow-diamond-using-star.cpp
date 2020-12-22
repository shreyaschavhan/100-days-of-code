#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int space = (2*n - 1)/2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2 * i - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
        space--;
    }
    space = 0;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2 * i - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
        space++;
    }
    return 0;
}

/*
My solution -
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= n - i; j++){
            cout << " ";
        }
        cout << "*";
        for(; j < n + i - 2; j++){
            cout << " ";
        }
        if(i == 1){
            cout << endl;
            continue;
        }
        cout << '*';
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        int j;
        for(j = 1; j <= n - i; j++){
            cout << " ";
        }
        cout << "*";
        for(; j < n + i - 2; j++){
            cout << " ";
        }
        if(i == 1){
            cout << endl;
            continue;
        }
        cout << '*';
        cout << endl;
    }
    return 0;
}
*/
