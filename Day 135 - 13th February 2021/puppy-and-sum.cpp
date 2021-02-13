// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int sum(int d, int n){
    while(d--){
        n = n*(n+1)/2;
    }
    return n;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int d, n;
        cin >> d >> n;
        cout << sum(d, n) << '\n';
    }

    return 0;
}
