#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long sum = (n*(n + 1))/2;
        long long square = (n*(n+1)*(2*n+1))/6;;
        cout << (sum*sum) - square << endl;
    }
    return 0;
}
