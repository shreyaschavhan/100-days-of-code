#include <iostream>
using namespace std;

void minMax(int n1, int n2, int n3){
    // int a = max(n2, n3);
    // int b = max(n1 , a);
    // cout << "Max: " << b << endl;
    // int arr[3] = {n1 , n2 , n3};
    // for(int i : arr){
    //     if(i != a && i != b){
    //         cout << "Min: " << i << endl;
    //     }
    // }
    cout << "Max: " << max(n1, max(n2, n3)) << endl;
    cout << "Min: " << min(n1, min(n2, n3)) << endl;
}

int main(){
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    minMax(num1, num2, num3);
    return 0;
}
