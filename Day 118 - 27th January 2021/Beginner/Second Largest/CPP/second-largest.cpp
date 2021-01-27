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
        int A, B, C;
        cin >> A >> B >> C;
        int Three[3] = {A, B, C};
        sort(Three, Three+3);
        cout << Three[1] << '\n';
    }
    return 0;
}
