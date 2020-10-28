// Ques1. Program to find sum of natural numbers till n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
