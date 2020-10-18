#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <float> x(n);
    vector <float> w(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int j = 0; j < n; j++){
        cin >> w[j];
    }
    float num = 0;
    float deno = 0.0;
    for(int k = 0; k < n; k++){
        num += x[k] * w[k];
        deno += w[k];
    }
    cout << fixed << setprecision(1) << num/deno << endl;


    return 0;
}
a
