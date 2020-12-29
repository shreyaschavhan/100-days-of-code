#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1 << pos))!=0);
}

void unique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }
    int temp = xorsum;
    int getbit = 0;
    int position = 0;
    while(getbit != 1){
        getbit = xorsum & 1;
        position++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for(int i = 0; i < n; i++){
        if(getBit(arr[i], position-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (temp ^ newxor) << endl;
}

int main(){
    int arr[] = {1,2,3,1,2,3,4,5};
    unique(arr, 8);
    return 0;
}
