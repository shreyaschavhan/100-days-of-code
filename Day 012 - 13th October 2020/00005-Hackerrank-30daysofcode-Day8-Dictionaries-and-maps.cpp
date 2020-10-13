/* https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

/* Only For me - https://www.youtube.com/watch?v=nPSDR5nZzHA */
int main() {
    int n;
    map <string, int> phone_book;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int number;
        cin >> name >> number;
        phone_book[name] = number;
    }
    string name;
    while(cin >> name){
        if(phone_book.find(name) != phone_book.end()){

            /* Note: Just for me : http://www.cplusplus.com/reference/map/map/ - Shreyas*/
            cout << name << "=" <<  phone_book[name] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}
