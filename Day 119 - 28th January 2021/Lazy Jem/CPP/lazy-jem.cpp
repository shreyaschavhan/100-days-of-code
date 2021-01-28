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
        long long N, B, M;
        cin >> N >> B >> M;
        long long Total_Time = -B;
        while(N > 0){
            if(N % 2 == 0){
                Total_Time += (N/2) * M;
                N -= N/2;
            }
            else{
                Total_Time += (N+1)/2 * M;
                N -= (N+1)/2;
            }
            Total_Time += B;
            M *= 2;
        }
        cout << Total_Time << '\n';
    }
    return 0;
}
