#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x > y)
        cout << "greater" << endl;
    else
    {
        if( x < y)
            cout << "lesser" << endl;
        else
            cout << "equal" << endl;
    }
    return 0;
}
