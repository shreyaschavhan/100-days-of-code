/****************************************************************
Assignment No. 9 -
Write a C++ program that creates an output file, writes
information on it, closes the file and open it again as an input
file and read the information from the file.
****************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   fstream file;
   file.open("sample.txt",ios::out);

   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }
   cout<<"File created successfully."<<endl;
   //write text into file
   file<<"ABCD.";
   //closing the file
   file.close();
   //again open file in read mode
   file.open("sample.txt",ios::in);

   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }
   //read untill end of file is not found.
   char ch; //to read single character
   cout<<"File content: ";
   while(!file.eof())
   {
       file>>ch; //read single character from file
       cout<<ch;
   }
   file.close(); //close file

   return 0;
}
