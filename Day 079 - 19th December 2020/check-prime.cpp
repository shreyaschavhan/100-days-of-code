#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            flag = true;
        }
    }
    if(n == 2){
        flag = 0;
    }
    if(!flag){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not prime " << endl;
    }
    return 0;
}
