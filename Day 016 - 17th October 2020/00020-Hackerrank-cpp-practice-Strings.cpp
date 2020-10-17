// Link - https://www.hackerrank.com/challenges/c-tutorial-strings/problem 



#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s, h;
    cin >> s >> h;
    cout << s.size() << " " << h.size() << endl;
    cout << s + h << endl;
    // Swapping
    char temp = s[0];
    s[0] = h[0];
    h[0] = temp;

    cout << s << " " << h << endl;

    return 0;
}
