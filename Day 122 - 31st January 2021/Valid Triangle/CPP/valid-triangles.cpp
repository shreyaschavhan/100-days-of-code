// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int A, B, C;
        cin >> A >> B >> C;
        if((A+B+C) == 180){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}
