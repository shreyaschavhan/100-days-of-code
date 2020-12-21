#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int k = i;
        int j;
        for(j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(; j <= n; j++){
            cout << k-- << " ";
        }
        k = 1;
        for(; j < n + i; j++){
            cout << ++k << " ";
        }
        cout << endl;
    }
    return 0;
}
