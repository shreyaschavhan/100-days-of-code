#include <bits/stdc++.h>
using namespace std;

void primeSieve(){
    vector<long> v;
    long prime[100000] = {0};
    for(long i = 2; i <= 10000; i++){
        if(prime[i] == 0){
            for(long j = i*i; j <= 10000; j += i){
                prime[j] = 1;
            }
        }
    }
    for(long i = 2; i <= 100000; i++){
        if(prime[i] == 0){
            v.push_back(i);
        }
    }
    for(long i: v){
        cout << i << endl;
    }
}

int main(){
    primeSieve();
    return 0;
}
