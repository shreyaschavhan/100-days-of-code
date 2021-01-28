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
        int Square = 0;
        while(N != 0){
            int num = floor(sqrt(N));
            N -= (num * num);
            Square++;
        }
        cout << Square << '\n';
    }
    return 0;
}
