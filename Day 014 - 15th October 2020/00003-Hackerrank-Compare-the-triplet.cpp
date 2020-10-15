/*
Link - https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/



#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    vector <int> b;
    int elementa;
    for(int i = 0; i < 3; i++){
        cin >> elementa;
        a.push_back(elementa);
    }
    int elementb;
    for(int j = 0; j < 3; j++){
        cin >> elementb;
        b.push_back(elementb);
    }

    int alice = 0;
    int bob = 0;
    for(auto k = 0; k < 3; k++){
        if(a[k] > b[k]){
            alice++;
        }
        else if(a[k] < b[k]){
            bob++;
        }
        else{
            alice += 0;
            bob += 0;
        }
    }
    cout << alice << " " << bob << endl;
    return 0;
}
