// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int a[7];
    int f[7];
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 7; i++){
        cin >> f[i];
    }
    int ans = 0;
    for(int i = 0; i < 7; i++){
        ans += abs(a[i] - f[i]);
    }
    cout << ans << '\n';
    return 0;
}
