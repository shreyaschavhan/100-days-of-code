// Problem: Given an array of size n. Output the sum of each  subarray of a givem array.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        int current = 0;
        for(int j = i; j < n; j++){
            current += arr[j];
            cout << current << endl;
        }
    }
    return 0;
}
