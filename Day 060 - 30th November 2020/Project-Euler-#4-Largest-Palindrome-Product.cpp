#include <iostream>
using namespace std;

int reverse(int n){
    int reversedNumber = 0;
    int remainder;
    while(n > 0){
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int maxPalindrome = INT32_MIN;
        for(int i = 100; i < 1000; i++){
            for(int j = 100; j < 1000; j++){
                if(i*j == reverse(i*j) && i*j < n){
                    maxPalindrome = max(maxPalindrome, i*j);
                }
            }
        }
        cout << maxPalindrome << endl;
    }


    return 0;
}
