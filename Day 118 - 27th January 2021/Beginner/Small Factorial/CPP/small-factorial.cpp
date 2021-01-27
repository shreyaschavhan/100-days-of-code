// Author - Shreyas Chavhan
// Profile - https://github.com/shreyaschavhan
// Tutorial - https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/

#include <bits/stdc++.h>
using namespace std;

// long long factorials(long long n){
//     return (n == 0 || n == 1) ? 1 : (n * factorials(n - 1));
// }

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        long long n;
        cin >> n;
        vector<int> arr;
        arr.push_back(1);
        int arr_size = 1;
        for(int i = 1; i <= n; i++){
            int carry = 0;
            for(int j = 0; j < arr_size; j++){
                int mul = arr[j] * i + carry;
                arr[j] = mul % 10;
                carry = mul / 10;
            }
            while(carry != 0){
                arr.push_back(carry % 10);
                carry /= 10;
                arr_size++;
            }
        }
        reverse(arr.begin(), arr.end());
        for(int i : arr){
            cout << i ;
        }
        cout << '\n';
    }
    return 0;
}
