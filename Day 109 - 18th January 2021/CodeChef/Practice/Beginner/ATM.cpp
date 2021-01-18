/*
Link - https://www.codechef.com/problems/HS08TEST
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    float balance;
    cin >> amount >> balance;
    if(amount % 5 == 0 && amount <= (balance - 0.5)){
        cout << fixed << setprecision(2) << (balance - (amount + 0.50)) << endl;
    }
    else{
        cout << fixed << setprecision(2) << balance << endl;
    }
    return 0;
}
