#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  //  Manipulators in C++
  int a = 3, b = 78, c = 1233;
  cout<<"The value of a without setw is: "<<a<<endl;
  cout<<"The value of b without setw is: "<<b<<endl;
  cout<<"The value of c without setw is: "<<c<<endl;

  cout<<"The value of a is: "<<setw(4)<<a<<endl;
  cout<<"The value of b is: "<<setw(4)<<b<<endl;
  cout<<"The value of c is: "<<setw(4)<<c<<endl;
}
