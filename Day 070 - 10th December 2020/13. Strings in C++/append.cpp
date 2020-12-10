#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "fam";
    string s2 = "ily";
    // if you wanna update s1
    s1.append(s2);
    cout << s1 << endl;
    // other wise do s1 + s2
    return 0;
}
