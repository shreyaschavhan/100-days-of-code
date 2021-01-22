#include <bits/stdc++.h>
using namespace std;

float median(vector<int>arr, int n){
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

    int size;
    cin >> size;
    int element[size];
    for(int i = 0; i < size; i++){
        cin >> element[i];
    }
    vector<int> finalArray;
    for(int i = 0; i < size; i++){
        int frequency;
        cin >> frequency;
        for(int j = 0; j < frequency; j++){
            finalArray.push_back(element[i]);
        }
    }
    sort(finalArray.begin(), finalArray.end());
    float Q1, Q2;
    int n = finalArray.size();
    if(n%2 == 0){
        Q1 = median(finalArray, n/2);
    }
    else{
        Q1 = median(finalArray, (n-1)/2);
    }
    vector <int> newarr;
    int j = 0;
    for(int i = (n+1)/2 ; i < n; i++){
        newarr.push_back(finalArray[i]);
        j++;
    }
    Q2 = median(newarr, j);
    cout << fixed << setprecision(1) << Q2 - Q1 << '\n';
    return 0;
}
