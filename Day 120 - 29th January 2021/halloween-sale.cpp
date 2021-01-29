// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int p, d, m, s;
    cin >> p >> d>> m >> s;
    int game = -1;
    while(s >= 0){
        s -= p;
        p = max(p-d, m);
        game++;
    }
    cout << game << '\n';
    return 0;
}
