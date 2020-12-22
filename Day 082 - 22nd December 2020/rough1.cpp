#include <bits/stdc++.h>
using namespace std;

int main(){
    string i = "34234";
    int sum = 0;
    for(int j = 0; j < 5; j++){
        // cout << i[j] << endl;
        sum += i[j] - '0';
    }
    cout << sum;
    return 0;
}
