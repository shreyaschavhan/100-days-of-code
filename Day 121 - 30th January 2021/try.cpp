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
        int n, c, m;
        cin >>n >> c>> m;
        int chocolate = n/c;
        int eaten = 0;
        int wrap = 0;
        while(chocolate != 0){
            eaten += chocolate;
            wrap += chocolate;
            chocolate = wrap / m;
            wrap = wrap % m;
        }
        cout << eaten << '\n';
    }
    return 0;
}
