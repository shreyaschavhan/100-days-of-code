// Note: We declare an array of n+1 as 0 to n-1 indices store the actual string and
// nth character stores ‘\0’ (null character).

#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[100];
    cin >> arr;
    int i = 0;
    while(arr[i] != '\0'){
        cout << arr[i] << endl;
        i++;
    }
    cout << arr; 
    return 0;
}
