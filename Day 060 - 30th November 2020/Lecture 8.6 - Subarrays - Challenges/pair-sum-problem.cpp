// Problem - check if there exists two elements in an array such that their sum is equal to given k.

#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[],int n, int k){
    int low = 0;
    int high = n - 1;
    while(low < high){
        if(arr[low] + arr[high] == k){
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low] + arr[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int k;
    cin >> k;
    cout << pairSum(arr, n, k) << endl;
    return 0;
}
