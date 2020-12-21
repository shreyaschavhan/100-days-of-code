#include <bits/stdc++.h>
using namespace std;


void seive_of_erothonis(int n, long upper){
    vector<long> result;
    vector <bool> prime(upper, 0);
    for(long long i = 2; i < upper; i++){
        if(prime[i] == 0){
            for(long long j = i*i; j <= upper; j += i){
                prime[j] = 1;
            }
        }
    }
    for(long i = 2; i <= upper; i++){
        if(prime[i] == 0){
            result.push_back(i);
        }
    }
    cout << result[n - 1] << endl;
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
