// 5. Program to check if an alphabet is a vowel or a consonant.

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
        cout << ch << " is a vowel" << endl;
    }
    else{
        cout << ch << " is a consonant" << endl;
    }
    return 0;
}
