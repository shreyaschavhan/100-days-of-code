#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data = 1;
    int person = 0;
    char name[3][10];
    Node *next;
    Node *previous;
};

class hostel{
    Node *head;
    Node *createnode;
public:
    hostel()
    {
        head = NULL;
    }
    void create();
    void display();
    void book(int);
    void cancel();
    void upgrade();

};

void hostel :: create(){
    for(int i = 0; i < 9; i++){
        Node *newnode = new Node;
        newnode -> next = NULL;
        newnode -> previous = NULL;
        if (head == NULL){
            head = newnode;
            newnode -> data = 1;
        }
        else{
            Node *createnode = head;
            while (createnode -> next != NULL){
                createnode = createnode -> next;
            }
            if (i == 3 || i == 5 || i == 7 || i == 8){
                createnode -> data = 3;
            }
            if (i == 2 || i == 4 || i == 6){
                createnode -> data = 2;
            }
            createnode -> next = newnode;
            newnode -> previous = createnode;
        }
    }
}
void hostel :: display(){
    int j = 0;
    for(int i = 0; i < 25; i++){
        cout << "--";
    }
    cout << endl;
    cout << "\t\t Ground Floor \t\t\t" << endl;
    for(int i = 0; i < 25; i++){
        cout << "--";
    }
    createnode = head;
    cout << endl;
    while (createnode != NULL)
        {
            if (createnode->person != createnode->data && createnode->data != 0)
            {
                j++;
                cout << " Room no: " << j;
                cout << " == Vacant Room == Avaiable Size : " << createnode->data;
            }
            else
            {
                j++;
                cout << " Room no: " << j;
                cout << " ==  Room Not Available ";
            }
            cout << endl;
            createnode = createnode->next;
        }
    for(int i = 0; i < 25; i++){
        cout << "--";
    }
    cout << endl;
}

void hostel :: book(int Capacity){
    int room;
    createnode = head;
    cout << endl << "Enter the room number: ";
    cin >> room;
    int i = 1;
    while(i < room){
        createnode = createnode ->  next;
        i++;
    }
    if(createnode -> data >= Capacity){
        cout << endl << "Room is Available! You can Apply for the Room!";
        int count = 0;
        while(createnode -> person - 1 <= createnode -> data){
            cout << endl << "Enter Name: " << createnode -> person + 1 << ": ";
            cin >> createnode -> name[createnode -> person];
            count++;
            if(count >= Capacity){
                break;
            }
        }
        createnode -> data = createnode -> data - Capacity;
    }
    else{
        cout << endl << "Room of Your Choice is Currently Not Available" << endl;
    }
}

void hostel :: cancel(){
    char checkname[10];
    int flag = 0;
    int room, i = 1;
    cout << "Enter Room Number: ";
    cin >> room;
    cout << "Enter the name to be deleted: ";
    cin >> checkname;
    createnode = head;
    while(i < room){
        createnode = createnode -> next;
        i++;
    }
    i = 0;
    while(i < 3){
        //---- erase karshil he ----
        // Reminder: strcmp = return 0 if match perfectly! I think we can use regex too.
        //---- erase karshil he ----
        if(!strcmp(checkname, createnode -> name[i])){
            flag = 1;
            break;
            i = 0;
        }
        else{
            i++;
        }
        if(flag == 1 && createnode -> person != 0){
            cout << endl << "Record Deleted : " << createnode -> name[i];
            createnode -> name[i][0] = 'A';
            createnode -> name[i][1] = '\0';
            createnode -> person--;
            createnode -> data++;
        }
        else{
            cout << endl << "Record Not Present";
        }
    }
}

void hostel :: upgrade()
{
    char checkname[10];
    int room, i = 1;
    cout << "Enter Room Number: ";
    cin >> room;
    cout << "Enter the name to be updated :";
    cin >> checkname;
    createnode = head;
    while (i < room)
    {
        createnode = createnode -> next;
        i++;
    }
    i = 0;
    while (i < 3)
    {
        if (!strcmp(checkname, createnode -> name[i]))
        {
            cout << endl << "Enter Updated Name: ";
            cin >> createnode -> name[i];
            break;
        }
        else
            i++;
    }
    if (i >= 3)
        cout << "Record Not Found" << endl;
    else
    {
        cout << "Record updated"<< endl;
        cout << "Previous name: " << checkname << endl;
        cout << "Updated name : " << createnode -> name[i] << endl;
    }
}

int main(){
    hostel management;
    int choice;
    char ch;
    management.create();
    do{
        cout << "1. Display Current Status of Rooms" << endl;
        cout << "2. Book a Room for 1 person." << endl;
        cout << "3. Book a Room for 2 person." << endl;
        cout << "4. Book a Room for 3 person." << endl;
        cout << "5. Cancel a Room" << endl;
        cout << "6. Upgrade a Room" << endl;
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
                management.cancel();
                break;
            case 6:
                management.upgrade();
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
