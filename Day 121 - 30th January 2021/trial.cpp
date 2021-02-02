// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        int s, p, v;
        int maxProfit=0;
        for ( int i=0; i<n; i++){
            cin >> s>> p>> v;
            s++;
            maxProfit = max(maxProfit, p/s * v);

        }
     cout << maxProfit <<endl;
    }
	return 0;
}
