// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

inline int lcm(int a, int b){
    return (abs(a*b)/gcd(a, b));
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << '\n';
    }
    return 0;
}
