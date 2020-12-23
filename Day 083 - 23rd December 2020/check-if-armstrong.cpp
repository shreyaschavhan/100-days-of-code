#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string num = to_string(n);
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        int digit = 1;
        for(unsigned int i = 0; i < num.length(); i++){
            digit *= rem;
        }
        sum += digit;
        n /= 10;
    }
    if(sum == stoi(num)){
        cout << "Armstrong";
    }
    else{
        cout << "Not-Armstrong";
    }
    return 0;
}
