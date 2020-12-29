#include <bits/stdc++.h>
using namespace std;

bool isPowerof2(int n){
    return (n && !(n & (n - 1)));
}

int main(){
    int num;
    cin >> num;
    cout << isPowerof2(num) << endl;
    return 0;
}
