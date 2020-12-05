// Check if palindrome or not
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;
    bool check = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check == true){
        cout << arr << " is palindrome." << endl;
    }
    else
        cout << arr << " is not palindrome." << endl;
    return 0;
}
