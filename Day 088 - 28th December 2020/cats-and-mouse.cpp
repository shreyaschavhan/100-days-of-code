#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x, y, z;
        cin >> x >> y >> z;
        if(abs(z - x) < abs(z - y)){
            cout << "Cat A" << endl;
        }
        else if(abs(z - x) > abs(z - y)){
            cout << "Cat B" << endl;
        }
        else{
            cout << "Mouse C" << endl;
        }
    }
    return 0;
}
