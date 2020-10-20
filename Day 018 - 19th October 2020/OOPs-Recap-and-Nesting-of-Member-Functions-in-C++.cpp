// OOPs classes and objects =
/*
C++ --> initially called as C with classes by stroustroup
class --> extension of structures (in c)
Structures had limitations -
    - members are public
    - no methods
Classes --> Sturctures + more
classes --> can have methods + properties
classes --> can make few members public and few members private
structures in c++ are typedefed
    you can declare objects along with the class declarion like this:
 class Employee{
            // Class definition
        } harry, rohan, lovish;
harry.salary = 8 makes no sense if salary is private
*/

#include <iostream>
#include <string>
using namespace std;

class binary{
private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary :: read(void){
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout << "Invalid binary Format" << endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    chk_bin();
    cout << "Displaying your binary number - " << endl;
    for(int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
    cout << endl;
}

int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}
