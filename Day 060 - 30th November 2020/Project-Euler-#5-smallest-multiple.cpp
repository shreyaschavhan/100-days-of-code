#include <bits/stdc++.h>

using namespace std;

long smallest_multiple(int n, long num){
    for(int i = 1; i <= n; i++){
        if(num % i != 0){
            while(num % i != 0){
                num++;
                num = smallest_multiple(n, num);
            }
        }
    }
    return num;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long num = 2;
        long int ans = smallest_multiple(n, num);
        cout << ans << endl;
    }
    return 0;
}
