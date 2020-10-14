/*
Link - https://www.hackerrank.com/challenges/variable-sized-arrays/problem
*/ 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector <vector <int>> a;
    for(int i = 0; i < n; i++){
        vector <int> b;
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int elements;
            cin >> elements;
            b.push_back(elements);
        }
        a.push_back(b);
    }
    for(int l = 0; l < q; l++){
        int p, o;
        cin >> p >> o;
        cout << a[p][o] << endl;
    }
    return 0;
}
