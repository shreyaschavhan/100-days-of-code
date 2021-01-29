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
        int N, K;
        cin >> N >> K;
        int Wolverine_Like = 0;
        for(int i = 0; i < N; i++){
            int Num;
            cin >> Num;
            if((Num+K) % 7 == 0){
                Wolverine_Like++;
            }
        }
        cout << Wolverine_Like << '\n';
    }
    return 0;
}
