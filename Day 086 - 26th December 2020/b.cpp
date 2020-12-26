#include <bits/stdc++.h>
using namespace std;

int seive_of_erothonis(int n, vector<long> result){
    int number_of_divisors = 1;
    int exponent;
    int remainder = n;
    if(n == 1){
        return 1;
    }
    int i = 0;
    while(true){
        if(result[i] * result[i] > n){
            return number_of_divisors * 2;
        }
        exponent = 0;
        while(remainder % result[i] == 0){
            exponent++;
            remainder /= result[i];
        }
        number_of_divisors = number_of_divisors * (exponent + 1);
        if(remainder == 1){
            break;
        }
        i++;
        // if(remainder == 1){
        //     return number_of_divisors;
        // }

    }
    return number_of_divisors;
}
int main(){
    int t;
    cin >> t;
    long upper = 10000;
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
    vector <long> triangular_number;
    long sum = 0;
    for(int i = 1; i < 5000; i++){
        sum += i;
        triangular_number.push_back(sum);
    }
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        for(long i : triangular_number){
            int count;
            count = seive_of_erothonis(i, result);
            // cout << count << endl;
            if(count > n){
                cout << i << endl;
                break;
            }
        }
        // cout << seive_of_erothonis(n, result) << endl;
    }
    return 0;
}
