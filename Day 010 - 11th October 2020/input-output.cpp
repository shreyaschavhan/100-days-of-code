#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cout << /* '<<' this operator is called as insertion operator */ "Enter the value of num1: ";
  cin >> /* '>>' this operator is called as Extraction operator */ num1;
  cout << endl;
  cout << /* '<<' this operator is called as insertion operator */ "Enter the value of num2: ";
  cin >> /* '>>' this operator is called as Extraction operator */ num2;
  cout << endl;
  cout << "The sum is : " << num1 + num2;
  return 0;
}
