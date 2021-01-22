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

    int p;
    cin >> p;
    int a[p];
    for(int i = 0; i < p; i++){
        cin >> a[i];
    }
    vector<int> arr;
    for(int i = 0; i < p; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){

        }
    }

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    sort(arr, arr+n);
    float Q1 , Q3;
    if(n%2 == 0){
        Q1 = median(arr, n/2);
    }
    else{
        Q1 = median(arr, (n-1)/2);
    }
    int newarr[n/2];
    int j = 0;
    for(int i = (n+1)/2 ; i < n; i++){
        newarr[j] = arr[i];
        j++;
    }
    Q3 = median(newarr, j);
    // cout << Q1 << '\n' << Q2 << '\n' << Q3 << '\n';
    cout << fixed << setprecision(1) << Q3 - Q1 << '\n';



    return 0;
}
