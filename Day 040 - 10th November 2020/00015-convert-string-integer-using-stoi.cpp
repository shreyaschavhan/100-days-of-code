#include <iostream>
#include <string>
using namespace std;

int main() {
  // 3 string examples to be used for conversion
  string str_example_1 = "100";
  string str_example_2 = "2.256";
  string str_example_3 = "200 Educative";

  // using stoi() on various kinds of inputs
  int int_1 = stoi(str_example_1);
  int int_2 = stoi(str_example_2);
  int int_3 = stoi(str_example_3);

  cout << "int_1 : " << int_1 << endl;
  cout << "int_2 : " << int_2 << endl;
  cout << "int_3 : " << int_3 << endl;
}
