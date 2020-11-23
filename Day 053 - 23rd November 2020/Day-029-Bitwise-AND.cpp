#include <bits/stdc++.h>
using namespace std;

void calculate_the_maximum(int n, int k) {
    int aand = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(i != j){
                if((i&j) > aand && (i&j) < k){
                    aand = i & j;
                }
            }
        }
    }
    cout << aand << endl;
}

int main() {
    int t;
    int n, k;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        calculate_the_maximum(n, k);
    }

    return 0;
}
