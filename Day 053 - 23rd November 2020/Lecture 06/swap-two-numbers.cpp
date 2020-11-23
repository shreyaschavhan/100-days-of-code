#include <iostream>
using namespace std;

void swap(int a, int b){
    cout << "Before -" << endl;
    cout << "num1 : " << a << endl;
    cout << "num2 : " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After -" << endl;
    cout << "num1 : " << a << endl;
    cout << "num2 : " << b << endl;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    swap(num1, num2);
    return 0;
}
