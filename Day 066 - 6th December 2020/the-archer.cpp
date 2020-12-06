#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int destroyed = 0;
    sort(arr, arr + n);
    for(int i : arr){
        // if(k > 0){
            while(i >= 0){
                k--;
                if(k < 0){
                    break;
                }
                i -= m;
                if(i <= 0){
                    destroyed++;
                }
            }

        // }
    }
    cout << destroyed << endl;
    return 0;
}
