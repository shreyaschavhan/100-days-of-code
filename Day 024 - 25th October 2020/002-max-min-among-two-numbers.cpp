// 2. Program to find maximum, minimum among two numbers.

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if(num1 > num2){
        cout << "Max: " << num1 << endl;
        cout << "Min: " << num2 << endl;
    }
    else if ( num2 > num1){
        cout << "Max: " << num2 << endl;
        cout << "Min: " << num1 << endl;
    }
    else{
        cout << "Both are equal "<< endl;
    }
    return 0;
}
