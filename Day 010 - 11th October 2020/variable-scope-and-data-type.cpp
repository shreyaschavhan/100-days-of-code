#include <iostream>
using namespace std;

int global = 10; // global variable

void sum(){
  cout << global; // here global variable is used
}
int main(){
  int a = 12;
  float b = 3.52;
  double c = 43.43434343;
  char ch = 'k';
  string st = "Shreyas";
  bool k = true;  // means true = 1 and false = 0
  // all variables above are local variables

  int global = 34; // local variable
  cout << global;
  global = 53;  // local variable
  cout << global;
  cout << a << endl << b << c << ch << st << k << endl;
  sum();
  return 0;
}
