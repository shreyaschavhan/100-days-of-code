#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long factorial = 1; // long long - for finding 20 factorial
    for(int i = n; i > 1; i--){
        factorial *= i;
    }
    cout << factorial << endl;
    return 0;
}
