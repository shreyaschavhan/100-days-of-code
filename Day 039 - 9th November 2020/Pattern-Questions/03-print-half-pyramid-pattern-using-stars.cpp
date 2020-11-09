#include <iostream>
using namespace std;

int main(){
    int rows, col;
    cin >> rows >> col;
    for (int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++){
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}
