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
        int countFour = 0;
        for(unsigned int i = 0; i < Number.length(); i++){
            if((Number[i] - '0') == 4){
                countFour++;
            }
        }
        cout << countFour << '\n';
    }
    return 0;
}
