// Author - Shreyas Chavhan
// Profile - https://github.com/shreyaschavhan


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        string Number;
        cin >> Number;
        cout << (Number[0] - '0') + (Number[Number.length()-1] - '0') << '\n';
    }
    return 0;
}
