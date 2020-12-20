#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int count = 0;
    for(long i = num1; i < num2; i++){
        if(i % 15 == 0){
            count++;
        }
    }
    cout << count<< endl;
    return 0;
}
