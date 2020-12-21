#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Max: " << max(c, max(a,b)) << endl;
    cout <<"Min: " <<  min(c, min(a,b)) << endl;
    return 0;
}
