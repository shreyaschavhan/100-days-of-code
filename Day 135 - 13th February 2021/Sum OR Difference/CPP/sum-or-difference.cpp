// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

inline int diff(int n1, int n2){
    return (n1 - n2);
}

inline int sum(int n1, int n2){
    return (n1 + n2);
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2;
    cin >> n1 >> n2;

    if(n1 > n2){
        cout << diff(n1, n2) << '\n';
    }
    else{
        cout << sum(n1, n2) << '\n';
    }
    return 0;
}
