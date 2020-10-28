// Ques3. Program to add only positive numbers.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    int sum = 0;
    while(n >=0){
        sum = sum + n;
        cout << "Enter a number: ";
        cin >> n;

    }
    cout << "Sum: " << sum << endl;
    return 0;
}
