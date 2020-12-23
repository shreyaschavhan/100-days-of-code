#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int facto = 1;
    for(int i = 1; i <= n; i++){
        facto *= i;
    }
    return facto;
}
int main(){
    int n, r;
    cin >> n >> r;
    cout << fact(n)/(fact(r) * fact(n - r)) << endl;

    return 0;
}
