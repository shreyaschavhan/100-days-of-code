#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 0;
    int second = 1;
    cout << "0 1 ";
    int next;
    for(int i = 2; i < n; i++){
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    return 0;
}
