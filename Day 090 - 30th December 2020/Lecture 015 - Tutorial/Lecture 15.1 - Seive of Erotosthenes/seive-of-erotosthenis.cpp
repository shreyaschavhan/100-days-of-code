#include <bits/stdc++.h>
using namespace std;

void seive_of_erotosthenes(){
    bool prime[100] = {0};
    cout << endl;
    for(int i = 2; i < 100; i++){
        for(int j = i*i; j < 100; j+=i){
            prime[j] = 1;
        }
    }

    for(int i = 2; i < 100; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
}

int main(){
    seive_of_erotosthenes();
    return 0;
}
