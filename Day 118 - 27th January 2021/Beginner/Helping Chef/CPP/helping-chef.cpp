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
        int N;
        cin >> N;
        if(N < 10){
            cout << "Thanks for helping Chef!" << '\n';
        }
        else{
            cout << "-1" << '\n';
        }
    }
    return 0;
}
