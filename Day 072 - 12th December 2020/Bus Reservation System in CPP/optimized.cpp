#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
using namespace std;

static int count = 0;
class bus{
    char bus_number[10];
    string bus_driver, arrival_time;
    string departure_time, from_where, to_where;
    char seat[10][4][10];
public:
    void new_bus();
    void book_seat();
    void available_buses();
    void display();
    void empty_position(int);
};
bus reservation[10];

void bus :: new_bus(){
    cout << "Enter Bus no.: ";
    cin >> reservation[count].bus_number;
    cout << "Enter Driver's Name: ";
    cin >> reservation[count].bus_driver;
    cout << "Arrival time: ";
    cin >> reservation[count].arrival_time;
    cout << "Departure time: ";
    cin >> reservation[count].departure_time;
    cout << "From: ";
    cin >> reservation[count].from_where;
    cout << "To: ";
    cin >> reservation[count].to_where;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 4; j++){
            strcpy(reservation[count].seat[i][j], "empty");
        }
    }
}
void bus :: book_seat(){
    int seat_number;
    char bus_num[10];
    int row;
book_again:
    cout << "Bus Number: ";
    cin >> bus_num;
    int i;
    for(i = 0; i <= count; i++){
        if(!strcmp(reservation[count].bus_number, bus_num)){
            break;
        }
    }
    while(i <= count){
        cout << "Seat Number: ";
        cin >> seat_number;
        cout << "In which Row: ";
        cin >> row;
        if(seat_number > 40){
            cout << "There are only 40 seats Available" << endl;
        }
        else{
            if(!strcmp(reservation[i].seat[seat_number/4][(seat_number % 4) - 1], "empty")){
                cout << "Enter passenger's Name: ";
                cin >> reservation[i].seat[seat_number/4][(seat_number % 4) - 1];
                break;
            }
            else{
                cout << "The seat number is already reserved" << endl;
            }
        }
    }
    if(i > count){
        cout << "Invalid Bus Number" << endl;
        goto book_again;
    }
}

void bus :: display(){
    int i;
    char bus_num[10];
    cout << "Enter bus number: ";
    cin >> bus_num;
    for(i = 0; i <= count; i++){
        if(!strcmp(reservation[i].bus_number, bus_num)){
            break;
        }
    }
    while (i <= count){
        for(int j = 0; j < 25; j++){
            cout << "- -";
        }
        cout << endl;
        cout << "Bus no. " << setw(20+12) << ":"<< setw(10) << reservation[i].bus_number << endl;
        cout << "Driver " << setw(20+13) <<":"<< setw(10) << reservation[i].bus_driver << endl;
        cout << "Arrival Time " << setw(20+7) <<":"<< setw(10) << reservation[i].arrival_time << endl;
        cout << "Departure Time " << setw(20+5) <<":"<< setw(10) << reservation[i].departure_time << endl;
        cout << "From " << setw(20+15) <<":"<< setw(10) << reservation[i].from_where << endl;
        cout << "To " << setw(20+17) <<":"<< setw(10) << reservation[i].to_where << endl;
        for(int j = 0; j < 25; j++){
            cout << "- -";
        }
        cout << endl;

    reservation[0].empty_position(i);
    int a = 1;
    for(int k = 0; k < 10; k++){
        for(int l = 0; l < 4; l++){
            a++;
            if(strcmp(reservation[i].seat[k][l], "empty") != 0){
                cout << "The seat number " << (a - 1) << " is reserved for " << reservation[i].seat[k][l] << "." << endl;
            }
        }
    }
        break;
    }
    if (i > count){
        cout << "Invalid Bus number.";
    }
}

void bus :: empty_position(int l){
    int s = 0;
    count = 0;
    for(int i = 0; i < 10; i++){
        cout << endl;
        for(int j = 0; j < 4; j++){
            s++;
            if(!strcmp(reservation[l].seat[i][j], "empty")){
                cout.width(5);
                cout.fill(' ');
                cout << s << ".";
                cout.width(10);
                cout.fill(' ');
                cout << reservation[l].seat[i][j];
                count++;
            }
            else{
                cout.width(5);
                cout.fill(' ');
                cout << s << ".";
                cout.width(10);
                cout.fill(' ');
                cout << reservation[l].seat[i][j];
            }
        }
    }
    cout << endl;
    cout << endl;
    cout << "There are " << count << " seats empty in Bus no.: " << reservation[l].bus_number << endl;
}

int main(){
    int choice;
    while(true){
        cout << endl;
        cout << "1. Install New Bus" << endl;
        cout << "2. Reserve a seat" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
            case 1:
                reservation[count].new_bus();
                break;
            case 2:
                reservation[count].book_seat();
                break;
            case 3:
                reservation[0].display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
