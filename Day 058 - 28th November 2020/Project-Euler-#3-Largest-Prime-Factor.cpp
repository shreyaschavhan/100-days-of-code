/*
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isprime(long n){
    bool flag = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long i = 2;
        long mx = -1;
        while(i <= n){
            if(n % i == 0){
                if(isprime(i)){
                    mx = max(i, mx);
                }
            }
            i++;
        }
        cout << mx << endl;

    }
    return 0;
}
*/

// Optimized Solution - [Test Case 5 failed]
/*
With a proper algorithm this problem can be solved in 0.000161s, for an input of ten 1000000000000s.
the algorithm will be,
STEP-1: if the given N is even repeatedly divide by 2.
STEP-2: if the N becomes 1 return 2 which is the largest prime factor.
STEP-3: start with i=3, and check if the N is divisible by i. increment i by 2 (because there are no even factors for an odd number..). run the loop till square root of the N. if the N is divisible by i then divide the N by i and run the loop again from i =3. this step will eliminate all the composite numbers.
STEP-4: finally if N is grater 2 then its a prime number. return N. else return i which is the largest prime number.


#include <bits/stdc++.h>
using namespace std;

long primefactor(int n){
    long ans, i = 0;
    while(n % 2 == 0){
        n /= 2;
    }
    if(n == 1){
        ans = 2;
    }
    for(i = 3; i <= sqrt(n); i += 2){
        while(n%i == 0){
            n /= i;
        }
    }
    if(n>2){
        ans = n;
    }
    else{
        ans = i - 2;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long largest = primefactor(n);
        cout << largest << endl;
    }
    return 0;
}
*/

// Final Solution that worked

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long div = 2;

        while(div <= sqrt(n)){
            if(n % div == 0){
                n  /= div;
            }
            else{
                div++;
            }
        }

        cout << n << endl;

    }
    return 0;
}
