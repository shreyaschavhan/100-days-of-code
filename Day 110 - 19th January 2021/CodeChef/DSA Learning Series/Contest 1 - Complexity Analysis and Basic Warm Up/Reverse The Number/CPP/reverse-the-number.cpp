// Author - [Shreyas Chavhan](https://github.com/shreyaschavhan)

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int newnum = 0;
        while(n > 0){
            int rem = n % 10;
            newnum = (newnum*10) + rem;
            n /= 10;
        }
        cout << newnum << endl;
    }
    return 0;
}
