/*******************************************************************************
Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program
should take two operands from user and performs the operation on those two operands
depending upon the operator entered by user. Use a switch statement to select the operation.
Finally, display the result.
Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
char c;
float n1,n2;
char ch;
do
{
     cout<<"Enter first number, operator, second number::(Ex. 10 + 3): ";
     cin>> n1 >> c >> n2;



switch (c)
{
     case'+':
        cout<<"Answer: " << n1+n2<<"\n";
        break;
     case'-':
        cout<<"Answer: " << n1-n2<<"\n";
        break;
     case'*':
        cout<<"Answer: " <<n1*n2<<"\n";
        break;
     case'/':
        cout<<"Answer: " <<n1/n2<<"\n";
        break;

     default: cout<<"Enter a valid choice";
}
    cout << "Do you want to continue: ";
    cin >> ch;
}while(ch == 'y' || ch == 'Y');
return 0;
}
