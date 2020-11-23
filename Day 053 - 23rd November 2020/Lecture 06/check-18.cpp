#include <iostream>
using namespace std;

void check(int age){
    if(age>= 18){
        cout << "Eligible" << endl;
    }
    else{
        cout << "Not Eligible" << endl;
    }
}


int main(){
    int age;
    cin >> age;
    check(age);
    return 0;
}
