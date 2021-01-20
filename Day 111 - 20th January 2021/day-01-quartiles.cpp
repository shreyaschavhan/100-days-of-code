#include <bits/stdc++.h>
using namespace std;

double median(int arr[], int n){
    float med = 0;
    if(n%2 == 0){
        med = (arr[(n-1)/2] + arr[n/2])/2.0;
    }
    else{
        med = arr[n/2];
    }
    return med;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    float Q1, Q2, Q3;
    if(n%2 == 0){
        Q1 = median(arr, n/2);
    }
    else{
        Q1 = median(arr, (n-1)/2);
    }
    Q2 = median(arr, n);
    int newarr[n/2];
    int j = 0;
    for(int i = (n+1)/2 ; i < n; i++){
        newarr[j] = arr[i];
        j++;
    }
    Q3 = median(newarr, j);
    cout << Q1 << '\n' << Q2 << '\n' << Q3 << '\n';


    return 0;
}
