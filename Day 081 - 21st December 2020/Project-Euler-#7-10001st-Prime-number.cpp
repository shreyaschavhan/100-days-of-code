//  Final Solution -
// Concept learned - Seive of Erothonis
// Upper bound of a prime number - upper = n * (log(n) + log(log(n)));
// i.e there are 100th prime number is 541 therefore upper = 541


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




/*
Trial 1 -
#include <bits/stdc++.h>
using namespace std;

// void primeSieve(){
//
// }

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        // primeSieve();
        vector<int> result;
        vector <int> prime(100000, 0);
        for(int i = 2; i < 10001; i++){
            if(prime[i] == 0){
                for(int j = i*i; j <= 10001; j += i){
                    prime[j] = 1;
                }
            }
        }
        for(long i = 10001; i < 40001; i++){
            if(prime[i] == 0){
                for(long j = i*i; j <= 40001; j += i){
                    prime[j] = 1;
                }
            }
        }

        // for(long i = 40001; i < 50001; i++){
        //     if(prime[i] == 0){
        //         for(long j = i*i; j <= 50001; j += i){
        //             prime[j] = 1;
        //         }
        //     }
        // }


        for(int i = 2; i <= 100001; i++){
            if(prime[i] == 0){
                result.push_back(i);
            }
        }
        cout << result[n-1] << endl;

    }
    return 0;
}
*/

/*
Trial 2 -
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    bool flag = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return true;
    }
    return false;
}

void prime(int n){
    vector<int> result;
    int num1;
    int num2;
    result.push_back(2);
    result.push_back(3);
    for(int i = 1; i < 100000; i++){
        num1 = 6*i - 1;
        num2 = 6*i + 1;
        if(isprime(num1)){
            result.push_back(num1);
        }
        if(isprime(num2)){
            result.push_back(num2);
        }
    }
    sort(result.begin(), result.end());
    cout << result[n-1] << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        prime(n);
    }
    return 0;
}

*/
/*
trial 3 -
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    bool flag = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return true;
    }
    return false;
}

void prime(int n){
    vector<int> result;
    int num1;
    int num2;
    result.push_back(2);
    result.push_back(3);
    int upper;
    if(n < 6){
        upper = 13;
    }
    else{
        upper = n * (log(n) + log(log(n)));
    }
    for(int i = 1; i < upper; i++){
        num1 = 6*i - 1;
        num2 = 6*i + 1;
        if(isprime(num1)){
            result.push_back(num1);
        }
        if(isprime(num2)){
            result.push_back(num2);
        }
    }
    sort(result.begin(), result.end());
    cout << result[n-1] << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        prime(n);
    }
    return 0;
}

*/
