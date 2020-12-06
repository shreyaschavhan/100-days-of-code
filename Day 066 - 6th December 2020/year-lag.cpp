// Link - https://www.hackerrank.com/contests/freshers-challenge-19/challenges/yearlag/problem  

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int countSub = 0;
    while(cin >> n){
        if(n < 40){
            countSub++;
        }
    }
    if(countSub >= 3){
        cout << "YEARLAG" << endl;
    }
    else{
        cout << "CAZZ" << endl;
    }
    return 0;
}
