// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

// Hint - https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
//

#include <bits/stdc++.h>
using namespace std;


int find_zeros(int n){
    int count = 0;
    int i = 5;
    while(n/i >= 1){
        count += n/i;
        i *= 5;
    }
    return count;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        cout << find_zeros(N) << '\n';
    }

    return 0;
}




/***************************************************************************
My Brute Force Approach -
Works for N < 10000
****************************************************************************

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        long long n;
        cin >> n;
        vector<long long> arr;
        arr.push_back(1);
        long long arr_size = 1;
        for(long long i = 1; i <= n; i++){
            long long carry = 0;
            for(long long j = 0; j < arr_size; j++){
                long long mul = arr[j] * i + carry;
                arr[j] = mul % 10;
                carry = mul / 10;
            }
            while(carry != 0){
                arr.push_back(carry % 10);
                carry /= 10;
                arr_size++;
            }
        }
        long long count = 0;
        for(auto i : arr){
            if(i != 0){
                break;
            }
            else{
                count++;
            }
        }
        cout << count << '\n';

    }
    return 0;
}
***************************************************************************/
