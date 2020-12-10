#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "asdfjdf;aksdfjkjhfkjaahkjahjdkladkjflakjdlajslfkjaldfjalsdkjflakjflakjsddlfakjslfkjsd";
    // before clear
    cout << str << endl;
    // after clear
    str.clear();
    cout << "cleared: " <<str << endl;
    return 0;
}
