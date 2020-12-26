#include <bits/stdc++.h>
using namespace std;

int main(){
    int MaxDivisors = 1000;
    vector <int> smallest_triangular_number;
    smallest_triangular_number.push_back(0); // 0 ==> no divisor
    // for index=1 we have triangle=1
    // for index=2 we have triangle=3
    // for index=3 we have triangle=6
    // ...
    // for index=7 we have triangle=28
    // ...
    int index = 0;
    int triangular_number = 0; // same as (index)(index + 1)/2
    while(smallest_triangular_number.size() < MaxDivisors){
        // next triangular_number
        index++;
        triangular_number += index;
        // performance tweak (5x faster):
        // the "best" numbers with more than 300 divisors end with a zero
        // that's something I cannot prove right now, I just "saw" that debugging
        if (smallest_triangular_number.size() > 300 && triangular_number % 10 != 0)
        continue;

        // find all divisors i where i*j=triangle
        // it's much faster to assume i < j, which means i*i < triangular_number
        // whenever we find i then there is a j, too
        int divisors = 0;
        int i = 1;
        while (i*i < triangular_number){
            // divisible ? yes, we found i and j, that's two divisors
            if (triangular_number % i == 0)
            divisors += 2;
            i++;
        }
        // if i=j then i^2=triangle and we have another divisor
        if (i*i == triangular_number)
        divisors++;
        // fill gaps:
        // e.g. 10 is the smallest number with 4 divisors
        //      28 is the smallest number with 6 divisors
        // there is no number between 10 and 28 with 5 divisors
        // therefore 28 is the smallest number with AT LEAST 5 divisors, too
        while (smallest_triangular_number.size() <= divisors)
            smallest_triangular_number.push_back(triangular_number);
    }

    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        cout << smallest_triangular_number[n + 1] << endl;
    }
    return 0;
}


// Trial - 3 - 6 passed out of 8;
// failed - #6 #7 time exceeded
/*
#include <bits/stdc++.h>
using namespace std;

long upper = 10000;
vector <bool> prime(upper, 1);

void seive_of_erothonis(){
    for(long long i = 2; i < upper; i++){
        if(prime[i] == 1){
            for(long long j = i*i; j <= upper; j += i){
                prime[j] = 0;
            }
        }
    }
}

int count_Divisors(int n){

    int total = 1;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
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

*/

/*
// Trail 2 - 4 passed out of 8
// failed - #4 #5 #6 #7 - Wrong answer
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

*/

// Trial - 1 : 3 passed out of 8
// Failed - #4 #5 #6 #7 - Time limit exceeded.
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <long> triangular_number;
    long sum = 0;
    for(int i = 1; i < 100000; i++){
        sum += i;
        triangular_number.push_back(sum);
    }
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        for(long i : triangular_number){
            int count = 0;
            for(long j = 1; j <= i; j++){
                if(i % j == 0){
                    count++;
                }
            }
            if(count > n){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
*/
