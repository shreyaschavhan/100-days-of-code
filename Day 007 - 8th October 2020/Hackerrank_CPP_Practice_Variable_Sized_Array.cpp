/*---------------------------------------------------------------------------
My Attempt [Wrong]- [According to my own logic]

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a[n], q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        int b[i];
        for(int j = 0; j < q; j++){
            int k;
            cin >> k;
            for(int m = 0; m < k; m++){
                cin >> a[b[m]];
            }
        }
        for(int j = 0; j < q; j++){
            int p[j], o[j];
            cin >> p[j] >> o[j];
            int s = p[j];
            int t = o[j];
            for(const int &t : b[p[j]]){
                cout << b[t] << endl;
            }
        }
    }
    return 0;
}
-------------------------------------------------------------------*/
