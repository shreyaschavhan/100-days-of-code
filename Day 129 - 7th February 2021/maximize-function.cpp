// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){

    long T;
    cin >> T;
    while(T--){
        long N;
        cin >> N;
        long minValue = INT_MAX;
        long maxValue = INT_MIN;
        for(int i = 0; i < N; i++){
            long A;
            cin >> A;
            minValue = min(minValue, A);
            maxValue = max(maxValue, A);
        }
        cout << 2 * (maxValue - minValue) << '\n';
    }
    return 0;
}
