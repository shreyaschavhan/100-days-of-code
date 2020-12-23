#include <bits/stdc++.h>
using namespace std;

void fib(int n){
    int first = 0;
    int second = 1;
    int next;
    cout << "0 1 ";
    for(int i = 2; i < n; i++){
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}

int main(){
    int n;
    cin >> n;
    fib(n);
    return 0;
}
