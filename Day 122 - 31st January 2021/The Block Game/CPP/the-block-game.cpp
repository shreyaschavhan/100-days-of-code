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
        string N;
        cin >> N;
        string Dup = N;
        reverse(N.begin(), N.end());
        if(!Dup.compare(N)){
            cout << "wins" << '\n';
        }
        else{
            cout << "loses" << '\n';
        }

    }
    return 0;
}
