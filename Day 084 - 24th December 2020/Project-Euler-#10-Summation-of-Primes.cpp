//  Final Solution -
// Key Takedown = Don't calculate seive of Erothonis for each and every test case, there are 10^6 test Cases
// rather find seive of Erothonis once and use that result several times.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int upper = 1000000;
    int n = 1000000;
    vector<long long> result(upper, 0);
    vector <bool> prime(upper, 0);
    for(long long i = 2; i < n; i++){
        if(prime[i] == 0){
            for(long long j = i*i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    long long sum = 0;
    long long maxSum = 0;
    for(long i = 2; i <= n; i++){
        if(prime[i] == 0){
            sum += i;
            result[i] = sum;
        }
        maxSum = max(maxSum, sum);
        result[i] = maxSum;
    }

    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << result[n] << endl;
    }
    return 0;
}



// Trial 1 : 6 out of 8 passed
// Failed : #6 and #7 test cases
/*
#include <bits/stdc++.h>
using namespace std;


void seive_of_erothonis(int n, long upper){
    vector <bool> prime(upper, 0);
    for(long long i = 2; i < n; i++){
        if(prime[i] == 0){
            for(long long j = i*i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    int sum = 0;
    for(long i = 2; i <= n; i++){
        if(prime[i] == 0){
            sum += i;
        }
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long upper;
        if(n < 6){
            upper = 13;
        }
        else{
            upper = n * (log(n) + log(log(n)));
        }
        seive_of_erothonis(n, upper);
    }
    return 0;
}
*/
