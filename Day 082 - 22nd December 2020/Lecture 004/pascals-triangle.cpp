#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num =1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            if(j == 0 || i == 0){
                num = 1;
            }
            else{
                num = num * (i - j + 1)/j;
            }
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
