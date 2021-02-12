// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int N){
    bool flag = 0;
    if(N == 1){
        return 0;
    }
    for(int i = 2; i <= sqrt(N); i++){
        if(N % i == 0){
            flag = 1;
            break;
        }
    }
    return !flag;
}


int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        if(checkPrime(N)){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }

    }

    return 0;
}
