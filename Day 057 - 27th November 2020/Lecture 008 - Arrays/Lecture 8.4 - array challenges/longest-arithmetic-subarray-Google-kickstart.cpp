/*
Problem:
An arithmetic array is an array that contains at least two
integers and the difference between consecutive integers are
equal. For example [9, 10], [2, 2, 2], and [9, 7, 5, 3] are
arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th
integer of the array is Ai. She wants to choose a contiguous
arithmetic subarray from her array that has the maximum
length. Please help her to determine the length of the
longest contiguous arithmetic subarray.

Input -
The first line of the input gives the number of test cases,
T. T test cases follow. Each test case begins with a line
containing the integer N. The second line contains N
integers. The i-th integer is Ai.

Output -
For each test case, output one line containing Case #x: y,
where x is the test case number (starting from 1) and y is
the length of the longest contiguous arithmetic subarray.

Constraints -
Time limit: 20 seconds per test set.
Memory Limit: 1 GB
1 <= T <= 100
0 <= Ai <= 10^9
Test set 1:
2 <= N <= 2000
Test set 2:
2 <= N <= 2 x 10^5 for at most 10 test cases.
For the remaining cases, 2 <= N <= 2000.
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
    int mx = 2;
    int common_diffence = arr[1] - arr[0];
    int counter = 2;
    int j = 2;
    while(j < n){
        if(common_diffence == arr[j] - arr[j-1]){
            counter++;
        }
        else{
            common_diffence = arr[j] - arr[j-1];
            counter = 2;
        }
        mx = max(mx, counter);
        j++;
    }
    cout << mx << endl;
    return 0;
}
