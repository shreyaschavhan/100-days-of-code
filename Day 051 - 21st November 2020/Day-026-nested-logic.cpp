#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int actual_date, actual_month, actual_year;
    int expected_date, expected_month, expected_year;
    int fine;
    cin >> actual_date >> actual_month >> actual_year;
    cin >> expected_date >> expected_month >> expected_year;
    if(expected_year < actual_year){
        fine = 10000;
    }
    else{
        if(expected_year == actual_year){
            if(expected_month == actual_month){
                if(expected_date <= actual_date){
                    fine = 15 * (actual_date - expected_date);
                }
                else{
                    fine = 0;
                }
            }
            else{
                if(expected_month < actual_month){
                    fine = 500 * (actual_month - expected_month);
                }
                else{
                    fine = 0;
                }
            }
        }
        else{
            fine = 0;
        }
    }
    cout << fine << endl;
    return 0;
}
