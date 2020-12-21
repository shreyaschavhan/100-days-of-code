#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i < b; i++){
        int j;
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(i == j){
            cout << i << endl;
        }
    }
    return 0;
}
