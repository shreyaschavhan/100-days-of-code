#include <bits/stdc++.h>
using namespace std;

int main(){
    float num1, num2;
    char op;
    cin >> num1 >> op >> num2;
    switch (op) {
        case '*':
            cout << "Multiplication: " << num1 * num2 << endl;
            break;
        case '+':
            cout << "Addition: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction: " << num1 - num2 << endl;
            break;
        case '/':
            cout << "Division: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
    }
    return 0;
}
