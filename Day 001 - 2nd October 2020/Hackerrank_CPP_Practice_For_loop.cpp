#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    for(int i = a; i <= b; i++){
          int n = i;
          if (n >= 1 && n <= 9){
              if (n == 1){
                  cout << "one" << endl;
              }
              if (n == 2){
                  cout << "two" << endl;
              }
              if (n == 3){
                  cout << "three"<< endl;
              }
              if (n == 4){
                  cout << "four" << endl;
              }
              if (n == 5){
                  cout << "five" << endl;
              }
              if (n == 6){
                  cout << "six" << endl;
              }
              if (n == 7){
                  cout << "seven" << endl;
              }
              if (n == 8){
                  cout << "eight" << endl;
              }
              if (n == 9){
                  cout << "nine" << endl;
              }
          }
          else{
              if (n % 2 == 0){
                cout << "even" << endl;
              }
              else{
                cout << "odd" << endl;
              }
          }
    }
    return 0;
}
