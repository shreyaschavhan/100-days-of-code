/*
Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 10^6
0 <= Ai <= 10^6
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    int indx[N];
    for(int j = 0; j < N; j++){
        indx[j] = -1;
    }
    int minindx = INT_MAX;
    for(int k = 0; k < n; k++){
        if(indx[arr[k]] != -1){
            minindx = min(minindx, indx[arr[k]]);
        }
        else{
            indx[arr[k]] = k;
        }
    }

    if(minindx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << minindx + 1 << endl;
    }
    return 0;
}
