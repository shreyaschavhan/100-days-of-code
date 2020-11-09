#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    for(int i = row; i >= 1; i-- ){
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
