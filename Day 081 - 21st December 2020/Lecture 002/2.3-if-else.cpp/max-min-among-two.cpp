#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 > n2){
        cout << "Max: " << n1 << endl << "Min: " << n2 << endl;
    }
    else if(n1 < n2){
        cout << "Max: " << n2 << endl << "Min: " << n1 << endl;
    }
    else{
        cout << "both equal"
<< endl;    }
    return 0;
}
