/*******************************************************************************
Assignment no. 7 -
Create user defined exception to check the following conditions and throw the
exception if the criterion does not meet.
a. User has age between 18 and 55.
b. User stays has income between Rs. 50,000 - Rs. 1,00,000 per month
c. User stays in Pune/Mumbai/Banglore/Chennai
d. User has 4-wheeler

Accept age, Income, City, Vehicle from the user and check for the conditions
mentioned above. If any of the condition not met then throw the expception;
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int age, income, vehicle_wheels;
    string city;
    cout << "<age> <income> <city> <No. of wheels>" << endl;
    cin >> age >> income >> city >> vehicle_wheels;
    try{
        if(age > 18 && age < 55 && income > 50000 && income < 100000 && vehicle_wheels == 4 && (city == "Pune" || city == "Mumbai" || city == "Banglore" || city == "Chennai")){
            cout << "All Condtions met" << endl;
        }
        else{
            throw age;
        }
    }
    catch(int age){
        cout << "Condtions not met." << endl;
    }
    return 0;
}
