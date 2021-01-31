// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N, T;
    cin >> N >> T;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    while(T--){
        int i, j;
        cin >> i >> j;
        int maxSize = INT_MAX;
        for(int a = i; a <= j; a++){
            maxSize = min(arr[a], maxSize);
        }
        cout << maxSize << '\n';
    }
    return 0;
}
