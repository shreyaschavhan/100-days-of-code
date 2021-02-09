// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int p;
        cin >> p;
        int i = 0;
        int count;
        while(pow(2, i) <= p && i < 12){
            i++;
        }
        i--;
        count = p / pow(2, i);
        int num = p % int(pow(2, i));
        // cout << num << '\n';
        while(num > 0 && i >= 0){
            // cout << num << '\n';
            i--;
            count += num / pow(2, i);
            num = num % int(pow(2, i));
        }
        cout << count << '\n';
    }
    return 0;
}
