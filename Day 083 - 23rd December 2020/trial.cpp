#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int maxProduct = -1;
        for(int a = 1; a <= n/3; a++){
            int b = ((n*n) - (2*a*n))/(2*(n-a));
            int c = n - a - b;
            if((a*a + b*b) == c*c)
                maxProduct = max(maxProduct, a*b*c);
        }
        cout << maxProduct << endl;
    }
    return 0;
}
