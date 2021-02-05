// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    string s;
    cin >> s;
    int d = 0;
    while(d < N){
        int cake = 0;
        for(int i = 0; i < N; i++){
            if((s[i] - '0')  == 1 && (s[i+d] - '0') == 1){
                cake++;
            }
        }
        cout << cake << " ";
        d++;
    }

    return 0;
}
