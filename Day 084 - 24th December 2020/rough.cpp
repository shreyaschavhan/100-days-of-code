//  Final Solution -
// Concept learned - Seive of Erothonis
// Upper bound of a prime number - upper = n * (log(n) + log(log(n)));
// i.e there are 100th prime number is 541 therefore upper = 541


#include <bits/stdc++.h>
using namespace std;


void seive_of_erothonis(){
    int upper = 1000000;
    int n = 1000000;
    vector<long long> result;
    vector <bool> prime(upper, 0);
    for(long long i = 2; i < n; i++){
        if(prime[i] == 0){
            for(long long j = i*i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    // long long sum = 0;
    for(long i = 2; i <= n; i++){
        if(prime[i] == 0){
            // sum += i;
            result.push_back(i);
        }
    }
    for(int k : result){
        cout << k << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        seive_of_erothonis();
        // long upper;
        // if(n < 6){
        //     upper = 13;
        // }
        // else{
        //     upper = n * (log(n) + log(log(n)));
        // }

    }
    return 0;
}
