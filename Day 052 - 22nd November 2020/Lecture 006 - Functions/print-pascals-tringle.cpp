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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i ; j++){
            cout << factorial(i)/(factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}
