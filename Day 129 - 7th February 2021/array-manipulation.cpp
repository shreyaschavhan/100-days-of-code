// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    long n, q;
    cin >> n >> q;
    vector <long> final(n, 0);
    while(q--){
        int a, b, k;
        cin >> a >> b >> k;
        for(int i = a; i <= b; i++){
            final[i] += k;
        }
    }
    cout << *max_element(final.begin(), final.end());

    return 0;
}
