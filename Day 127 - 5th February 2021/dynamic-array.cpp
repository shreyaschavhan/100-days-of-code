// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector <vector<int>> dynamicArray(n);
    int lastAnswer = 0;
    while(q--){
        int a, x, y;
        cin >> a >> x >> y;
        if(a == 1){
            int idx = ((x ^ lastAnswer) % n);
            dynamicArray[idx].push_back(y);
        }
        if(a == 2){
            int idx = ((x ^ lastAnswer) % n);
            lastAnswer = dynamicArray[idx][y % (dynamicArray[idx].size())];
            cout << lastAnswer << '\n';
        }
    }


    return 0;
}
