#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    int m = 2;
    int carry = 0;
    for(int j = 0; j < m; j++){
        int mul = v[j] * 37 + carry;
        v[j] = mul % 10;
        carry = mul / 10;
    }
    while(carry != 0){
        v.push_back(carry % 10);
        carry /= 10;
        m++;
    }
    reverse(v.begin(), v.end());
    for(int i : v){
        cout << i ;
    }
    return 0;
}
