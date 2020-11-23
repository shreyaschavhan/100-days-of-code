#include <iostream>
using namespace std;

void pythagorianTriplet(int n1, int n2, int n3){
    int a = max(n2, n3);
    int b = max(n1 , a);
    int x = b;
    int arr[3] = {n1 , n2 , n3};
    int y[2];
    int count = 0;
    for(int i : arr){
        if(i != a && i != b){
            y[count] = i;
            count++;
        }
    }
    if(x*x == (y[0] * y[0]) +(y[1]*y[1])){
        cout << "Pythagorian Triplet" << endl;
    }
    else{
        cout << "Not Pythagorian Triplet" << endl;
    }
}


int main(){
    int a, b, c;
    cin >> a >> b >> c;
    pythagorianTriplet(a, b, c);
    return 0;
}
