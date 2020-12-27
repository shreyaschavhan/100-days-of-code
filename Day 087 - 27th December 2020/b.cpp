#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    for(int i = 0, j = n.size(); i < n.size(), j >= 0; i++, j--){
        cout << n[i] << '+' << n[j] << endl;

    }
    return 0;
}
