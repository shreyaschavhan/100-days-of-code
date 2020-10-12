#include <iostream>
using namespace std;

int main(){
  cout << "There are 3 types of loops: " << endl;
  cout << "\t1. for-loop" << endl;
  cout << "\t2. while-loop" << endl;
  cout << "\t3. do-whlie-loop" << endl;

  cout << "----------For Loop------------" << endl;
  for (int i = 0; i < 100; i++){
    cout << i << endl;
  }

  cout << "----------While Loop------------" << endl;
  int i = 0;
  while(i < 100){
    cout << i << endl;
    i++;
  }
  cout << "----------do While Loop------------" << endl;
  int j = 1f;
  do{
  cout << j <<endl;
  j += 1;
}while(j <= 100);

  return 0;
}
