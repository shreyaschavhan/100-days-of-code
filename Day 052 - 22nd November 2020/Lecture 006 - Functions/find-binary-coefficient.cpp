#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    if(n > 0){
        return n * factorial(n - 1);
    }
}

int main(){
    int n, r;
    cin >> n >> r;
    int nCr = factorial(n)/(factorial(r) * factorial(n - r));
    cout << nCr << endl;
    return 0;
}
