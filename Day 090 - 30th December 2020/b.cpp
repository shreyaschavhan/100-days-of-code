#include <bits/stdc++.h>
using namespace std;

int main(){
    long long collatz_seq[50000] = {0};
    int num = 1, n = 2;
    while(num < 50000){
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
            }
            else{
                n = 3*n + 1;
            }
            collatz_seq[num]++;
        }
        num++;
        n = num;
    }
    // for(int i = 0; i < 20; i++){
    //     cout << collatz_seq[i] << endl;
    // }
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        cout << distance(collatz_seq, max_element(collatz_seq, collatz_seq + n)) << endl;
    }
    return 0;
}
