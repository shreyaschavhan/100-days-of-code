// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map <string, int> marks;
    int q;
    int type;
    string name;
    int mark;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> type >> name;
        if(type == 1){
            cin >> mark;
            marks[name] += mark;
        }
        if(type == 2){
            marks.erase(name);
        }
        if(type == 3){
            cout << marks[name] << endl;
        }
    }

    return 0;
}
