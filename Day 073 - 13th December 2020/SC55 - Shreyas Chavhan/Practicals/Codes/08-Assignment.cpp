/****************************************************************
Assignment No. 8 -
Write a menu driven program that will create a data file containing the list of
telephone numbers in the following form
John 23456
Ahmed 9876
........................
Use a class object to store each set of data, access the file created and implement
the follwoing tasks
I. Determine the telephone number of specified person
II. Determine the name if telephone number is known
III. Update the telephone number, whenever there is a change.
****************************************************************/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class PhoneBook{
public:
    long int telephone;
    string name;
    void input(){
        cout << "<Name> <telephone>" << endl;
        cin >> name >> telephone;
    }
    void output(){
        cout << name << " " << telephone << endl;
    }
};

int main(){
    PhoneBook record;
    long int telephone_number, choice, pos, offset, i;
    string name;
    fstream fp;
    ifstream in;
    ofstream out;
    while(true){
        cout << endl;
        cout << "1. Read a file" << endl;
        cout << "2. Write into a file" << endl;
        cout << "3. Determine Name if telephone number is specified" << endl;
        cout << "4. Determine telephone if name is specified" << endl;
        cout << "5. Update telephone number" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
            case 1:
                in.open("PhoneBook.txt", ios::in | ios::binary);
                cout << "The contents of file are: " << endl;
                while(in.read((char*)&record, sizeof(record))){
                    record.output();
                }
                in.close();
                break;
            case 2:
                record.input();
                char ch;
                cin.get(ch);
                out.open("PhoneBook.txt", ios::out | ios::app | ios::binary);
                out.write((char*)&record, sizeof(record));
                out.close();
                break;
            case 3:
                cout << "Enter the phone number: ";
                cin >> telephone_number;
                fp.open("PhoneBook.txt", ios::ate | ios::in | ios::out | ios::binary);
                fp.seekg(0, ios::beg);
                pos = -1;
                i = 0;
                while(fp.read((char*)&record, sizeof(record))){
                    if(telephone_number == record.telephone){
                        pos = i;
                        break;
                    }
                    i++;
                }
                offset = pos * sizeof(record);
                fp.seekp(offset);
                fp.read((char*)&record, sizeof(record));
                cout << "Name: " << record.name << endl;
                fp.close();
                break;
            case 4:
                cout << "Enter the name: ";
                cin >> name;
                fp.open("PhoneBook.txt", ios::ate | ios::in | ios::out | ios::binary);
                fp.seekg(0, ios::beg);
                pos = -1;
                i = 0;
                while(fp.read((char*)&record, sizeof(record))){
                    if(!name.compare(record.name)){
                        pos = i;
                        break;
                    }
                    i++;
                }
                offset = pos * sizeof(record);
                fp.seekp(offset);
                fp.read((char*)&record, sizeof(record));
                cout << "Telephone Number: " << record.telephone << endl;
                fp.close();

                break;
            case 5:
                cout << "Enter the name: ";
                cin >> name;
                fp.open("PhoneBook.txt", ios::ate | ios::in | ios::out | ios::binary);
                fp.seekg(0, ios::beg);
                pos = -1;
                i = 0;
                while(fp.read((char*)&record, sizeof(record))){
                    if(!name.compare(record.name)){
                        pos = i;
                        break;
                    }
                    i++;
                }
                offset = pos * sizeof(record);
                fp.seekp(offset);
                cout << "Current telephone number: " << record.telephone << endl;
                cout << "Enter new telephone number: ";
                cin >> telephone_number;
                record.telephone = telephone_number;
                fp.write((char*)&record, sizeof(record)) << flush;
                cout << "Record Updated." << endl;
                fp.seekg(0);
                while(fp.read((char*)&record, sizeof(record))){
                    record.output();
                }
                fp.close();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
}
