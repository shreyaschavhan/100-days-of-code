#include <bits/stdc++.h>
using namespace std;

/*
Concept -
for(int i = 0; i < n; i++){
    xorsum = xorsum ^ arr[i];
}

Let's dry run this for arr[] = {1, 2, 3, 4, 1, 2, 3}:
what we can write:
xorsum = 0 ^ 1;
xorsum = 0 ^ 1 ^ 2;
.
.
.
xorsum = 0 ^ 1 ^ 2 ^ 3 ^ 4 ^ 1 ^ 2 ^ 3;
By Commutative Property -
xorsum = 0 ^ (1 ^ 1) ^ (2 ^ 2) ^ (3 ^ 3) ^ 4;
xorsum = 0 ^ 0 ^ 0 ^ 0 ^ 4;
xorsum = 4;
and boom! That's the answer
*/

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main(){
    int arr[7] = {1,2,3,4,1,2,3};
    cout << unique(arr, 7) << endl;

    return 0;
}
