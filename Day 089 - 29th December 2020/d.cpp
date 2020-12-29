#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void collatz(){
    // vector <long> collatz_seq(5000001, 0);
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
    // for(int i : collatz_seq){
    //     cout << i << endl;
    // }
    cout << distance(collatz_seq, max_element(collatz_seq, collatz_seq + 10)) << endl;
    // auto check = max_element(collatz_seq,(collatz_seq + 10));
    // cout << check << endl;
    // cout << *max_element(collatz_seq.begin(), collatz_seq.begin() + 10);
}

int main() {
    collatz();
    return 0;
}
