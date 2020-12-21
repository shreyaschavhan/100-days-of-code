#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;
    long b = 0;
    long long c = 9;
    float d = 0;
    // long float e = 21;
    // long long double f = 32;
    double g = 2;
    // wchar_t h = 'c';
    char i = 'c';
    // string j = 'd';
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    // cout << sizeof(e) << endl;
    // cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;
    cout << sizeof(i) << endl;
//     cout << sizeof(j) << endl;
    for(int i = 0; i < sizeof(long); i++){
        cout << i << " " << endl;
    }
    return 0;
}
