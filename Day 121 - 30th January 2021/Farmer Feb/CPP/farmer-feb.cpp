// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool flag = 1;
    if(n <= 1){
        flag = 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            flag = 0;
        }
    }
    return flag;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int x, y;
        cin >> x >> y;
        int sum = x + y;
        int count = 1;
        while(!isPrime(sum+count)){
            count++;
        }
        cout << count << '\n';
    }

    return 0;
}
