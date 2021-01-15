#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = accumulate(arr, arr+n, 0);
    double n1 = double(n);
    double mean = sum/n1;
    double sq_dist = 0;
    for(int i : arr){
        sq_dist += (i - mean) * (i - mean);
    }
    cout <<  setprecision(1) << fixed << sqrt(sq_dist/n1) << endl;
    return 0;
}
