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
        int count = 0;
        sort(N.begin(), N.end());
        do{
            if(stoi(N) % 7 == 0){
                count++;
            }
        }while(next_permutation(N.begin(), N.end()));
        cout << count << '\n';
    }
    return 0;
}
