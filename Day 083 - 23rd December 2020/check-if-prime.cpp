#include <bits/stdc++.h>
using namespace std;


bool prime(int n){
    bool flag = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}


int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "Not-prime";
        return 0;
    }
    if(prime(n)){
        cout << "Prime"<< endl;
    }
    else{
        cout << "Not-prime" << endl;
    }
    return 0;
}
    
