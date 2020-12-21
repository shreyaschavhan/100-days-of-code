#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b>> c;
    if(a == b && b == c && a == c){
        cout << "equilateral" << endl;
    }
    else if(a == b || b == c || a == c){
        cout << "isoceles" << endl;
    }
    else{
        cout << "scalane" << endl;
    }
    return 0;
}
