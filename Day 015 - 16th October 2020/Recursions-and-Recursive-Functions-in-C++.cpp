#include <iostream>
using namespace std;

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int fib(int n){
    if (n < 2){
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main(){
    /*
    Factorial of a number:
    6! =  6 * 5 * 4 * 3 * 2 * 1;
    0! = 1 by defination
    1! = 1 by defination
    n! = n * (n-1)!
    */

    int num;
    cout << "Enter a number: " ;
    cin >> num;
    cout << endl << "The factorial of " << num << " is: " << factorial(num) << endl;
    cout << endl << "The term in fibbonacci sequence at position " << num << " is: " << fib(num) << endl;
    return 0;
}
