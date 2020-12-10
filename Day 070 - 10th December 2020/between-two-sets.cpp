#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return __gcd(a, b);
}

int lcm(int a[], int n){
    int ans = a[0];
    for(int i = 0; i < n; i++){
        ans = (a[i] * ans)/ gcd(a[i], ans);
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int lcm_a = lcm(a, n);
    int gcd_b = b[1];
    // for(int i : b){
    //     gcd_b = gcd(i, gcd_b);
    // }
    gcd_b = lcm(b, m);
    int count = 0;
    int i = 1;
    int multiple = lcm_a;
    while(multiple < (gcd_b/lcm_a)){
        multiple = lcm_a * i;
        if(gcd_b % multiple == 0){
            count++;
        }
        i++;
    }
    cout << count << endl;

}
