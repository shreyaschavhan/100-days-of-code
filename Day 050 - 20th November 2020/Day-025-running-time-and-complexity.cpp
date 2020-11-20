#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int flag = 0;
        for(int j = 2; j <= sqrt(n); j++){
                if(n%j == 0){
                    flag = 1;
                    break;
                }
        }
        if(flag == 0){
            if(n == 0 || n == 1){
                cout << "Not prime" << endl;
            }
            else{
                cout << "Prime" << endl;
            }

        }
        else{
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
