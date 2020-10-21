#include <iostream>
using namespace std;

class Employee{
    int id;
public:
    void setId(void){
        cout << "Enter the iD of Employee: ";
        cin >> id;

    }
    void getId(void){
        cout << "The ID of Employee is : " << id << endl;
        cout << "------------------------" << endl;
    }
};

int main(){
    // Employee shreyas, rutuja, avanti, mau;
    // shreyas.setId();
    // shreyas.getId();
    Employee google[4];
    for (int i = 0; i < 4; i++) {
        google[i].setId();
        google[i].getId();
    }
    return 0;
}
