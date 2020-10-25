// Link - https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
    sort(arr.begin(), arr.end());
    for(int j = 0; j < arr.size(); j++){
        cout << arr[j] << " ";
    }
    return 0;
}
