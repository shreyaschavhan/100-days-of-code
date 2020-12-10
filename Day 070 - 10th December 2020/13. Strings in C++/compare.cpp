#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "abc";

    cout << s2.compare(s1) << endl;
    // to check if two strings are equal
    // if(s1.compare(s2) == 0){
    if(!s1.compare(s2)){
        cout << "Strings are equal" << endl;
    }
    return 0;
}
