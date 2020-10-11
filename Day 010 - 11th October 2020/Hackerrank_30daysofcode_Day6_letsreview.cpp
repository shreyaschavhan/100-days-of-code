/*
https://www.hackerrank.com/challenges/30-review-loop/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++ ){
        int len = s[i].size();
        for(int j = 0; j < len; j++){
            if (j % 2 == 0){
                cout << s[i].at(j) ;
            }
        }
        cout << " ";
        for(int j = 0; j < len; j++){
            if (j % 2 != 0){
                cout << s[i].at(j) ;
            }
        }
        cout << endl;
    }
    return 0;
}
