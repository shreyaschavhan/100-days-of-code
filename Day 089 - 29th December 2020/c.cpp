#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void collatz(){
    vector <long long> collatz_seq(5000001, 0);
    int num = 1, n = 2;
    while(num < 5000001){
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
            }
            else{
                n = 3*n + 1;
            }
            collatz_seq[num]++;
            n++;
        }
        num++;
    }
    for(int i : collatz_seq){
        cout << i << endl;
    }
}

int main() {
    collatz();
    return 0;
}
