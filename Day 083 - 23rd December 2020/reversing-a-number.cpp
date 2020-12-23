#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // printing reverse
    // while(n > 0){
    //     int rem = n % 10;
    //     cout << rem;
    //     n /= 10;
    // }
    // actually reversing
    int new_num = 0;
    while(n > 0){
        int rem = n % 10;
        new_num = new_num*10 + rem;
        n /= 10;
    }
    cout << endl << new_num;
    return 0;
}
