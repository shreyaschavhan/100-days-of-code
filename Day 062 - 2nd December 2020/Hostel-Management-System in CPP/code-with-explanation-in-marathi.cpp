#include <bits/stdc++.h> // Included all standard libraries
// but actually used -
// <string.h> / <iostream>
// We can replace that include bits/stdc++ with include iostream and include string.h
using namespace std;

string name_save[10][3]; // declared name_save [two D array] to keep track of the people's name
/*

Example -
arr[3][3] -
shreyas sonal saurabh
paras saket atharva
shreeyash rutuja avanti

*/
class Node{
public:
    // - Initializing data
    int room_capacity = 1;
    int fill_room = 0;
    char name[3][10];
    // Nodes - // next and previous pointer use karun doubly linked list cha skeleton taiyar kela
    Node *next;
    Node *previous;
};
// Apan Struct pan use karu shakto ithe instead of class Node
// but class gives more flexibility and also struct he c language cha concept ahe

class hostel{
    Node *head[3];
    Node *created_node;

/*
Pratek floor sathi ek head pointer initialize kela
For Example -
Floor 1            Floor 2             Floor 3
head[0] node       head[1] node       head[2] node

and ek pointer create kela NOde class cha to keep pointing towards created nodes
*/
public:
    hostel()
    {
        for (int i = 0; i < 3; i++)
            head[i] = NULL;
    }
    // hostel class cha default constructor declare kela and tya madhe saglya head nodes la NULL ni initialize kela
    // sagle functions hostel che
    void create();
    void book(int);
    void cancel(int);
    void display();
    void search(string);

};

void hostel :: create(){
    for (int i = 0; i < 3; i++) // iteration - no. of floors
    {
        for (int j = 0; j < 9; j++) // iteration - no. of rooms
        {
            Node *newnode = new Node; // new node create kela dynamic memory i.e heap madhe
            newnode->next = NULL;
            newnode->previous = NULL; //next and previous la null
            if (head[i] == NULL) // head null asel tar
            {
                head[i] = newnode; // new node la link karnar head node
                newnode -> room_capacity = 1; // and tya madla sarva data 1 ni initialize kela
            }
        /*
        For example -
        Floor 1            Floor 2             Floor 3
        head[0] = 1       head[1] = 1       head[2] = 1
        jar newnode -> room_capacity = 2 kela tar sarva values 2 ne initialize hotil
        display karun bagha program run karun
        */
            else
            {
                Node *created_node = head[i]; // else head node la point karun start karnar
                while (created_node -> next != NULL) // and jevha paryanta toh pointer Null hot nahi
                {
                    created_node = created_node -> next; // tevha paryanta tya pointer la pude dhakalnar
                }
                // similarly if  vala logic varcha
                if (j == 3 || j == 5 || j == 7 || j == 8)
                {
                    created_node -> room_capacity = 3;
                }
                if (j == 2 || j == 4 || j == 6)
                {
                    created_node -> room_capacity = 2;
                }
                created_node -> next = newnode; // next la newnode shi link kela
                newnode -> previous = created_node; // and preious la created_node la

                /*
                    Example -
                                            -->
                    [prev][created][next]           [prev][newnode][next]
                                            <--
                */
            }
        }
    }
}

void hostel :: book(int number_of_people){
    int floor, room;
    cout << "Enter the floor number: ";
    cin >> floor;
    if (floor < 0 || floor > 4){
        cout << "Invalid floor number: " << floor << endl;
    }
    else{
        created_node = head[floor - 1]; // head la point kela pointer input floor chya
        cout << "Enter the room number: ";
        cin >> room;
        if (room < 0 || room > 10){
            cout << "Invalid room number: " << room << endl;
        }
        else{
            int i = 1;
            while (i < room){
                created_node = created_node -> next;  // pudhe dhakalnar
                i++;
            }
            if (created_node -> room_capacity >= number_of_people){ // room chi Capacity jasta asel or equal asel you can apply
                cout << "Room is Available! You can Apply for the Room!" << endl;
                int count = 0;
                while(created_node -> fill_room - 1 <= created_node -> room_capacity){ // lly i.e similarly jevha paryanta room fill nahi hoel tevha paryanta
                    cout << "Enter Name - " << created_node -> fill_room + 1 << ": ";
                    cin >> created_node -> name[created_node -> fill_room]; // name input  karaycha
                    cout << "Re-Enter Name - " << created_node-> fill_room + 1 << ": ";
                    cin >> name_save[room-1][floor-1]; // re-enter kela two D array madhe save karnya sathi
                    // two input ghetle karan string work nahi karat hota name[][] only char work karat hota! idk why
                    count++;
                    created_node -> fill_room++;
                    if(count >= number_of_people){
                        break;
                    }
                }
                created_node -> room_capacity = created_node -> room_capacity - number_of_people; // finally update kela room capacity la kiti peoples baki ahe tyane
            }
            else{
                cout << "Room of Your Choice is Currently Not Available" << endl;
            }
        }
    }
}

// pudhcha similar statements almost self explanatory ahe bilkul same to same varcha jasa hota tasa
void hostel :: cancel(int check){
    char namecheck[10];
    int flag = 0;
    int room, i = 1;
    if (check < 0 || check > 4)
    {
        cout << "Invalid Floor No.: " << check << endl;
    }
    else
    {
        cout << "Enter Room Number: ";
        cin >> room;
        if (room < 0 || room > 10)
        {
            cout << "Invalid Room number: " << room << endl;
        }
        else
        {
            cout << "Enter the name to be deleted: ";
            cin >> namecheck;
            string ncheck = namecheck; // char la string madhe convert kela ithe
            search(ncheck); // te konta room madhla manus ahe te print karnya sathi search function use kela
            created_node = head[check - 1];
            while (i < room)
            {
                created_node = created_node -> next;
                i++;
            }
            i = 0;
            while (i < 3)
            {
                // strcmp ha inbuilt function use kela string.h madhla
                // ha function two characters or strings la compare karto and perfectly match karat asel tar 0 output deto
                //  and cpp madhe 0 is considered false
                // so to make it if(true) apan !strcmp(some,some) lihila
                if (!strcmp(namecheck, created_node -> name[i]))
                {
                    flag = 1;
                    break;
                    i = 0;
                }
                else
                    i++;
            }
            if (flag == 1 && created_node -> fill_room != 0) // jar match zala tar record delete hoel
            {
                cout << "Record deleted : " << created_node -> name[i] << endl;
                created_node -> name[i][0] = 'A'; // I don't know he ka karava lagto tar! may be deletion sathi
                created_node -> name[i][1] = '\0'; // same same
                created_node -> fill_room--; // fill_room variable update karnya sathi
                created_node -> room_capacity++; // room_capacity update karnya satthi
            }
            else
                cout << "\nRecord Not Avaiable" << endl;
        }
    }
}
void hostel :: display(){
    int j = 0, k = 0, l = 0;
    for (int i = 0; i < 60; i++){
        cout << "--";
    }
    cout << endl;
    for (int i = 1; i < 4; i++){
        cout << " Floor number : " << i << " \t\t\t";
    }
    cout << endl;
    for (int i = 0; i < 60; i++){
        cout << "--";
    }
    created_node = head[j];
    Node *secondfloor_node = head[j + 1]; // second floor display sathi pointer create kela and tyala head la point kela
    Node *thirdfloor_node = head[j + 2]; // lly
    cout << endl;
    while (created_node != NULL){
        if (created_node->fill_room != created_node->room_capacity && created_node->room_capacity != 0){
            j++;
            cout << " Room no: " << j;
            cout << ":-- Vacant Room --: " << created_node -> room_capacity;
        }
        else{
            j++;
            cout << " Room no: " << j;
            cout << " Already Booked by: " << name_save[j-1][0]; // display karnya sathi koni book kela te
        }
        if (secondfloor_node->fill_room != secondfloor_node->room_capacity && secondfloor_node->room_capacity != 0){
            k++;
            cout << "\t Room no: " << k;
            cout << ":-- Vacant Room --: "<< secondfloor_node->room_capacity;
        }
        else{
            k++;
            cout << "\t Room no: " << k;
            cout << "\t Already Booked by: "<< name_save[k-1][1];
        }
        if(thirdfloor_node->fill_room != thirdfloor_node->room_capacity && thirdfloor_node->room_capacity != 0){
            l++;
            cout << "\t Room no: " << l;
            cout << ":-- Vacant Room --: "<< thirdfloor_node->room_capacity << "| ";
        }
        else{
            l++;
            cout << " Room no: " << l;
            cout << "\t Already Booked by: "<< name_save[l-1][2];
        }
        cout << " " << endl;
        cout << endl;
        created_node = created_node->next; // pudhe dhakalnar [or apan asa pan bolu shakto ki link karnar] next la
        secondfloor_node = secondfloor_node->next; // secondfloor_node pointer sathi pan same
        thirdfloor_node = thirdfloor_node->next; // thirdfloor_node pointer sathi pan same
    }
    for (int i = 0; i < 60; i++){
        cout << "--";
    }
    cout << endl;
}
void hostel :: search(string key){
        bool found = 0;
        int i_position; // room sathi
        int j_position; // floor sathi
        // linear search kela - and jya place var sapadla tyala output karnar
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 3; j++){
                if(name_save[i][j] == key){
                    found = 1;
                    i_position = i;
                    j_position = j;
                    break;
                }
            }
        }
        if(found)
            cout << "Name Found at: \nRoom no " << i_position + 1 << "\nFloor no. " << j_position + 1<< endl;
        else
            cout << "Name not found "<< endl;
}

int main(){
    hostel management; // management name cha object create kela and baki sagla self explanatory ahe
    int choice, floorcheck;
    char ch;
    string namecheck;
    management.create();
    do{
        cout << "1. Display Current Status of Rooms" << endl;
        cout << "2. Book a Room for 1 person." << endl;
        cout << "3. Book a Room for 2 person." << endl;
        cout << "4. Book a Room for 3 person." << endl;
        cout << "5. Cancel a Room" << endl;
        cout << "6. Search a Name" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
            case 1:
                management.display();
                break;
            case 2:
                management.book(1);
                break;
            case 3:
                management.book(2);
                break;
            case 4:
                management.book(3);
                break;
            case 5:
                cout << "Enter Floor no.: ";
                cin >> floorcheck;
                management.cancel(floorcheck);
                break;
            case 6:
                cout << "Enter name: ";
                cin >> namecheck;
                management.search(namecheck);
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
        cout << "Do You want to Continue (Y/N): ";
        cin >> ch;
        cout << endl;
    }while(ch == 'Y' || ch == 'y');
    return 0;
}

// Algorithm madhe every function cha psedo code type add kara
// idk about flowchart, do something interesting here, LOL
