#include <bits/stdc++.h>
using namespace std;


int equalizeArray(int arr[], int n) {
    int max_equal[100] = {0};
    for(int i = 0; i < n; i++){
        max_equal[arr[i]]++;
    }
    int max_val = *max_element(max_equal, max_equal + 100);
    return (n - max_val);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << equalizeArray(arr, n) << endl;
    return 0;
}
