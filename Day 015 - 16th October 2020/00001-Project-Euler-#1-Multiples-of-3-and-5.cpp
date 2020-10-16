/*
Link - https://www.hackerrank.com/contests/projecteuler/challenges/euler001/
*/

#include <iostream>
using namespace std;

int main(){
    long int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){

        cin >> n;
        long int three = (n - 1) / 3;
        long int five = (n - 1) / 5;
        long int three_x_five = (n - 1) / 15;
        long int s3 = 3 * (three*(three + 1))/2;
        long int s5 = 5 * (five*(five + 1))/2;
        long int s15 = 15 * (three_x_five*(three_x_five + 1))/2;
        cout << (s3 + s5) - s15 << endl;
    }
    return 0;
}
