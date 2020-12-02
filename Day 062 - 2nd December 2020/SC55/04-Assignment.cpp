/*******************************************************************************
Develop an object oriented program in C++ to create a
database of student information system containing the
following information: Name, Roll number, Class, division,
Date of Birth, Blood group, Contact address, telephone
number, driving license no. etc Construct the database with
suitable member functions for initializing and destroying the
data with constructor, default constructor, Copy constructor,
destructor, static member functions, friend class, this pointer,
inline function.Code and dynamic memory allocation
operators-new and delete.
*******************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class person
{
private:
    char name[40], date_of_birth[15], blood_group[15];
    int h, w;

public:
    static int count;
    friend class personal;
    person()
    {
        char *name = new char[40];
        char *date_of_birth = new char[80];
        char *blood_group = new char[15];
        h = w = 0;
    }
    static void recordcount()
    {
        cout << "Total no of records :" << count << endl;
    }
};

class personal
{
private:
    char add[70], telephone[15], policy_no[10];

public:
    personal()
    {
        strcpy(add, "");
        strcpy(telephone, "");
        strcpy(policy_no, "");
    }
    void getdata(person *obj);
    void displaydata(person *obj);
    friend class person;
};
int person::count = 0;
void personal::getdata(person *obj)
{
    cout << "Enter Name of Person: ";
    cin >> obj -> name;
    cout << "Enter date of birth of person: ";
    cin >> obj -> date_of_birth;
    cout << "Enter blood group of person: ";
    cin >> obj -> blood_group;
    cout << "Enter height and weigth of person: ";
    cin >> obj -> h >> obj -> w;
    cout << "Enter Contact no of person: ";
    cin >> this -> telephone;
    cout << "Enter addreass of person: ";
    cin >> this -> add;
    cout << "Enter the insurance policy no: ";
    cin >> this -> policy_no;
    obj->count++;
}
void personal :: displaydata(person *obj)
{

    cout << obj -> name << "\t"
         << obj -> date_of_birth << "\t\t"
         << obj -> blood_group << "\t"
         << obj -> h << "\t\t"
         << obj -> w << "\t"
         << this -> telephone << "\t"
         << this -> policy_no << "\t"
         << this -> add;
}
int main()
{
    personal *p1[30];
    person *p2[30];
    int n = 0, ch, i;
    do
    {
        cout << "Menu" << endl;
        cout << "1.Information of Person" << endl;
        cout << "2.Display Information" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter The Information: " << endl;
            p1[n] = new personal;
            p2[n] = new person;
            p1[n]->getdata(p2[n]);
            n++;
            person::recordcount();
            break;
        case 2:
            cout << " ";
            cout << endl << "*******************************************************************" << endl;
            cout << "NAME"
                 << "\t"
                 << "DATE OF BIRTH"
                 << "\t"
                 << "BLOOD GROUP"
                 << "\t"
                 << "HEIGHT"
                 << "\t"
                 << "WEIGHT"
                 << "\t"
                 << "TELEPHONE NO"
                 << "\t"
                 << "INSU.POLICYNO"
                 << "\t"
                 << "ADDRESS  ";
            cout << endl;
            for (i = 0; i < n; i++)
            {
                p1[i]->displaydata(p2[i]);
            }
            person::recordcount();
            break;
        }
    } while (ch != 4);
    return 0;
}
