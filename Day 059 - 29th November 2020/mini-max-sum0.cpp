#include <bits/stdc++.h>
using namespace std;

int main(){
    long long arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    long long mx = INT_MIN;
    long long mn = 1e18;
    for(int i = 0; i < 5; i++){
        long long sum = 0;
        for(int j = 0; j < 5; j++){
            if(i == j){

            }
            else{
                sum += arr[j];
            }
        }
        cout << sum << endl;
        mx = max(mx, sum);
        mn = min(mn, sum);
    }
    cout << mn << " " << mx;
    return 0;
}
