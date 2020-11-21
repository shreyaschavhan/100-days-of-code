#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dup = n;
    int sum = 0;
    while(n > 0){
        int rem = n%10;
        sum += rem * rem * rem;
        n = n/10;
    }
    cout << sum;
    if(dup == sum){
        cout << "Armstrong Number" << endl;
    }
    else{
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}
