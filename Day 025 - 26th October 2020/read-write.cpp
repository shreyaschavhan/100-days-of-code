#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char data[100];
   ofstream write;
   write.open("afile.dat");
   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   write << data << endl;
   ifstream read;
   read.open("afile.dat");
   cout << "Reading from the file" << endl;
   read >> data;
   cout << data << endl;
   read.close();

   return 0;
}
