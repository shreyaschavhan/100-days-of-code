/*
Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.
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
    int s;
    cin >> s;
    int begin_indx = -1, end_indx = -1, i = 0, j = 0, sum = 0;
    while(j < n && sum + arr[j] <= s){
        sum += arr[j];
        j++;
    }
    if(sum == s){
        cout << i+1 << " " << j << endl;
        return 0;
    }
    while(j < n){
        sum += arr[j];
        while(sum > s){
            sum -= arr[i];
            i++;
        }
        if(sum == s){
            begin_indx = i + 1;
            end_indx = j + 1;
            break;
        }
        j++;
    }
    cout << begin_indx << " " << end_indx << endl;

    return 0;
}
