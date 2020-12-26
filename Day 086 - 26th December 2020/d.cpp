#include <bits/stdc++.h>
using namespace std;

// vector<bool> result;
long upper = 10000;
vector <bool> prime(upper, 1);

// vector<long>
void seive_of_erothonis(){
    // vector<long> result;
    for(long long i = 2; i < upper; i++){
        if(prime[i] == 1){
            for(long long j = i*i; j <= upper; j += i){
                prime[j] = 0;
            }
        }
    }
    // for(long i = 2; i <= upper; i++){
    //     if(prime[i] == 0){
    //         result.push_back(i);
    //     }
    // }
    // return result;
}

int count_Divisors(int n){

    int total = 1;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {

            // calculate number of divisor
            // with formula total div =
            // (p1+1) * (p2+1) *.....* (pn+1)
            // where n = (a1^p1)*(a2^p2)....
            // *(an^pn) ai being prime divisor
            // for n and pi are their respective
            // power in factorization
            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}

int find_triangular_number(int n){
    if (n == 1)
        return 3;
    int num = 2;
    int divisor_count = 0;
    int second = 1;
    int first = 1;
    while(divisor_count <= n){
        if(num % 2 == 0){
            first = count_Divisors(num + 1);
            divisor_count = first * second;
        }
        else{
            second = count_Divisors((num+1)/2);
            divisor_count = first * second;
        }
        num++;
    }
    return (num * (num - 1))/2;
}

int main(){
    int t;
    cin >> t;
    seive_of_erothonis();
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        cout << find_triangular_number(n) << endl;
    }
    return 0;
}
