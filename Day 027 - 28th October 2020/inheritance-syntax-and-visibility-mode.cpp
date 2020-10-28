#include <iostream>
using namespace std;

class Employee{
public:
    int id;
    float salary;
    Employee(){}
    Employee(int inpId){
        id = inpId;
        salary = 34.0;
    }
};
/*
derived class syntax:
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/methods/etc...
}
*/

class programmer : public Employee{
public:
    int languageCode;
    programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
