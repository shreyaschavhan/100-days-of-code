#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << "0" << endl;
    }
    else if(n == 1){
        cout << "0 1" << endl;
    }
    else{
        int current, a = 0, b = 1, i = 3;
        cout << a << " " << b << " ";
        while(i <= n){
            current = a + b;
            cout << current << " ";
            a = b;
            b = current;
            i++;
        }
        cout << endl;
    }
    return 0;
}
