#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    double n1 = double(n);
    double sum = accumulate(arr, arr + n, 0);
    double mean = sum / n1;
    double median;
    sort(arr, arr+n);
    if(n % 2 == 0){
        median = (arr[n/2 - 1] + arr[n/2])/2.0;
    }
    else{
        median = (arr[n/2])/2.0;
    }
    int mode = 0;
    map <int , int> num;
    for(int i : arr){
        num[i]++;
    }
    for(auto it: num){
        if(it.second > num[mode]){
            mode = it.first;
        }
    }
    cout << mean << endl << median << endl << mode << endl;
    return 0;
}
