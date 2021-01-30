// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int S, V, P;
        int maxProfit = 0;
        for(int i = 0; i < N; i++){
            cin >> S >> V >> P;
            maxProfit = max(maxProfit, ((P/(S+1)) * V));
        }
        cout << maxProfit << '\n';
    }
    return 0;
}
