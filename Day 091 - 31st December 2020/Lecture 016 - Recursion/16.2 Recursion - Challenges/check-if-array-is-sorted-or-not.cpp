#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool remainArr = sorted(arr+1, n - 1);
    return (arr[0] < arr[1] && remainArr);
}

int main(){
    int arr[] = {1, 3, 7, 5, 6};
    cout << sorted(arr, 5) << endl;
    return 0;
}
