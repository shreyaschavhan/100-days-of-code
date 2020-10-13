#include <iostream>
using namespace std;

int main(){
  cout << "What is pointers? ---> The data type which stores the address of other data types! " << endl;
  int a = 3;
  int *b = &a;
  cout << "----------------------------------------------" << endl;
  cout << "& ---> (Address of) operator" << endl;
  cout << "----------------------------------------------" << endl;
  cout << "The address of a is " << &a << endl;
  cout << "The address of a is " << b << endl;
cout << "----------------------------------------------" << endl;
  cout << "* ---> (Value at) Dereference operator" << endl;
  cout << "The value at address b is " << *b << endl;
cout << "----------------------------------------------" << endl;

  cout << endl;
  cout << "----------------------------------------------" << endl;
  cout << "-===Pointer to pointer===-" << endl;
  cout << "----------------------------------------------" << endl;
  int **c = &b;
  cout << "The address of b is " << &b << endl;
  cout << "The address of b is " << c << endl;
  cout << "The value at address c is " << *c << endl;
  cout << "The value at address value_at(value_at(c)) is " << **c << endl;
  return 0;


}
