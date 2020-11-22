#include <iostream>
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int ans = add(num1, num2);
    cout << num1 << " + " << num2 << " = " << ans << endl;
    return 0;
}
