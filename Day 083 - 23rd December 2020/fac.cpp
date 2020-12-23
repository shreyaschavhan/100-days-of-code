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
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
