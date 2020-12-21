#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cin >> num;
    while(num >= 0){
        sum += num;
        cin >> num;
    }
    cout << sum;
    return 0;
}
