#include <iostream>
using namespace std;

int main(){
  cout << "There are two types of header files: " << endl;
  cout << "1. System header files! " << endl;
  cout << "ex. #include <iostream>" << endl;
  cout << "2. User defined header files! " << endl;
  cout << "Ex. #include this.h" << endl;
  cout << "This will produce an error if this.h is not present is current directory."<< endl;
  cout << endl;

  int a = 4 , b = 3;
  cout << "Arithmatic Operators in C++: " << endl;
  cout << "The value of a + b is : " << a + b << endl;
  cout << "The value of a - b is : " << a - b << endl;
  cout << "The value of a * b is : " << a * b << endl;
  cout << "The value of a / b is : " << a / b << endl;
  cout << "The value of a % b is : " << a % b << endl;
  cout << "The value of a++  is : " << a++ << endl;
  cout << "The value of a-- is : " << a-- << endl;
  cout << "The value of ++a is : " << ++a  << endl;
  cout << "The value of --a is : " << --a << endl;
  cout << endl;

  cout << "Assignment operator Operators in C++: " << endl;
  cout << " = is an assignment operator." << endl;
  cout << endl;

  cout << "Comparision Operators in C++: " << endl;
  cout << "The value of a == b is " << (a == b) << endl;
  cout << "The value of a != b is " << (a != b) << endl;
  cout << "The value of a >= b is " << (a >= b) << endl;
  cout << "The value of a <= b is " << (a <= b) << endl;
  cout << "The value of a < b is " << (a < b) << endl;
  cout << "The value of a > b is " << (a > b) << endl;
  cout << endl;

  cout << "Logical Operators in C++: " << endl;
  cout << "The value of logical 'AND' operator ((a == b) && (a < b)) is: " << ((a == b) && (a < b)) << endl;
  cout << "The value of logical 'OR' operator ((a == b) || (a < b)) is: " << ((a == b) || (a < b)) << endl;
  cout << "The value of logical 'NOT' operator (!(a == b)) is: " << (!(a == b)) << endl;
  cout << endl;

  return 0;


}
