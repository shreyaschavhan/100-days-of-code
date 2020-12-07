#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *b = &a;
    if(&a == b){
        cout << "Equal" << endl;
    }
    cout << b << endl;
    cout << *b << endl;
    return 0;
}
