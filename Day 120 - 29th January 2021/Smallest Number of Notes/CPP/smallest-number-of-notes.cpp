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
        int Number = 0;
        int Rupee[6] = {100, 50, 10, 5, 2, 1};
        int i = 0;
        while(N){
            Number += N/Rupee[i];
            N = N % Rupee[i];
            i++;
        }
        cout << Number <<'\n';
    }
    return 0;
}
