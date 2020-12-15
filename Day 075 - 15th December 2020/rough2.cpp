#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i =0; i<t; i++){
        long b,w;
        cin >> b >> w;
        long bc, wc, z;
        cin >> bc >> wc >> z;
        if (bc > (wc+z))
            cout<< (b+w)*wc + b*z <<endl;
        else if (wc > (bc+z))
            cout << (b+w)*bc + w*z<<endl;
        else
            cout << b*bc + w*wc << endl;
    }
    return 0;
}
