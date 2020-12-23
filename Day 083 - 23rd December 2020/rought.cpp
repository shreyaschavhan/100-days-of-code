#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    cout << pow(n, m) << endl;

    double num;
    int f;
    cin >> num >> f;
    if(num == f){
        cout << "equal";
    }
    else{
        cout << "not equal";
    }
    return 0;
}
