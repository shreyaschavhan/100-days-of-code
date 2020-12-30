#include <bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n == 0){
        return 0;
    }
    return (n + Sum(n-1));
}

int main(){
    int n;
    cin >> n;
    cout << Sum(n) << endl;
    return 0;
}
