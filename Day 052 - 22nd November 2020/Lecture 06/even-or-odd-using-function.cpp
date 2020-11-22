#include <iostream>
using namespace std;

void evenOdd(int n){
    if(n % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    evenOdd(n);
    return 0;
}
